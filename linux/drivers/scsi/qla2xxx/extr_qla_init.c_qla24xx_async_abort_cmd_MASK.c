
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ comp_status; int comp; int req_que_no; int cmd_hndl; } ;
struct TYPE_16__ {TYPE_3__ abt; } ;
struct srb_iocb {TYPE_4__ u; int timeout; } ;
struct TYPE_13__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_17__ {char* name; int (* free ) (TYPE_5__*) ;int type; int handle; int done; TYPE_9__* qpair; int flags; TYPE_1__ u; int fcport; int * vha; } ;
typedef TYPE_5__ srb_t ;
typedef int scsi_qla_host_t ;
struct TYPE_18__ {TYPE_2__* req; } ;
struct TYPE_14__ {int id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int,char*,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (TYPE_5__*,int) ;
 int FUNC_4 (TYPE_5__*) ;
 TYPE_5__* FUNC_5 (int *,TYPE_9__*,int ,int ) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(srb_t *VAR_9, bool VAR_10)
{
 scsi_qla_host_t *VAR_11 = VAR_9->vha;
 struct srb_iocb *VAR_12;
 srb_t *VAR_13;
 int VAR_14 = VAR_2;

 VAR_13 = FUNC_5(VAR_9->vha, VAR_9->qpair, VAR_9->fcport,
      VAR_1);
 if (!VAR_13)
  return VAR_14;

 VAR_12 = &VAR_13->u.iocb_cmd;
 VAR_13->type = VAR_4;
 VAR_13->name = "abort";
 VAR_13->qpair = VAR_9->qpair;
 if (VAR_10)
  VAR_13->flags = VAR_5;

 VAR_12->timeout = VAR_7;
 FUNC_1(&VAR_12->u.abt.comp);

 FUNC_3(VAR_13, 42);

 VAR_12->u.abt.cmd_hndl = VAR_9->handle;
 VAR_12->u.abt.req_que_no = FUNC_0(VAR_9->qpair->req->id);

 VAR_13->done = VAR_8;

 FUNC_2(VAR_6, VAR_11, 0x507c,
        "Abort command issued - hdl=%x, type=%x\n", VAR_9->handle,
        VAR_9->type);

 VAR_14 = FUNC_4(VAR_13);
 if (VAR_14 != VAR_3) {
  VAR_13->free(VAR_13);
  return VAR_14;
 }

 if (VAR_10) {
  FUNC_8(&VAR_12->u.abt.comp);
  VAR_14 = VAR_12->u.abt.comp_status == VAR_0 ?
   VAR_3 : VAR_2;
  VAR_13->free(VAR_13);
 }

 return VAR_14;
}
