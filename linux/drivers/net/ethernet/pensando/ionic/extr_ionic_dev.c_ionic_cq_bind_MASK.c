
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ionic_queue {int dummy; } ;
struct ionic_cq {struct ionic_queue* bound_q; } ;



void FUNC_0(struct ionic_cq *VAR_0, struct ionic_queue *VAR_1)
{
 VAR_0->bound_q = VAR_1;
}
