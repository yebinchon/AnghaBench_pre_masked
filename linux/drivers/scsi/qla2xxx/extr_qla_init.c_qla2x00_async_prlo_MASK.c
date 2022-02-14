
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
struct TYPE_16__ {int flags; TYPE_3__ d_id; int loop_id; } ;
typedef TYPE_5__ fc_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct scsi_qla_host*,int,char*,int ,int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*) ;
 TYPE_4__* FUNC_2 (struct scsi_qla_host*,TYPE_5__*,int ) ;
 int FUNC_3 (TYPE_4__*,scalar_t__) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;

int
FUNC_6(struct scsi_qla_host *VAR_8, fc_port_t *VAR_9)
{
 srb_t *VAR_10;
 struct srb_iocb *VAR_11;
 int VAR_12;

 VAR_12 = VAR_2;
 VAR_10 = FUNC_2(VAR_8, VAR_9, VAR_1);
 if (!VAR_10)
  goto done;

 VAR_10->type = VAR_4;
 VAR_10->name = "prlo";

 VAR_11 = &VAR_10->u.iocb_cmd;
 VAR_11->timeout = VAR_6;
 FUNC_3(VAR_10, FUNC_1(VAR_8) + 2);

 VAR_10->done = VAR_7;

 FUNC_0(VAR_5, VAR_8, 0x2070,
     "Async-prlo - hdl=%x loop-id=%x portid=%02x%02x%02x.\n",
     VAR_10->handle, VAR_9->loop_id, VAR_9->d_id.b.domain,
     VAR_9->d_id.b.area, VAR_9->d_id.b.al_pa);

 VAR_12 = FUNC_4(VAR_10);
 if (VAR_12 != VAR_3)
  goto done_free_sp;

 return VAR_12;

done_free_sp:
 VAR_10->free(VAR_10);
done:
 VAR_9->flags &= ~VAR_0;
 return VAR_12;
}
