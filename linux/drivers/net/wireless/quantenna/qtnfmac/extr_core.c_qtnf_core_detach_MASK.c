
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qtnf_bus {int * hprio_workqueue; int * workqueue; int fw_state; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct qtnf_bus*) ;
 int FUNC_3 (struct qtnf_bus*) ;
 int FUNC_4 (struct qtnf_bus*,unsigned int) ;
 scalar_t__ FUNC_5 (struct qtnf_bus*) ;
 int FUNC_6 (struct qtnf_bus*) ;

void FUNC_7(struct qtnf_bus *VAR_2)
{
 unsigned int VAR_3;

 FUNC_2(VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  FUNC_4(VAR_2, VAR_3);

 if (FUNC_5(VAR_2))
  FUNC_3(VAR_2);

 VAR_2->fw_state = VAR_0;

 if (VAR_2->workqueue) {
  FUNC_1(VAR_2->workqueue);
  FUNC_0(VAR_2->workqueue);
  VAR_2->workqueue = ((void*)0);
 }

 if (VAR_2->hprio_workqueue) {
  FUNC_1(VAR_2->hprio_workqueue);
  FUNC_0(VAR_2->hprio_workqueue);
  VAR_2->hprio_workqueue = ((void*)0);
 }

 FUNC_6(VAR_2);
}
