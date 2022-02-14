
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
struct TYPE_4__ {int irq_th_lock; } ;
struct rtl_priv {TYPE_3__* cfg; TYPE_1__ locks; } ;
struct rtl_pci {struct rtl8192_tx_ring* tx_ring; } ;
struct rtl8192_tx_ring {int queue; struct rtl_tx_desc* desc; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int (* tx_polling ) (struct ieee80211_hw*,size_t) ;int (* fill_tx_cmddesc ) (struct ieee80211_hw*,size_t*,int,int,struct sk_buff*) ;int (* get_desc ) (struct ieee80211_hw*,size_t*,int,int ) ;} ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct rtl_pci* FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct ieee80211_hw*,size_t*,int,int ) ;
 int FUNC_9 (struct ieee80211_hw*,size_t*,int,int,struct sk_buff*) ;
 int FUNC_10 (struct ieee80211_hw*,size_t) ;

__attribute__((used)) static bool FUNC_11(struct ieee80211_hw *VAR_2,
        struct sk_buff *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_5(VAR_2);
 struct rtl_pci *VAR_5 = FUNC_3(FUNC_4(VAR_2));
 struct rtl8192_tx_ring *VAR_6;
 struct rtl_tx_desc *VAR_7;
 u8 VAR_8 = 0;
 unsigned long VAR_9;
 struct sk_buff *VAR_10;

 VAR_6 = &VAR_5->tx_ring[VAR_0];
 VAR_10 = FUNC_0(&VAR_6->queue);
 FUNC_2(VAR_10);
 FUNC_6(&VAR_4->locks.irq_th_lock, VAR_9);
 VAR_7 = &VAR_6->desc[VAR_8];

 VAR_4->cfg->ops->get_desc(VAR_2, (u8 *)VAR_7, 1, VAR_1);
 VAR_4->cfg->ops->fill_tx_cmddesc(VAR_2, (u8 *) VAR_7, 1, 1, VAR_3);
 FUNC_1(&VAR_6->queue, VAR_3);
 FUNC_7(&VAR_4->locks.irq_th_lock, VAR_9);
 VAR_4->cfg->ops->tx_polling(VAR_2, VAR_0);
 return 1;
}
