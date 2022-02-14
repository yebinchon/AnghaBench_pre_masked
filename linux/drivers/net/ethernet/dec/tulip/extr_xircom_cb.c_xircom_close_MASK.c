
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xircom_private {TYPE_1__* pdev; scalar_t__ open; int lock; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (struct xircom_private*) ;
 int FUNC_1 (struct xircom_private*) ;
 int FUNC_2 (struct xircom_private*) ;
 int FUNC_3 (int ,struct net_device*) ;
 struct xircom_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct xircom_private*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_0)
{
 struct xircom_private *VAR_1;
 unsigned long VAR_2;

 VAR_1 = FUNC_4(VAR_0);
 FUNC_5(VAR_0);


 FUNC_7(&VAR_1->lock,VAR_2);

 FUNC_2(VAR_1);





 FUNC_6(VAR_1);

 FUNC_8(&VAR_1->lock,VAR_2);

 VAR_1->open = 0;
 FUNC_3(VAR_1->pdev->irq, VAR_0);

 return 0;

}
