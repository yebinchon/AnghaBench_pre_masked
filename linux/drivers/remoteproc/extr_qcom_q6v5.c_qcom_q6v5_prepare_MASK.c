
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_q6v5 {int running; int handover_issued; int handover_irq; int stop_done; int start_done; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct qcom_q6v5 *VAR_0)
{
 FUNC_1(&VAR_0->start_done);
 FUNC_1(&VAR_0->stop_done);

 VAR_0->running = 1;
 VAR_0->handover_issued = 0;

 FUNC_0(VAR_0->handover_irq);

 return 0;
}
