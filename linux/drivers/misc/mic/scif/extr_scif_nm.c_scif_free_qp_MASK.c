
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; struct scif_qp* rb_base; } ;
struct scif_qp {int local_qp; TYPE_1__ inbound_q; int local_buf; } ;
struct scif_dev {struct scif_qp* qpairs; } ;


 int FUNC_0 (struct scif_qp*) ;
 int FUNC_1 (int ,struct scif_dev*,int) ;

void FUNC_2(struct scif_dev *VAR_0)
{
 struct scif_qp *VAR_1 = VAR_0->qpairs;

 if (!VAR_1)
  return;
 FUNC_1(VAR_1->local_buf, VAR_0, VAR_1->inbound_q.size);
 FUNC_0(VAR_1->inbound_q.rb_base);
 FUNC_1(VAR_1->local_qp, VAR_0, sizeof(struct scif_qp));
 FUNC_0(VAR_0->qpairs);
 VAR_0->qpairs = ((void*)0);
}
