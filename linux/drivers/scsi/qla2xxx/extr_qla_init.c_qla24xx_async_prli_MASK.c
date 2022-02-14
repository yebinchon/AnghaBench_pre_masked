
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int flags; } ;
struct TYPE_17__ {TYPE_3__ logio; } ;
struct srb_iocb {TYPE_4__ u; int timeout; } ;
struct TYPE_14__ {int online; } ;
struct scsi_qla_host {int dpc_flags; TYPE_1__ flags; } ;
struct TYPE_15__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_19__ {char* name; int (* free ) (TYPE_6__*) ;int handle; int done; TYPE_2__ u; int type; } ;
typedef TYPE_6__ srb_t ;
struct TYPE_18__ {int b24; } ;
struct TYPE_20__ {scalar_t__ fw_login_state; int flags; scalar_t__ fc4f_nvme; int login_retry; TYPE_5__ d_id; int loop_id; int port_name; scalar_t__ logout_completed; } ;
typedef TYPE_7__ fc_port_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,struct scsi_qla_host*,int,char*,int ,int ,int ,int ,int ,char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*) ;
 TYPE_6__* FUNC_2 (struct scsi_qla_host*,TYPE_7__*,int ) ;
 int FUNC_3 (TYPE_6__*,scalar_t__) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (TYPE_6__*) ;

int
FUNC_7(struct scsi_qla_host *VAR_13, fc_port_t *VAR_14)
{
 srb_t *VAR_15;
 struct srb_iocb *VAR_16;
 int VAR_17 = VAR_5;

 if (!VAR_13->flags.online)
  return VAR_17;

 if (VAR_14->fw_login_state == VAR_0 ||
     VAR_14->fw_login_state == VAR_1)
  return VAR_17;

 VAR_15 = FUNC_2(VAR_13, VAR_14, VAR_4);
 if (!VAR_15)
  return VAR_17;

 VAR_14->flags |= VAR_2;
 VAR_14->logout_completed = 0;

 VAR_15->type = VAR_9;
 VAR_15->name = "prli";

 VAR_16 = &VAR_15->u.iocb_cmd;
 VAR_16->timeout = VAR_11;
 FUNC_3(VAR_15, FUNC_1(VAR_13) + 2);

 VAR_15->done = VAR_12;
 VAR_16->u.logio.flags = 0;

 if (VAR_14->fc4f_nvme)
  VAR_16->u.logio.flags |= VAR_8;

 FUNC_0(VAR_10, VAR_13, 0x211b,
     "Async-prli - %8phC hdl=%x, loopid=%x portid=%06x retries=%d %s.\n",
     VAR_14->port_name, VAR_15->handle, VAR_14->loop_id, VAR_14->d_id.b24,
     VAR_14->login_retry, VAR_14->fc4f_nvme ? "nvme" : "fc");

 VAR_17 = FUNC_4(VAR_15);
 if (VAR_17 != VAR_6) {
  VAR_14->flags |= VAR_3;
  FUNC_5(VAR_7, &VAR_13->dpc_flags);
  goto done_free_sp;
 }

 return VAR_17;

done_free_sp:
 VAR_15->free(VAR_15);
 VAR_14->flags &= ~VAR_2;
 return VAR_17;
}
