
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; int data; scalar_t__ sk; } ;
struct net_device {int dummy; } ;
struct mwifiex_txinfo {scalar_t__ bss_type; scalar_t__ pkt_len; int bss_num; } ;
struct TYPE_4__ {int tx_dropped; } ;
struct mwifiex_private {scalar_t__ bss_type; scalar_t__ check_tdls_tx; TYPE_3__* adapter; int cfg_bssid; int bss_num; TYPE_1__ stats; } ;
typedef int netdev_tx_t ;
struct TYPE_6__ {scalar_t__ fw_api_ver; scalar_t__ auto_tdls; int fw_cap_info; int work_flags; } ;
struct TYPE_5__ {int tx_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct mwifiex_txinfo* FUNC_1 (struct sk_buff*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_10 ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct mwifiex_txinfo*,int ,int) ;
 struct sk_buff* FUNC_7 (struct mwifiex_private*,struct sk_buff*,int ,int *) ;
 int FUNC_8 (TYPE_3__*,int ,char*,...) ;
 struct mwifiex_private* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct mwifiex_private*,struct sk_buff*) ;
 int FUNC_11 (struct mwifiex_private*,struct sk_buff*) ;
 scalar_t__ FUNC_12 (struct sk_buff*) ;
 struct sk_buff* FUNC_13 (struct sk_buff*,scalar_t__) ;
 TYPE_2__* FUNC_14 (struct sk_buff*) ;
 scalar_t__ FUNC_15 (int ,int *) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static netdev_tx_t
FUNC_17(struct sk_buff *VAR_11, struct net_device *VAR_12)
{
 struct mwifiex_private *VAR_13 = FUNC_9(VAR_12);
 struct sk_buff *VAR_14;
 struct mwifiex_txinfo *VAR_15;
 bool VAR_16;

 FUNC_8(VAR_13->adapter, VAR_0,
      "data: %lu BSS(%d-%d): Data <= kernel\n",
      VAR_10, VAR_13->bss_type, VAR_13->bss_num);

 if (FUNC_15(VAR_8, &VAR_13->adapter->work_flags)) {
  FUNC_5(VAR_11);
  VAR_13->stats.tx_dropped++;
  return 0;
 }
 if (!VAR_11->len || (VAR_11->len > VAR_2)) {
  FUNC_8(VAR_13->adapter, VAR_1,
       "Tx: bad skb len %d\n", VAR_11->len);
  FUNC_5(VAR_11);
  VAR_13->stats.tx_dropped++;
  return 0;
 }
 if (FUNC_12(VAR_11) < VAR_7) {
  FUNC_8(VAR_13->adapter, VAR_0,
       "data: Tx: insufficient skb headroom %d\n",
       FUNC_12(VAR_11));

  VAR_14 =
   FUNC_13(VAR_11, VAR_7);
  if (FUNC_16(!VAR_14)) {
   FUNC_8(VAR_13->adapter, VAR_1,
        "Tx: cannot alloca new_skb\n");
   FUNC_5(VAR_11);
   VAR_13->stats.tx_dropped++;
   return 0;
  }
  FUNC_5(VAR_11);
  VAR_11 = VAR_14;
  FUNC_8(VAR_13->adapter, VAR_3,
       "info: new skb headroomd %d\n",
       FUNC_12(VAR_11));
 }

 VAR_15 = FUNC_1(VAR_11);
 FUNC_6(VAR_15, 0, sizeof(*VAR_15));
 VAR_15->bss_num = VAR_13->bss_num;
 VAR_15->bss_type = VAR_13->bss_type;
 VAR_15->pkt_len = VAR_11->len;

 VAR_16 = FUNC_4(VAR_11->data);

 if (FUNC_16(!VAR_16 && VAR_11->sk &&
       FUNC_14(VAR_11)->tx_flags & VAR_9 &&
       VAR_13->adapter->fw_api_ver == VAR_6))
  VAR_11 = FUNC_7(VAR_13,
            VAR_11,
     VAR_5, ((void*)0));
 FUNC_2(VAR_11);

 if (FUNC_0(VAR_13->adapter->fw_cap_info) &&
     VAR_13->bss_type == VAR_4 &&
     !FUNC_3(VAR_13->cfg_bssid, VAR_11->data)) {
  if (VAR_13->adapter->auto_tdls && VAR_13->check_tdls_tx)
   FUNC_11(VAR_13, VAR_11);
 }

 FUNC_10(VAR_13, VAR_11);

 return 0;
}
