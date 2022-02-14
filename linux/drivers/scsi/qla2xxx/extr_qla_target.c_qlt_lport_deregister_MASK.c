
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * target_lport_ptr; } ;
struct scsi_qla_host {TYPE_1__ vha_tgt; struct Scsi_Host* host; struct qla_hw_data* hw; } ;
struct TYPE_4__ {int * tgt_ops; } ;
struct qla_hw_data {TYPE_2__ tgt; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (struct Scsi_Host*) ;

void FUNC_1(struct scsi_qla_host *VAR_0)
{
 struct qla_hw_data *VAR_1 = VAR_0->hw;
 struct Scsi_Host *VAR_2 = VAR_0->host;



 VAR_0->vha_tgt.target_lport_ptr = ((void*)0);
 VAR_1->tgt.tgt_ops = ((void*)0);



 FUNC_0(VAR_2);
}
