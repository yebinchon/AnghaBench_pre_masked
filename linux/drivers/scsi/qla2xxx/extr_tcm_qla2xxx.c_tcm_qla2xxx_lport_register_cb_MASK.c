
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct tcm_qla2xxx_lport {struct scsi_qla_host* qla_vha; } ;
struct TYPE_4__ {void* target_lport_ptr; } ;
struct scsi_qla_host {TYPE_2__ vha_tgt; struct qla_hw_data* hw; } ;
struct TYPE_3__ {int * tgt_ops; } ;
struct qla_hw_data {TYPE_1__ tgt; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct scsi_qla_host *VAR_1,
      void *VAR_2,
      u64 VAR_3, u64 VAR_4)
{
 struct qla_hw_data *VAR_5 = VAR_1->hw;
 struct tcm_qla2xxx_lport *VAR_6 =
   (struct tcm_qla2xxx_lport *)VAR_2;



 VAR_5->tgt.tgt_ops = &VAR_0;
 VAR_1->vha_tgt.target_lport_ptr = VAR_2;
 VAR_6->qla_vha = VAR_1;

 return 0;
}
