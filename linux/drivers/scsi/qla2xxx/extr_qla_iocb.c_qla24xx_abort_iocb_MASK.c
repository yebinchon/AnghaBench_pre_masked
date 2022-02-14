
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {int req_que_no; int cmd_hndl; } ;
struct TYPE_17__ {TYPE_6__ abt; } ;
struct srb_iocb {TYPE_7__ u; } ;
struct req_que {int id; } ;
struct abort_entry_24xx {int entry_count; void* req_que_no; int vp_index; void* handle_to_abort; int * port_id; void* nport_handle; void* handle; int entry_type; } ;
struct TYPE_11__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_18__ {TYPE_5__* fcport; int handle; TYPE_2__* qpair; TYPE_9__* vha; TYPE_1__ u; } ;
typedef TYPE_8__ srb_t ;
struct TYPE_19__ {int vp_idx; } ;
typedef TYPE_9__ scsi_qla_host_t ;
struct TYPE_13__ {int domain; int area; int al_pa; } ;
struct TYPE_14__ {TYPE_3__ b; } ;
struct TYPE_15__ {TYPE_4__ d_id; int loop_id; } ;
struct TYPE_12__ {struct req_que* req; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct abort_entry_24xx*,int ,int) ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(srb_t *VAR_1, struct abort_entry_24xx *VAR_2)
{
 struct srb_iocb *VAR_3 = &VAR_1->u.iocb_cmd;
 scsi_qla_host_t *VAR_4 = VAR_1->vha;
 struct req_que *VAR_5 = VAR_1->qpair->req;

 FUNC_3(VAR_2, 0, sizeof(struct abort_entry_24xx));
 VAR_2->entry_type = VAR_0;
 VAR_2->entry_count = 1;
 VAR_2->handle = FUNC_2(FUNC_0(VAR_5->id, VAR_1->handle));
 if (VAR_1->fcport) {
  VAR_2->nport_handle = FUNC_1(VAR_1->fcport->loop_id);
  VAR_2->port_id[0] = VAR_1->fcport->d_id.b.al_pa;
  VAR_2->port_id[1] = VAR_1->fcport->d_id.b.area;
  VAR_2->port_id[2] = VAR_1->fcport->d_id.b.domain;
 }
 VAR_2->handle_to_abort =
     FUNC_2(FUNC_0(VAR_3->u.abt.req_que_no,
        VAR_3->u.abt.cmd_hndl));
 VAR_2->vp_index = VAR_4->vp_idx;
 VAR_2->req_que_no = FUNC_1(VAR_3->u.abt.req_que_no);

 FUNC_4();
}
