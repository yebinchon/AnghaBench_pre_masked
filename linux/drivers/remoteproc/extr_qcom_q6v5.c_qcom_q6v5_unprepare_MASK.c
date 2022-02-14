
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_q6v5 {int handover_issued; int handover_irq; } ;


 int FUNC_0 (int ) ;

int FUNC_1(struct qcom_q6v5 *VAR_0)
{
 FUNC_0(VAR_0->handover_irq);

 return !VAR_0->handover_issued;
}
