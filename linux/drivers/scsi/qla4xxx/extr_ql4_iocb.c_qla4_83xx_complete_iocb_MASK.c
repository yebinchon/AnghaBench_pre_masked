
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_qla_host {TYPE_1__* qla4_83xx_reg; int response_out; } ;
struct TYPE_2__ {int rsp_q_out; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct scsi_qla_host *VAR_0)
{
 FUNC_1(VAR_0->response_out, &VAR_0->qla4_83xx_reg->rsp_q_out);
 FUNC_0(&VAR_0->qla4_83xx_reg->rsp_q_out);
}
