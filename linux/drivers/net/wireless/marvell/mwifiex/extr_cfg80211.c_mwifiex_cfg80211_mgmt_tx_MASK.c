
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u16 ;
struct wireless_dev {int netdev; } ;
struct wiphy {int dummy; } ;
struct sk_buff {int dummy; } ;
struct mwifiex_txinfo {scalar_t__ pkt_len; int bss_type; int bss_num; } ;
struct mwifiex_private {int adapter; int bss_type; int bss_num; } ;
struct ieee80211_mgmt {int frame_control; } ;
struct cfg80211_mgmt_tx_params {size_t len; int * buf; } ;
typedef int pkt_len ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct mwifiex_private*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 struct mwifiex_txinfo* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct wireless_dev*,int,int const*,size_t,int,int ) ;
 struct sk_buff* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct mwifiex_txinfo*,int ,int) ;
 struct sk_buff* FUNC_7 (struct mwifiex_private*,struct sk_buff*,int ,int*) ;
 int FUNC_8 (int ,int ,char*) ;
 int FUNC_9 (struct sk_buff*,int const*,size_t) ;
 struct mwifiex_private* FUNC_10 (int ) ;
 int FUNC_11 (struct mwifiex_private*,struct sk_buff*) ;
 int FUNC_12 () ;

__attribute__((used)) static int
FUNC_13(struct wiphy *VAR_10, struct wireless_dev *VAR_11,
    struct cfg80211_mgmt_tx_params *VAR_12, u64 *VAR_13)
{
 const u8 *VAR_14 = VAR_12->buf;
 size_t VAR_15 = VAR_12->len;
 struct sk_buff *VAR_16;
 u16 VAR_17;
 const struct ieee80211_mgmt *VAR_18;
 struct mwifiex_txinfo *VAR_19;
 struct mwifiex_private *VAR_20 = FUNC_10(VAR_11->netdev);

 if (!VAR_14 || !VAR_15) {
  FUNC_8(VAR_20->adapter, VAR_2, "invalid buffer and length\n");
  return -VAR_0;
 }

 VAR_18 = (const struct ieee80211_mgmt *)VAR_14;
 if (FUNC_0(VAR_20) != VAR_6 &&
     FUNC_5(VAR_18->frame_control)) {


  FUNC_8(VAR_20->adapter, VAR_5,
       "info: skip to send probe resp in AP or GO mode\n");
  return 0;
 }

 VAR_17 = VAR_15 + VAR_3;
 VAR_16 = FUNC_3(VAR_9 +
       VAR_8 +
       VAR_17 + sizeof(VAR_17));

 if (!VAR_16) {
  FUNC_8(VAR_20->adapter, VAR_2,
       "allocate skb failed for management frame\n");
  return -VAR_1;
 }

 VAR_19 = FUNC_1(VAR_16);
 FUNC_6(VAR_19, 0, sizeof(*VAR_19));
 VAR_19->bss_num = VAR_20->bss_num;
 VAR_19->bss_type = VAR_20->bss_type;
 VAR_19->pkt_len = VAR_17;

 FUNC_9(VAR_16, VAR_14, VAR_15);
 *VAR_13 = FUNC_12() | 1;

 if (FUNC_4(VAR_18->frame_control))
  VAR_16 = FUNC_7(VAR_20,
            VAR_16,
    VAR_7, VAR_13);
 else
  FUNC_2(VAR_11, *VAR_13, VAR_14, VAR_15, 1,
     VAR_4);

 FUNC_11(VAR_20, VAR_16);

 FUNC_8(VAR_20->adapter, VAR_5, "info: management frame transmitted\n");
 return 0;
}
