
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t u8 ;
struct sk_buff {int dummy; } ;
struct rtl_tcb_desc {int dummy; } ;
struct TYPE_15__ {int waitq_lock; } ;
struct TYPE_14__ {scalar_t__ rfpwr_state; } ;
struct TYPE_11__ {scalar_t__ switch_in_process; } ;
struct TYPE_10__ {scalar_t__ supp_phymode_switch; } ;
struct TYPE_9__ {int earlymode_enable; } ;
struct rtl_priv {TYPE_8__* intf_ops; TYPE_7__ locks; TYPE_6__ psc; TYPE_5__* buddy_priv; TYPE_3__ easy_concurrent_ctl; TYPE_2__ dm; TYPE_1__ rtlhal; } ;
struct rtl_pci {struct rtl8192_tx_ring* tx_ring; } ;
struct rtl_mac {int * skb_waitq; int act_scanning; } ;
struct rtl_hal {scalar_t__ max_earlymode_num; } ;
struct rtl8192_tx_ring {scalar_t__ entries; int queue; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_16__ {int (* adapter_tx ) (struct ieee80211_hw*,int *,struct sk_buff*,struct rtl_tcb_desc*) ;} ;
struct TYPE_12__ {scalar_t__ switch_in_process; } ;
struct TYPE_13__ {TYPE_4__ easy_concurrent_ctl; } ;


 scalar_t__ VAR_0 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (struct ieee80211_hw*,struct sk_buff*,struct rtl_tcb_desc*,int) ;
 size_t* VAR_2 ;
 int FUNC_2 (struct rtl_tcb_desc*,int ,int) ;
 struct rtl_hal* FUNC_3 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_4 (struct rtl_priv*) ;
 struct rtl_pci* FUNC_5 (int ) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_7 (struct ieee80211_hw*) ;
 size_t FUNC_8 (int) ;
 struct sk_buff* FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct ieee80211_hw*,int *,struct sk_buff*,struct rtl_tcb_desc*) ;

__attribute__((used)) static void FUNC_15(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_7(VAR_3);
 struct rtl_mac *VAR_5 = FUNC_4(FUNC_7(VAR_3));
 struct rtl_pci *VAR_6 = FUNC_5(FUNC_6(VAR_3));
 struct sk_buff *VAR_7 = ((void*)0);
 struct ieee80211_tx_info *VAR_8 = ((void*)0);
 struct rtl_hal *VAR_9 = FUNC_3(FUNC_7(VAR_3));
 int VAR_10;

 if (!VAR_4->rtlhal.earlymode_enable)
  return;

 if (VAR_4->dm.supp_phymode_switch &&
     (VAR_4->easy_concurrent_ctl.switch_in_process ||
     (VAR_4->buddy_priv &&
     VAR_4->buddy_priv->easy_concurrent_ctl.switch_in_process)))
  return;

 for (VAR_10 = 7; VAR_10 >= 0; VAR_10--) {
  u8 VAR_11 = VAR_2[FUNC_8(VAR_10)];
  struct rtl8192_tx_ring *VAR_12 = &VAR_6->tx_ring[VAR_11];

  while (!VAR_5->act_scanning &&
         VAR_4->psc.rfpwr_state == VAR_0) {
   struct rtl_tcb_desc VAR_13;

   FUNC_2(&VAR_13, 0, sizeof(struct rtl_tcb_desc));

   FUNC_12(&VAR_4->locks.waitq_lock);
   if (!FUNC_10(&VAR_5->skb_waitq[VAR_10]) &&
       (VAR_12->entries - FUNC_11(&VAR_12->queue) >
        VAR_9->max_earlymode_num)) {
    VAR_7 = FUNC_9(&VAR_5->skb_waitq[VAR_10]);
   } else {
    FUNC_13(&VAR_4->locks.waitq_lock);
    break;
   }
   FUNC_13(&VAR_4->locks.waitq_lock);




   VAR_8 = FUNC_0(VAR_7);
   if (VAR_8->flags & VAR_1)
    FUNC_1(VAR_3, VAR_7,
          &VAR_13, VAR_10);

   VAR_4->intf_ops->adapter_tx(VAR_3, ((void*)0), VAR_7, &VAR_13);
  }
 }
}
