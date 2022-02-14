
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct gem {TYPE_1__* pdev; scalar_t__ reset_task_pending; int link_timer; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (struct gem*) ;
 int FUNC_3 (struct gem*) ;
 int FUNC_4 (struct gem*) ;
 int FUNC_5 (struct gem*) ;
 int FUNC_6 (struct gem*) ;
 int FUNC_7 (struct gem*) ;
 int FUNC_8 (struct gem*,int) ;
 int FUNC_9 (int) ;
 struct gem* FUNC_10 (struct net_device*) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_12(struct net_device *VAR_0, int VAR_1)
{
 struct gem *VAR_2 = FUNC_10(VAR_0);


 FUNC_4(VAR_2);






 FUNC_3(VAR_2);


 FUNC_0(&VAR_2->link_timer);
 VAR_2->reset_task_pending = 0;


 FUNC_7(VAR_2);
 FUNC_9(10);
 if (!VAR_1)
  FUNC_6(VAR_2);
 FUNC_9(10);


 FUNC_2(VAR_2);


 FUNC_1(VAR_2->pdev->irq, (void *) VAR_0);


 FUNC_8(VAR_2, VAR_1);


 FUNC_11(VAR_2->pdev);


 if (!VAR_1)
  FUNC_5(VAR_2);
}
