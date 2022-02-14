
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct scif_qp* rb_base; } ;
struct scif_qp {TYPE_2__ inbound_q; } ;
struct TYPE_3__ {struct scif_qp* qp; } ;
struct scif_endpt {int lock; TYPE_1__ qp_info; } ;


 int FUNC_0 (struct scif_qp*) ;
 int FUNC_1 (struct scif_endpt*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(void *VAR_0)
{
 struct scif_endpt *VAR_1 = VAR_0;
 struct scif_qp *VAR_2 = VAR_1->qp_info.qp;

 if (VAR_2) {
  FUNC_2(&VAR_1->lock);
  FUNC_1(VAR_1);
  FUNC_3(&VAR_1->lock);
  FUNC_0(VAR_2->inbound_q.rb_base);
  FUNC_0(VAR_2);
 }
}
