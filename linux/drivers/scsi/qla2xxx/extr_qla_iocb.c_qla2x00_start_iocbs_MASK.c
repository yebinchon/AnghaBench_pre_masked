
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct req_que {scalar_t__ ring_index; scalar_t__ length; int * req_q_in; int ring_ptr; int ring; int id; } ;
struct qla_hw_data {int rqstq_intr_code; TYPE_2__* iobase; scalar_t__ mqenable; } ;
struct TYPE_10__ {int req_q_in; } ;
struct TYPE_9__ {int req_q_in; } ;
struct TYPE_11__ {int isp; TYPE_4__ isp24; TYPE_3__ ispfx00; } ;
typedef TYPE_5__ device_reg_t ;
struct TYPE_7__ {int hccr; } ;
struct TYPE_8__ {TYPE_1__ isp24; } ;


 TYPE_5__* FUNC_0 (struct qla_hw_data*,int ) ;
 int FUNC_1 (struct qla_hw_data*,int *) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 scalar_t__ FUNC_3 (struct qla_hw_data*) ;
 scalar_t__ FUNC_4 (struct qla_hw_data*) ;
 scalar_t__ FUNC_5 (struct qla_hw_data*) ;
 scalar_t__ FUNC_6 (struct qla_hw_data*) ;
 scalar_t__ FUNC_7 (struct qla_hw_data*) ;
 int FUNC_8 (struct qla_hw_data*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,scalar_t__) ;
 int FUNC_12 (int ,scalar_t__) ;
 int FUNC_13 (struct scsi_qla_host*) ;

void
FUNC_14(struct scsi_qla_host *VAR_0, struct req_que *VAR_1)
{
 struct qla_hw_data *VAR_2 = VAR_0->hw;
 device_reg_t *VAR_3 = FUNC_0(VAR_2, VAR_1->id);

 if (FUNC_3(VAR_2)) {
  FUNC_13(VAR_0);
 } else {

  VAR_1->ring_index++;
  if (VAR_1->ring_index == VAR_1->length) {
   VAR_1->ring_index = 0;
   VAR_1->ring_ptr = VAR_1->ring;
  } else
   VAR_1->ring_ptr++;


  if (VAR_2->mqenable || FUNC_4(VAR_2) || FUNC_5(VAR_2)) {
   FUNC_11(VAR_1->req_q_in, VAR_1->ring_index);
  } else if (FUNC_6(VAR_2)) {
   FUNC_11(VAR_1->req_q_in, VAR_1->ring_index);
   FUNC_9(&VAR_2->iobase->isp24.hccr);
  } else if (FUNC_7(VAR_2)) {
   FUNC_11(&VAR_3->ispfx00.req_q_in, VAR_1->ring_index);
   FUNC_9(&VAR_3->ispfx00.req_q_in);
   FUNC_8(VAR_2, VAR_2->rqstq_intr_code);
  } else if (FUNC_2(VAR_2)) {
   FUNC_11(&VAR_3->isp24.req_q_in, VAR_1->ring_index);
   FUNC_9(&VAR_3->isp24.req_q_in);
  } else {
   FUNC_12(FUNC_1(VAR_2, &VAR_3->isp),
    VAR_1->ring_index);
   FUNC_10(FUNC_1(VAR_2, &VAR_3->isp));
  }
 }
}
