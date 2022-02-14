
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bcmgenet_tx_ring {int lock; } ;


 unsigned int FUNC_0 (struct net_device*,struct bcmgenet_tx_ring*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static unsigned int FUNC_3(struct net_device *VAR_0,
    struct bcmgenet_tx_ring *VAR_1)
{
 unsigned int VAR_2;

 FUNC_1(&VAR_1->lock);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_1->lock);

 return VAR_2;
}
