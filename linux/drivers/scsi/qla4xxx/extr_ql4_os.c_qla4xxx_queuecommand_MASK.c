
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct srb {int dummy; } ;
struct scsi_qla_host {int srb_mempool; int dpc_flags; int flags; } ;
struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_1__* device; } ;
struct iscsi_cls_session {int dummy; } ;
struct ddb_entry {struct iscsi_cls_session* sess; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {struct ddb_entry* hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct iscsi_cls_session*) ;
 int FUNC_1 (struct srb*,int ) ;
 struct srb* FUNC_2 (struct scsi_qla_host*,struct ddb_entry*,struct scsi_cmnd*) ;
 int FUNC_3 (struct scsi_qla_host*,struct srb*) ;
 int FUNC_4 (struct scsi_qla_host*,struct srb*) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 struct scsi_qla_host* FUNC_7 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_8(struct Scsi_Host *VAR_18, struct scsi_cmnd *VAR_19)
{
 struct scsi_qla_host *VAR_20 = FUNC_7(VAR_18);
 struct ddb_entry *VAR_21 = VAR_19->device->hostdata;
 struct iscsi_cls_session *VAR_22 = VAR_21->sess;
 struct srb *VAR_23;
 int VAR_24;

 if (FUNC_6(VAR_0, &VAR_20->flags)) {
  if (FUNC_6(VAR_4, &VAR_20->flags))
   VAR_19->result = VAR_6 << 16;
  else
   VAR_19->result = VAR_7 << 16;
  goto qc_fail_command;
 }

 if (!VAR_22) {
  VAR_19->result = VAR_5 << 16;
  goto qc_fail_command;
 }

 VAR_24 = FUNC_0(VAR_22);
 if (VAR_24) {
  VAR_19->result = VAR_24;
  goto qc_fail_command;
 }

 if (FUNC_6(VAR_14, &VAR_20->dpc_flags) ||
     FUNC_6(VAR_11, &VAR_20->dpc_flags) ||
     FUNC_6(VAR_12, &VAR_20->dpc_flags) ||
     FUNC_6(VAR_9, &VAR_20->dpc_flags) ||
     FUNC_6(VAR_8, &VAR_20->dpc_flags) ||
     !FUNC_6(VAR_3, &VAR_20->flags) ||
     !FUNC_6(VAR_1, &VAR_20->flags) ||
     FUNC_6(VAR_2, &VAR_20->flags) ||
     FUNC_6(VAR_10, &VAR_20->dpc_flags) ||
     FUNC_6(VAR_15, &VAR_20->dpc_flags) ||
     FUNC_6(VAR_13, &VAR_20->dpc_flags))
  goto qc_host_busy;

 VAR_23 = FUNC_2(VAR_20, VAR_21, VAR_19);
 if (!VAR_23)
  goto qc_host_busy;

 VAR_24 = FUNC_3(VAR_20, VAR_23);
 if (VAR_24 != VAR_16)
  goto qc_host_busy_free_sp;

 return 0;

qc_host_busy_free_sp:
 FUNC_4(VAR_20, VAR_23);
 FUNC_1(VAR_23, VAR_20->srb_mempool);

qc_host_busy:
 return VAR_17;

qc_fail_command:
 VAR_19->scsi_done(VAR_19);

 return 0;
}
