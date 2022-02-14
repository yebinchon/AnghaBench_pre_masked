
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {scalar_t__ data; int len; } ;
struct TYPE_11__ {int num_rx_inperiod; int num_tx_inperiod; int * tidtx_inperiod; } ;
struct TYPE_16__ {int state_inap; } ;
struct TYPE_15__ {int offchan_delay; } ;
struct TYPE_14__ {scalar_t__ earlymode_enable; } ;
struct rtl_priv {TYPE_10__ link_info; TYPE_5__ psc; TYPE_4__ mac80211; TYPE_3__ rtlhal; TYPE_2__* cfg; scalar_t__ use_new_trx_flow; } ;
struct rtl_pci {int pdev; struct rtl8192_tx_ring* tx_ring; } ;
struct rtl8192_tx_ring {size_t idx; int entries; int queue; int * desc; int * buffer_desc; } ;
struct ieee80211_tx_info {int flags; } ;
struct TYPE_17__ {scalar_t__ action; } ;
struct TYPE_18__ {TYPE_6__ ht_smps; } ;
struct TYPE_19__ {TYPE_7__ u; } ;
struct TYPE_20__ {TYPE_8__ action; } ;
struct ieee80211_mgmt {TYPE_9__ u; } ;
struct ieee80211_hw {int dummy; } ;
typedef int __le16 ;
struct TYPE_13__ {TYPE_1__* ops; } ;
struct TYPE_12__ {int (* get_desc ) (struct ieee80211_hw*,int*,int,int ) ;int (* is_tx_desc_closed ) (struct ieee80211_hw*,int,size_t) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct rtl_priv*,int,int ,char*,int,int,int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 struct sk_buff* FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct ieee80211_tx_info*) ;
 int FUNC_8 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_9 (struct ieee80211_hw*,int ) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int ,int ,int ,int ) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct ieee80211_hw*) ;
 struct rtl_pci* FUNC_15 (int ) ;
 int FUNC_16 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_17 (struct ieee80211_hw*) ;
 int FUNC_18 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (struct sk_buff*,int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (struct ieee80211_hw*,int,size_t) ;
 int FUNC_23 (struct ieee80211_hw*,int*,int,int ) ;

__attribute__((used)) static void FUNC_24(struct ieee80211_hw *VAR_11, int VAR_12)
{
 struct rtl_priv *VAR_13 = FUNC_17(VAR_11);
 struct rtl_pci *VAR_14 = FUNC_15(FUNC_16(VAR_11));

 struct rtl8192_tx_ring *VAR_15 = &VAR_14->tx_ring[VAR_12];

 while (FUNC_21(&VAR_15->queue)) {
  struct sk_buff *VAR_16;
  struct ieee80211_tx_info *VAR_17;
  __le16 VAR_18;
  u8 VAR_19;
  u8 *VAR_20;

  if (VAR_13->use_new_trx_flow)
   VAR_20 = (u8 *)(&VAR_15->buffer_desc[VAR_15->idx]);
  else
   VAR_20 = (u8 *)(&VAR_15->desc[VAR_15->idx]);

  if (!VAR_13->cfg->ops->is_tx_desc_closed(VAR_11, VAR_12, VAR_15->idx))
   return;
  VAR_15->idx = (VAR_15->idx + 1) % VAR_15->entries;

  VAR_16 = FUNC_2(&VAR_15->queue);
  FUNC_11(VAR_14->pdev,
     VAR_13->cfg->ops->
          get_desc(VAR_11, (u8 *)VAR_20, 1,
            VAR_6),
     VAR_16->len, VAR_8);


  if (VAR_13->rtlhal.earlymode_enable)
   FUNC_20(VAR_16, VAR_5);

  FUNC_1(VAR_13, (VAR_1 | VAR_2), VAR_4,
    "new ring->idx:%d, free: skb_queue_len:%d, free: seq:%x\n",
    VAR_15->idx,
    FUNC_21(&VAR_15->queue),
    *(u16 *)(VAR_16->data + 22));

  if (VAR_12 == VAR_9) {
   FUNC_3(VAR_16);
   goto tx_status_ok;
  }





  VAR_18 = FUNC_12(VAR_16);
  if (FUNC_6(VAR_18)) {
   if (FUNC_4(VAR_18)) {
    VAR_13->mac80211.offchan_delay = 1;
    VAR_13->psc.state_inap = 1;
   } else {
    VAR_13->psc.state_inap = 0;
   }
  }
  if (FUNC_5(VAR_18)) {
   struct ieee80211_mgmt *VAR_21 =
    (struct ieee80211_mgmt *)VAR_16->data;
   if (VAR_21->u.action.u.ht_smps.action ==
       VAR_10) {
    FUNC_3(VAR_16);
    goto tx_status_ok;
   }
  }


  VAR_19 = FUNC_13(VAR_16);
  if (VAR_19 <= 7)
   VAR_13->link_info.tidtx_inperiod[VAR_19]++;

  VAR_17 = FUNC_0(VAR_16);

  if (FUNC_10(!FUNC_6(VAR_18))) {
   FUNC_7(VAR_17);
   VAR_17->flags |= VAR_7;

   FUNC_8(VAR_11, VAR_16);
  } else {
   FUNC_18(VAR_11, VAR_16);
  }

  if ((VAR_15->entries - FUNC_21(&VAR_15->queue)) <= 4) {
   FUNC_1(VAR_13, VAR_0, VAR_3,
     "more desc left, wake skb_queue@%d, ring->idx = %d, skb_queue_len = 0x%x\n",
     VAR_12, VAR_15->idx,
     FUNC_21(&VAR_15->queue));

   FUNC_9(VAR_11, FUNC_19(VAR_16));
  }
tx_status_ok:
  VAR_16 = ((void*)0);
 }

 if (((VAR_13->link_info.num_rx_inperiod +
       VAR_13->link_info.num_tx_inperiod) > 8) ||
       VAR_13->link_info.num_rx_inperiod > 2)
  FUNC_14(VAR_11);
}
