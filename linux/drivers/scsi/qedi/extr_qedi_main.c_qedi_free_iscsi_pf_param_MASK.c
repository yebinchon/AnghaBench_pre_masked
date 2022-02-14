
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qedi_glbl_q_params {int dummy; } ;
struct qedi_ctx {int num_queues; int global_queues; int hw_p_cpuq; scalar_t__ p_cpuq; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,size_t,scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct qedi_ctx*) ;

__attribute__((used)) static void FUNC_3(struct qedi_ctx *VAR_0)
{
 size_t VAR_1 = 0;

 if (VAR_0->p_cpuq) {
  VAR_1 = VAR_0->num_queues * sizeof(struct qedi_glbl_q_params);
  FUNC_0(&VAR_0->pdev->dev, VAR_1, VAR_0->p_cpuq,
        VAR_0->hw_p_cpuq);
 }

 FUNC_2(VAR_0);

 FUNC_1(VAR_0->global_queues);
}
