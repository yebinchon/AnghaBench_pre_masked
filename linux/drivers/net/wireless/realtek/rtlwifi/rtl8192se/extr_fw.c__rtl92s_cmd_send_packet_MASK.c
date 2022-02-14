
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct sk_buff {int dummy; } ;
struct rtl_tx_desc {int dummy; } ;
struct TYPE_6__ {int irq_th_lock; } ;
struct rtl_priv {TYPE_3__ locks; TYPE_2__* cfg; } ;
struct rtl_pci {struct rtl8192_tx_ring* tx_ring; } ;
struct rtl8192_tx_ring {size_t idx; size_t entries; int queue; struct rtl_tx_desc* desc; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* fill_tx_cmddesc ) (struct ieee80211_hw*,size_t*,int,int,struct sk_buff*) ;} ;


 size_t VAR_0 ;
 int FUNC_0 (int *,struct sk_buff*) ;
 struct rtl_pci* FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct ieee80211_hw*,size_t*,int,int,struct sk_buff*) ;

__attribute__((used)) static bool FUNC_8(struct ieee80211_hw *VAR_1,
  struct sk_buff *VAR_2, u8 VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_3(VAR_1);
 struct rtl_pci *VAR_5 = FUNC_1(FUNC_2(VAR_1));
 struct rtl8192_tx_ring *VAR_6;
 struct rtl_tx_desc *VAR_7;
 unsigned long VAR_8;
 u8 VAR_9 = 0;

 VAR_6 = &VAR_5->tx_ring[VAR_0];

 FUNC_5(&VAR_4->locks.irq_th_lock, VAR_8);

 VAR_9 = (VAR_6->idx + FUNC_4(&VAR_6->queue)) % VAR_6->entries;
 VAR_7 = &VAR_6->desc[VAR_9];
 VAR_4->cfg->ops->fill_tx_cmddesc(VAR_1, (u8 *)VAR_7, 1, 1, VAR_2);
 FUNC_0(&VAR_6->queue, VAR_2);

 FUNC_6(&VAR_4->locks.irq_th_lock, VAR_8);

 return 1;
}
