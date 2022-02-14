
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int irq; } ;
struct emac_adapter {int reset_lock; TYPE_1__ irq; } ;


 int FUNC_0 (struct emac_adapter*) ;
 int FUNC_1 (struct emac_adapter*) ;
 int FUNC_2 (struct emac_adapter*) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct emac_adapter* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_0)
{
 struct emac_adapter *VAR_1 = FUNC_6(VAR_0);

 FUNC_4(&VAR_1->reset_lock);

 FUNC_2(VAR_1);
 FUNC_0(VAR_1);
 FUNC_1(VAR_1);

 FUNC_3(VAR_1->irq.irq, &VAR_1->irq);

 FUNC_5(&VAR_1->reset_lock);

 return 0;
}
