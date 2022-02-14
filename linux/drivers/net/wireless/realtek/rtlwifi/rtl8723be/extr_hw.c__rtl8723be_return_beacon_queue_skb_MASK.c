
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; } ;
struct rtl_tx_desc {int dummy; } ;
struct TYPE_6__ {int irq_th_lock; } ;
struct rtl_priv {TYPE_3__ locks; TYPE_2__* cfg; } ;
struct rtl_pci {int pdev; struct rtl8192_tx_ring* tx_ring; } ;
struct rtl8192_tx_ring {size_t idx; int entries; int queue; struct rtl_tx_desc* desc; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* get_desc ) (struct ieee80211_hw*,int *,int,int ) ;} ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 struct rtl_pci* FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct ieee80211_hw*,int *,int,int ) ;

__attribute__((used)) static void FUNC_10(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_5(VAR_3);
 struct rtl_pci *VAR_5 = FUNC_3(FUNC_4(VAR_3));
 struct rtl8192_tx_ring *VAR_6 = &VAR_5->tx_ring[VAR_0];
 unsigned long VAR_7;

 FUNC_7(&VAR_4->locks.irq_th_lock, VAR_7);
 while (FUNC_6(&VAR_6->queue)) {
  struct rtl_tx_desc *VAR_8 = &VAR_6->desc[VAR_6->idx];
  struct sk_buff *VAR_9 = FUNC_0(&VAR_6->queue);

  FUNC_2(VAR_5->pdev,
     VAR_4->cfg->ops->get_desc(
     VAR_3,
     (u8 *)VAR_8, 1, VAR_1),
     VAR_9->len, VAR_2);
  FUNC_1(VAR_9);
  VAR_6->idx = (VAR_6->idx + 1) % VAR_6->entries;
 }
 FUNC_8(&VAR_4->locks.irq_th_lock, VAR_7);
}
