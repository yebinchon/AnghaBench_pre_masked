
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tx_desc_cmd {int dummy; } ;
struct sk_buff {scalar_t__ cb; } ;
struct rtl8192_tx_ring {unsigned int idx; unsigned int entries; int queue; int * desc; } ;
struct r8192_priv {int irq_th_lock; TYPE_1__* ops; struct rtl8192_tx_ring* tx_ring; } ;
struct net_device {int dummy; } ;
struct cb_desc {int dummy; } ;
struct TYPE_2__ {int (* tx_fill_cmd_descriptor ) (struct net_device*,struct tx_desc_cmd*,struct cb_desc*,struct sk_buff*) ;} ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,struct sk_buff*) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct net_device*,struct tx_desc_cmd*,struct cb_desc*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_2, struct sk_buff *VAR_3)
{
 struct r8192_priv *VAR_4 = FUNC_1(VAR_2);
 struct rtl8192_tx_ring *VAR_5;
 struct tx_desc_cmd *VAR_6;
 unsigned int VAR_7;
 struct cb_desc *VAR_8;
 unsigned long VAR_9;

 FUNC_3(&VAR_4->irq_th_lock, VAR_9);
 VAR_5 = &VAR_4->tx_ring[VAR_1];

 VAR_7 = (VAR_5->idx + FUNC_2(&VAR_5->queue)) % VAR_5->entries;
 VAR_6 = (struct tx_desc_cmd *)&VAR_5->desc[VAR_7];

 VAR_8 = (struct cb_desc *)(VAR_3->cb + VAR_0);

 VAR_4->ops->tx_fill_cmd_descriptor(VAR_2, VAR_6, VAR_8, VAR_3);

 FUNC_0(&VAR_5->queue, VAR_3);
 FUNC_4(&VAR_4->irq_th_lock, VAR_9);
}
