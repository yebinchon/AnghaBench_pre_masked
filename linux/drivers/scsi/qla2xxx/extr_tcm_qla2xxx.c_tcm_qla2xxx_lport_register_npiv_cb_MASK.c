
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vport_id ;
typedef void* u64 ;
struct tcm_qla2xxx_lport {struct scsi_qla_host* qla_vha; TYPE_1__* tpg_1; } ;
struct TYPE_4__ {void* target_lport_ptr; } ;
struct scsi_qla_host {struct Scsi_Host* host; TYPE_2__ vha_tgt; } ;
struct fc_vport_identifiers {int disable; int vport_type; int roles; void* node_name; void* port_name; } ;
struct fc_vport {scalar_t__ dd_data; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_3__ {int lport_tpg_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct fc_vport* FUNC_1 (struct Scsi_Host*,int ,struct fc_vport_identifiers*) ;
 int FUNC_2 (struct fc_vport_identifiers*,int ,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct scsi_qla_host*) ;
 int FUNC_5 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_6(struct scsi_qla_host *VAR_4,
           void *VAR_5,
           u64 VAR_6, u64 VAR_7)
{
 struct fc_vport *VAR_8;
 struct Scsi_Host *VAR_9 = VAR_4->host;
 struct scsi_qla_host *VAR_10;
 struct tcm_qla2xxx_lport *VAR_11 =
   (struct tcm_qla2xxx_lport *)VAR_5;
 struct tcm_qla2xxx_lport *VAR_12 =
   (struct tcm_qla2xxx_lport *)VAR_4->vha_tgt.target_lport_ptr;
 struct fc_vport_identifiers VAR_13;

 if (FUNC_4(VAR_4)) {
  FUNC_3("qla2xxx base_vha not enabled for target mode\n");
  return -VAR_1;
 }

 if (!VAR_12 || !VAR_12->tpg_1 ||
     !FUNC_0(&VAR_12->tpg_1->lport_tpg_enabled)) {
  FUNC_3("qla2xxx base_lport or tpg_1 not available\n");
  return -VAR_1;
 }

 FUNC_2(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.port_name = VAR_6;
 VAR_13.node_name = VAR_7;
 VAR_13.roles = VAR_3;
 VAR_13.vport_type = VAR_2;
 VAR_13.disable = 0;

 VAR_8 = FUNC_1(VAR_9, 0, &VAR_13);
 if (!VAR_8) {
  FUNC_3("fc_vport_create failed for qla2xxx_npiv\n");
  return -VAR_0;
 }



 VAR_10 = (struct scsi_qla_host *)VAR_8->dd_data;
 VAR_10->vha_tgt.target_lport_ptr = VAR_5;
 VAR_11->qla_vha = VAR_10;
 FUNC_5(VAR_10->host);
 return 0;
}
