
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct cp_private {TYPE_1__* pdev; int lock; int napi; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (struct cp_private*) ;
 int FUNC_1 (struct cp_private*) ;
 int FUNC_2 (int ,struct net_device*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 struct cp_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct cp_private*,int ,struct net_device*,char*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10 (struct net_device *VAR_1)
{
 struct cp_private *VAR_2 = FUNC_4(VAR_1);
 unsigned long VAR_3;

 FUNC_3(&VAR_2->napi);

 FUNC_6(VAR_2, VAR_0, VAR_1, "disabling interface\n");

 FUNC_8(&VAR_2->lock, VAR_3);

 FUNC_7(VAR_1);
 FUNC_5(VAR_1);

 FUNC_1(VAR_2);

 FUNC_9(&VAR_2->lock, VAR_3);

 FUNC_2(VAR_2->pdev->irq, VAR_1);

 FUNC_0(VAR_2);
 return 0;
}
