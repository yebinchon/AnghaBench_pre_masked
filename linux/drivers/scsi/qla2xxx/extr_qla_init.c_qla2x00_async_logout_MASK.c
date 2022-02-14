
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct srb_iocb {int timeout; } ;
struct scsi_qla_host {int dummy; } ;
struct TYPE_12__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_15__ {char* name; int (* free ) (TYPE_4__*) ;int handle; int done; TYPE_1__ u; int type; } ;
typedef TYPE_4__ srb_t ;
struct TYPE_13__ {int al_pa; int area; int domain; } ;
struct TYPE_14__ {TYPE_2__ b; } ;
struct TYPE_16__ {int flags; int port_name; TYPE_3__ d_id; int loop_id; } ;
typedef TYPE_5__ fc_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct scsi_qla_host*,int,char*,int ,int ,int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*) ;
 TYPE_4__* FUNC_2 (struct scsi_qla_host*,TYPE_5__*,int ) ;
 int FUNC_3 (TYPE_4__*,scalar_t__) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;

int
FUNC_6(struct scsi_qla_host *VAR_9, fc_port_t *VAR_10)
{
 srb_t *VAR_11;
 struct srb_iocb *VAR_12;
 int VAR_13 = VAR_3;

 VAR_10->flags |= VAR_1;
 VAR_11 = FUNC_2(VAR_9, VAR_10, VAR_2);
 if (!VAR_11)
  goto done;

 VAR_11->type = VAR_5;
 VAR_11->name = "logout";

 VAR_12 = &VAR_11->u.iocb_cmd;
 VAR_12->timeout = VAR_7;
 FUNC_3(VAR_11, FUNC_1(VAR_9) + 2);

 VAR_11->done = VAR_8;

 FUNC_0(VAR_6, VAR_9, 0x2070,
     "Async-logout - hdl=%x loop-id=%x portid=%02x%02x%02x %8phC.\n",
     VAR_11->handle, VAR_10->loop_id, VAR_10->d_id.b.domain,
  VAR_10->d_id.b.area, VAR_10->d_id.b.al_pa,
  VAR_10->port_name);

 VAR_13 = FUNC_4(VAR_11);
 if (VAR_13 != VAR_4)
  goto done_free_sp;
 return VAR_13;

done_free_sp:
 VAR_11->free(VAR_11);
done:
 VAR_10->flags &= ~(VAR_1 | VAR_0);
 return VAR_13;
}
