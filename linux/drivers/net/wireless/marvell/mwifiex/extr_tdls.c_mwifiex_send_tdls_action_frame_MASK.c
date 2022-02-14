
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
typedef int tx_control ;
struct sk_buff {int len; int * data; int priority; } ;
struct mwifiex_txinfo {int flags; int bss_type; int bss_num; } ;
struct mwifiex_private {int bss_type; int bss_num; int cfg_bssid; int curr_addr; TYPE_1__* adapter; } ;
struct ieee_types_vht_oper {int dummy; } ;
struct ieee_types_vht_cap {int dummy; } ;
struct ieee_types_extcap {int dummy; } ;
struct ieee_types_bss_co_2040 {int dummy; } ;
struct ieee_types_aid {int dummy; } ;
struct ieee80211_tdls_lnkie {int dummy; } ;
struct ieee80211_tdls_data {int dummy; } ;
struct ieee80211_mgmt {int dummy; } ;
struct ieee80211_ht_operation {int dummy; } ;
struct ieee80211_ht_cap {int dummy; } ;
typedef int pkt_type ;
typedef int pkt_len ;
struct TYPE_2__ {scalar_t__ is_hw_11ac_capable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct mwifiex_txinfo* FUNC_0 (struct sk_buff*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int *,int*,int) ;
 int FUNC_6 (struct mwifiex_txinfo*,int ,int) ;
 scalar_t__ FUNC_7 (struct mwifiex_private*,int const*,int ,int ,int,struct sk_buff*) ;
 int FUNC_8 (TYPE_1__*,int ,char*) ;
 int FUNC_9 (struct mwifiex_private*,struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,int const*,int ,int ) ;
 int FUNC_11 (struct sk_buff*,int const*,size_t) ;
 int * FUNC_12 (struct sk_buff*,int) ;
 int FUNC_13 (struct sk_buff*,int) ;

int FUNC_14(struct mwifiex_private *VAR_10, const u8 *VAR_11,
       u8 VAR_12, u8 VAR_13,
       u16 VAR_14, const u8 *VAR_15,
       size_t VAR_16)
{
 struct sk_buff *VAR_17;
 struct mwifiex_txinfo *VAR_18;
 u8 *VAR_19;
 u32 VAR_20, VAR_21;
 u16 VAR_22, VAR_23;

 VAR_23 = VAR_6 +
    FUNC_4(sizeof(struct ieee80211_mgmt),
        sizeof(struct ieee80211_tdls_data)) +
    VAR_5 +
    VAR_8 +
    sizeof(struct ieee_types_extcap) +
    sizeof(struct ieee80211_ht_cap) +
    sizeof(struct ieee_types_bss_co_2040) +
    sizeof(struct ieee80211_ht_operation) +
    sizeof(struct ieee80211_tdls_lnkie) +
    VAR_16 +
    3 +
    VAR_3;

 if (VAR_10->adapter->is_hw_11ac_capable)
  VAR_23 += sizeof(struct ieee_types_vht_cap) +
      sizeof(struct ieee_types_vht_oper) +
      sizeof(struct ieee_types_aid);

 VAR_17 = FUNC_2(VAR_23);
 if (!VAR_17) {
  FUNC_8(VAR_10->adapter, VAR_2,
       "allocate skb failed for management frame\n");
  return -VAR_1;
 }

 FUNC_13(VAR_17, VAR_6);

 VAR_20 = VAR_9;
 VAR_21 = 0;
 VAR_19 = FUNC_12(VAR_17,
      VAR_5 + sizeof(VAR_22));
 FUNC_5(VAR_19, &VAR_20, sizeof(VAR_20));
 FUNC_5(VAR_19 + sizeof(VAR_20), &VAR_21, sizeof(VAR_21));

 if (FUNC_7(VAR_10, VAR_11, VAR_12,
      VAR_13, VAR_14,
      VAR_17)) {
  FUNC_3(VAR_17);
  return -VAR_0;
 }

 if (VAR_16)
  FUNC_11(VAR_17, VAR_15, VAR_16);



 FUNC_10(VAR_17, VAR_11, VAR_10->curr_addr,
     VAR_10->cfg_bssid);

 VAR_17->priority = VAR_7;

 VAR_18 = FUNC_0(VAR_17);
 FUNC_6(VAR_18, 0, sizeof(*VAR_18));
 VAR_18->bss_num = VAR_10->bss_num;
 VAR_18->bss_type = VAR_10->bss_type;
 VAR_18->flags |= VAR_4;

 VAR_22 = VAR_17->len - VAR_5 - sizeof(VAR_22);
 FUNC_5(VAR_17->data + VAR_5, &VAR_22,
        sizeof(VAR_22));
 FUNC_1(VAR_17);
 FUNC_9(VAR_10, VAR_17);

 return 0;
}
