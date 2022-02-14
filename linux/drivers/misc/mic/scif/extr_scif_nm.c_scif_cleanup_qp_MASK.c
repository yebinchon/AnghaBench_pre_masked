
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ current_read_offset; scalar_t__ current_write_offset; } ;
struct TYPE_3__ {scalar_t__ rb_base; } ;
struct scif_qp {TYPE_2__ inbound_q; scalar_t__ local_write; int * remote_qp; TYPE_1__ outbound_q; } ;
struct scif_dev {struct scif_qp* qpairs; } ;


 int FUNC_0 (struct scif_dev*) ;
 int FUNC_1 (void*,int,struct scif_dev*) ;
 scalar_t__ FUNC_2 (struct scif_dev*) ;

__attribute__((used)) static void FUNC_3(struct scif_dev *VAR_0)
{
 struct scif_qp *VAR_1 = &VAR_0->qpairs[0];

 if (!VAR_1)
  return;
 FUNC_1((void *)VAR_1->remote_qp, sizeof(struct scif_qp), VAR_0);
 FUNC_1((void *)VAR_1->outbound_q.rb_base,
       sizeof(struct scif_qp), VAR_0);
 VAR_1->remote_qp = ((void*)0);
 VAR_1->local_write = 0;
 VAR_1->inbound_q.current_write_offset = 0;
 VAR_1->inbound_q.current_read_offset = 0;
 if (FUNC_2(VAR_0))
  FUNC_0(VAR_0);
}
