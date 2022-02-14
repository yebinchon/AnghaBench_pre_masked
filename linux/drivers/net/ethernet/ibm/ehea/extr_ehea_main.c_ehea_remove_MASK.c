
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct ehea_adapter {int list; TYPE_2__* neq; int neq_tasklet; int ** port; } ;
struct TYPE_3__ {int ist1; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct ehea_adapter*) ;
 int FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,struct ehea_adapter*) ;
 int FUNC_6 (int *) ;
 struct ehea_adapter* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_1)
{
 struct ehea_adapter *VAR_2 = FUNC_7(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_2->port[VAR_3]) {
   FUNC_3(VAR_2->port[VAR_3]);
   VAR_2->port[VAR_3] = ((void*)0);
  }

 FUNC_2(VAR_1);

 FUNC_5(VAR_2->neq->attr.ist1, VAR_2);
 FUNC_8(&VAR_2->neq_tasklet);

 FUNC_0(VAR_2->neq);
 FUNC_1(VAR_2);
 FUNC_6(&VAR_2->list);

 FUNC_4();

 return 0;
}
