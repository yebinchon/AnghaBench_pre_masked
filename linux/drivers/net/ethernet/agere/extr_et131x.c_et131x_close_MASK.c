
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct et131x_adapter {int error_timer; TYPE_1__* pdev; int flags; int napi; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,struct net_device*) ;
 int FUNC_3 (int *) ;
 struct et131x_adapter* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1)
{
 struct et131x_adapter *VAR_2 = FUNC_4(VAR_1);

 FUNC_1(VAR_1);
 FUNC_3(&VAR_2->napi);

 VAR_2->flags &= ~VAR_0;
 FUNC_2(VAR_2->pdev->irq, VAR_1);


 return FUNC_0(&VAR_2->error_timer);
}
