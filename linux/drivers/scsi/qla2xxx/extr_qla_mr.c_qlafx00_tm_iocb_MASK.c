
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct tsk_mgmt_entry_fx00 {int entry_count; void* control_flags; int lun; int tgt_id; scalar_t__ reserved_0; void* handle; int entry_type; } ;
struct TYPE_10__ {int lun; int flags; } ;
struct TYPE_11__ {TYPE_3__ tmf; } ;
struct srb_iocb {TYPE_4__ u; } ;
struct scsi_lun {int dummy; } ;
struct req_que {int id; } ;
struct TYPE_8__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_12__ {TYPE_2__* fcport; int handle; TYPE_6__* vha; TYPE_1__ u; } ;
typedef TYPE_5__ srb_t ;
struct TYPE_13__ {struct req_que* req; } ;
typedef TYPE_6__ scsi_qla_host_t ;
struct TYPE_9__ {int tgt_id; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int ,struct scsi_lun*) ;
 int FUNC_5 (void*,struct tsk_mgmt_entry_fx00*,int) ;
 int FUNC_6 (struct tsk_mgmt_entry_fx00*,int ,int) ;
 int FUNC_7 () ;

void
FUNC_8(srb_t *VAR_2, struct tsk_mgmt_entry_fx00 *VAR_3)
{
 struct srb_iocb *VAR_4 = &VAR_2->u.iocb_cmd;
 scsi_qla_host_t *VAR_5 = VAR_2->vha;
 struct req_que *VAR_6 = VAR_5->req;
 struct tsk_mgmt_entry_fx00 VAR_7;
 struct scsi_lun VAR_8;

 FUNC_6(&VAR_7, 0, sizeof(struct tsk_mgmt_entry_fx00));
 VAR_7.entry_type = VAR_1;
 VAR_7.entry_count = 1;
 VAR_7.handle = FUNC_2(FUNC_0(VAR_6->id, VAR_2->handle));
 VAR_7.reserved_0 = 0;
 VAR_7.tgt_id = FUNC_1(VAR_2->fcport->tgt_id);
 VAR_7.control_flags = FUNC_2(VAR_4->u.tmf.flags);
 if (VAR_7.control_flags == FUNC_2((uint32_t)VAR_0)) {
  FUNC_4(VAR_4->u.tmf.lun, &VAR_8);
  FUNC_3((uint8_t *)&VAR_8, (uint8_t *)&VAR_7.lun,
      sizeof(struct scsi_lun));
 }

 FUNC_5((void *)VAR_3, &VAR_7,
     sizeof(struct tsk_mgmt_entry_fx00));
 FUNC_7();
}
