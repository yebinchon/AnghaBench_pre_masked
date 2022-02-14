
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_q6v5 {int handover_irq; int start_done; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;

int FUNC_2(struct qcom_q6v5 *VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_1->start_done, VAR_2);
 if (!VAR_3)
  FUNC_0(VAR_1->handover_irq);

 return !VAR_3 ? -VAR_0 : 0;
}
