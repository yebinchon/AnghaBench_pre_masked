
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_11__ {int comp; } ;
struct TYPE_14__ {TYPE_10__ els_plogi; } ;
struct srb_iocb {TYPE_3__ u; int timer; } ;
struct scsi_qla_host {int dpc_flags; } ;
struct TYPE_15__ {TYPE_6__* sp; } ;
struct TYPE_16__ {TYPE_4__ iosb; } ;
struct qla_work_evt {TYPE_5__ u; } ;
struct event_arg {TYPE_6__* sp; int * data; TYPE_7__* fcport; } ;
struct TYPE_13__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_17__ {int flags; int (* free ) (TYPE_6__*) ;TYPE_2__ u; int handle; int name; struct scsi_qla_host* vha; TYPE_7__* fcport; } ;
typedef TYPE_6__ srb_t ;
struct TYPE_12__ {int b24; } ;
struct TYPE_18__ {int flags; int port_name; TYPE_1__ d_id; } ;
typedef TYPE_7__ fc_port_t ;
typedef int ea ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct event_arg*,int ,int) ;
 int FUNC_3 (int ,struct scsi_qla_host*,int,char*,int ,int,int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_4 (struct scsi_qla_host*,struct event_arg*) ;
 struct qla_work_evt* FUNC_5 (struct scsi_qla_host*,int ) ;
 int FUNC_6 (struct scsi_qla_host*,TYPE_10__*) ;
 int FUNC_7 (struct scsi_qla_host*,struct qla_work_evt*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (TYPE_6__*) ;

__attribute__((used)) static void FUNC_10(srb_t *VAR_7, int VAR_8)
{
 fc_port_t *VAR_9 = VAR_7->fcport;
 struct srb_iocb *VAR_10 = &VAR_7->u.iocb_cmd;
 struct scsi_qla_host *VAR_11 = VAR_7->vha;
 struct event_arg VAR_12;
 struct qla_work_evt *VAR_13;

 FUNC_3(VAR_6, VAR_11, 0x3072,
     "%s ELS done rc %d hdl=%x, portid=%06x %8phC\n",
     VAR_7->name, VAR_8, VAR_7->handle, VAR_9->d_id.b24, VAR_9->port_name);

 VAR_9->flags &= ~(VAR_1|VAR_0);
 FUNC_1(&VAR_7->u.iocb_cmd.timer);

 if (VAR_7->flags & VAR_5)
  FUNC_0(&VAR_10->u.els_plogi.comp);
 else {
  if (VAR_8) {
   FUNC_8(VAR_4, &VAR_11->dpc_flags);
  } else {
   FUNC_2(&VAR_12, 0, sizeof(VAR_12));
   VAR_12.fcport = VAR_9;
   VAR_12.data[0] = VAR_2;
   VAR_12.sp = VAR_7;
   FUNC_4(VAR_11, &VAR_12);
  }

  VAR_13 = FUNC_5(VAR_11, VAR_3);
  if (!VAR_13) {
   struct srb_iocb *VAR_14 = &VAR_7->u.iocb_cmd;

   FUNC_6(VAR_11, &VAR_14->u.els_plogi);
   VAR_7->free(VAR_7);
   return;
  }
  VAR_13->u.iosb.sp = VAR_7;
  FUNC_7(VAR_11, VAR_13);
 }
}
