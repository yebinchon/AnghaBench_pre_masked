
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int irq; } ;
struct TYPE_4__ {int napi; } ;
struct emac_adapter {struct net_device* netdev; int phydev; TYPE_1__ irq; scalar_t__ base; TYPE_2__ rx_q; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct emac_adapter*) ;
 int FUNC_1 (struct emac_adapter*) ;
 int FUNC_2 (struct emac_adapter*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,scalar_t__) ;

void FUNC_10(struct emac_adapter *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->netdev;

 FUNC_5(VAR_4);
 FUNC_3(&VAR_3->rx_q.napi);

 FUNC_7(VAR_3->phydev);





 FUNC_9(VAR_0, VAR_3->base + VAR_2);
 FUNC_9(0, VAR_3->base + VAR_1);
 FUNC_8(VAR_3->irq.irq);

 FUNC_6(VAR_3->phydev);

 FUNC_0(VAR_3);

 FUNC_2(VAR_3);
 FUNC_4(VAR_3->netdev);
 FUNC_1(VAR_3);
}
