
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int size; int * rb_base; } ;
struct scif_qp {int local_qp; int local_buf; int * remote_qp; TYPE_2__ outbound_q; } ;
struct TYPE_3__ {struct scif_qp* qp; } ;
struct scif_endpt {int remote_dev; TYPE_1__ qp_info; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int,int ) ;
 int FUNC_1 (int,int ,int) ;

void FUNC_2(struct scif_endpt *VAR_1)
{
 struct scif_qp *VAR_2 = VAR_1->qp_info.qp;

 if (VAR_2->outbound_q.rb_base) {
  FUNC_0((void *)VAR_2->outbound_q.rb_base,
        VAR_2->outbound_q.size, VAR_1->remote_dev);
  VAR_2->outbound_q.rb_base = ((void*)0);
 }
 if (VAR_2->remote_qp) {
  FUNC_0((void *)VAR_2->remote_qp,
        sizeof(struct scif_qp), VAR_1->remote_dev);
  VAR_2->remote_qp = ((void*)0);
 }
 if (VAR_2->local_qp) {
  FUNC_1(VAR_2->local_qp, VAR_1->remote_dev,
      sizeof(struct scif_qp));
  VAR_2->local_qp = 0x0;
 }
 if (VAR_2->local_buf) {
  FUNC_1(VAR_2->local_buf, VAR_1->remote_dev,
      VAR_0);
  VAR_2->local_buf = 0;
 }
}
