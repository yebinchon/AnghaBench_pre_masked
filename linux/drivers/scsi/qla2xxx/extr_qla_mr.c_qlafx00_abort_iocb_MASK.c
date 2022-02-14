
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


struct TYPE_9__ {int cmd_hndl; } ;
struct TYPE_10__ {TYPE_2__ abt; } ;
struct srb_iocb {TYPE_3__ u; } ;
struct req_que {int id; } ;
struct abort_iocb_entry_fx00 {int entry_count; void* req_que_no; void* tgt_id_sts; void* abort_handle; void* handle; int entry_type; } ;
struct TYPE_8__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_12__ {TYPE_4__* fcport; int handle; TYPE_6__* vha; TYPE_1__ u; } ;
typedef TYPE_5__ srb_t ;
struct TYPE_13__ {struct req_que* req; } ;
typedef TYPE_6__ scsi_qla_host_t ;
struct TYPE_11__ {int tgt_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (void*,struct abort_iocb_entry_fx00*,int) ;
 int FUNC_4 (struct abort_iocb_entry_fx00*,int ,int) ;
 int FUNC_5 () ;

void
FUNC_6(srb_t *VAR_1, struct abort_iocb_entry_fx00 *VAR_2)
{
 struct srb_iocb *VAR_3 = &VAR_1->u.iocb_cmd;
 scsi_qla_host_t *VAR_4 = VAR_1->vha;
 struct req_que *VAR_5 = VAR_4->req;
 struct abort_iocb_entry_fx00 VAR_6;

 FUNC_4(&VAR_6, 0, sizeof(struct abort_iocb_entry_fx00));
 VAR_6.entry_type = VAR_0;
 VAR_6.entry_count = 1;
 VAR_6.handle = FUNC_2(FUNC_0(VAR_5->id, VAR_1->handle));
 VAR_6.abort_handle =
     FUNC_2(FUNC_0(VAR_5->id, VAR_3->u.abt.cmd_hndl));
 VAR_6.tgt_id_sts = FUNC_1(VAR_1->fcport->tgt_id);
 VAR_6.req_que_no = FUNC_1(VAR_5->id);

 FUNC_3((void *)VAR_2, &VAR_6,
     sizeof(struct abort_iocb_entry_fx00));
 FUNC_5();
}
