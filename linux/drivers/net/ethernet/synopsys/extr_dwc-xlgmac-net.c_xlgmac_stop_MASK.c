
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_hw_ops {int (* exit ) (struct xlgmac_pdata*) ;int (* disable_rx ) (struct xlgmac_pdata*) ;int (* disable_tx ) (struct xlgmac_pdata*) ;} ;
struct xlgmac_pdata {unsigned int channel_count; struct xlgmac_channel* channel_head; struct net_device* netdev; struct xlgmac_hw_ops hw_ops; } ;
struct xlgmac_channel {int queue_index; int tx_ring; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;


 struct netdev_queue* FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct netdev_queue*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct xlgmac_pdata*) ;
 int FUNC_4 (struct xlgmac_pdata*) ;
 int FUNC_5 (struct xlgmac_pdata*) ;
 int FUNC_6 (struct xlgmac_pdata*) ;
 int FUNC_7 (struct xlgmac_pdata*,int) ;
 int FUNC_8 (struct xlgmac_pdata*) ;

__attribute__((used)) static void FUNC_9(struct xlgmac_pdata *VAR_0)
{
 struct xlgmac_hw_ops *VAR_1 = &VAR_0->hw_ops;
 struct net_device *VAR_2 = VAR_0->netdev;
 struct xlgmac_channel *VAR_3;
 struct netdev_queue *VAR_4;
 unsigned int VAR_5;

 FUNC_2(VAR_2);
 FUNC_8(VAR_0);
 VAR_1->disable_tx(VAR_0);
 VAR_1->disable_rx(VAR_0);
 FUNC_6(VAR_0);
 FUNC_7(VAR_0, 1);
 VAR_1->exit(VAR_0);

 VAR_3 = VAR_0->channel_head;
 for (VAR_5 = 0; VAR_5 < VAR_0->channel_count; VAR_5++, VAR_3++) {
  if (!VAR_3->tx_ring)
   continue;

  VAR_4 = FUNC_0(VAR_2, VAR_3->queue_index);
  FUNC_1(VAR_4);
 }
}
