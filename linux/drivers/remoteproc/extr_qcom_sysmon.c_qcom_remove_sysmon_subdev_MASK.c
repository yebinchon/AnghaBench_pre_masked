
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_sysmon {int qmi; int subdev; int rproc; int nb; int node; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct qcom_sysmon*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_7(struct qcom_sysmon *VAR_2)
{
 if (!VAR_2)
  return;

 FUNC_3(&VAR_0);
 FUNC_2(&VAR_2->node);
 FUNC_4(&VAR_0);

 FUNC_0(&VAR_1, &VAR_2->nb);

 FUNC_6(VAR_2->rproc, &VAR_2->subdev);

 FUNC_5(&VAR_2->qmi);

 FUNC_1(VAR_2);
}
