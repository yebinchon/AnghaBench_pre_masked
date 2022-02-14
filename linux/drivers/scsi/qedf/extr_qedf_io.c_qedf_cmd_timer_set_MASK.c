
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedf_ioreq {int timeout_work; } ;
struct qedf_ctx {int timer_work_queue; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int *,int ) ;

void FUNC_2(struct qedf_ctx *VAR_0, struct qedf_ioreq *VAR_1,
 unsigned int VAR_2)
{
 FUNC_1(VAR_0->timer_work_queue, &VAR_1->timeout_work,
     FUNC_0(VAR_2));
}
