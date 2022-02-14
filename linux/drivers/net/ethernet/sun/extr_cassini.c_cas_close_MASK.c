
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct cas {int pm_mutex; TYPE_1__* pdev; scalar_t__ opened; int napi; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (struct cas*,int *) ;
 int FUNC_1 (struct cas*) ;
 int FUNC_2 (struct cas*) ;
 int FUNC_3 (struct cas*,unsigned long) ;
 int FUNC_4 (struct cas*) ;
 int FUNC_5 (struct cas*,int ) ;
 int FUNC_6 (struct cas*) ;
 int FUNC_7 (struct cas*) ;
 int FUNC_8 (struct cas*,unsigned long) ;
 int FUNC_9 (int ,void*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 struct cas* FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*) ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_0)
{
 unsigned long VAR_1;
 struct cas *VAR_2 = FUNC_13(VAR_0);





 FUNC_10(&VAR_2->pm_mutex);

 FUNC_14(VAR_0);


 FUNC_3(VAR_2, VAR_1);
 VAR_2->opened = 0;
 FUNC_5(VAR_2, 0);
 FUNC_4(VAR_2);
 FUNC_0(VAR_2, ((void*)0));
 FUNC_1(VAR_2);
 FUNC_8(VAR_2, VAR_1);

 FUNC_9(VAR_2->pdev->irq, (void *) VAR_0);
 FUNC_6(VAR_2);
 FUNC_2(VAR_2);
 FUNC_7(VAR_2);
 FUNC_11(&VAR_2->pm_mutex);
 return 0;
}
