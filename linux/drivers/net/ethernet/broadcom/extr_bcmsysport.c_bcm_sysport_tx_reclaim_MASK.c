
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_queue {int dummy; } ;
struct bcm_sysport_tx_ring {int lock; int index; } ;
struct bcm_sysport_priv {int netdev; } ;


 unsigned int FUNC_0 (struct bcm_sysport_priv*,struct bcm_sysport_tx_ring*) ;
 struct netdev_queue* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct netdev_queue*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_5(struct bcm_sysport_priv *VAR_0,
        struct bcm_sysport_tx_ring *VAR_1)
{
 struct netdev_queue *VAR_2;
 unsigned int VAR_3;
 unsigned long VAR_4;

 VAR_2 = FUNC_1(VAR_0->netdev, VAR_1->index);

 FUNC_3(&VAR_1->lock, VAR_4);
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3)
  FUNC_2(VAR_2);

 FUNC_4(&VAR_1->lock, VAR_4);

 return VAR_3;
}
