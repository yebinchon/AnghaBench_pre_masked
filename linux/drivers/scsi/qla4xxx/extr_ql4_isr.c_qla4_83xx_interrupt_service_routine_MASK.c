
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct scsi_qla_host {TYPE_1__* qla4_83xx_reg; } ;
struct TYPE_2__ {int mb_int_mask; int risc_intr; int * mailbox_out; } ;


 int FUNC_0 (struct scsi_qla_host*,int ) ;
 int FUNC_1 (struct scsi_qla_host*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct scsi_qla_host *VAR_0,
      uint32_t VAR_1)
{

 if (VAR_1) {
  FUNC_0(VAR_0,
    FUNC_2(&VAR_0->qla4_83xx_reg->mailbox_out[0]));

  FUNC_3(0, &VAR_0->qla4_83xx_reg->risc_intr);
 } else {
  FUNC_1(VAR_0);
 }


 FUNC_3(0, &VAR_0->qla4_83xx_reg->mb_int_mask);
}
