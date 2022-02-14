
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_17__ {int flags; } ;
struct TYPE_18__ {TYPE_3__ logio; } ;
struct srb_iocb {TYPE_4__ u; int timeout; } ;
struct TYPE_15__ {int online; } ;
struct scsi_qla_host {TYPE_1__ flags; } ;
struct TYPE_16__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_20__ {char* name; int (* free ) (TYPE_6__*) ;int handle; int done; int gen2; int gen1; TYPE_2__ u; int type; } ;
typedef TYPE_6__ srb_t ;
struct TYPE_19__ {int b24; } ;
struct TYPE_21__ {int flags; int port_name; TYPE_5__ d_id; int loop_id; int login_gen; int rscn_gen; } ;
typedef TYPE_7__ fc_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,struct scsi_qla_host*,int,char*,int ,int ,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*) ;
 TYPE_6__* FUNC_2 (struct scsi_qla_host*,TYPE_7__*,int ) ;
 int FUNC_3 (TYPE_6__*,scalar_t__) ;
 int FUNC_4 (struct scsi_qla_host*,TYPE_7__*,int*) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_6__*) ;

int
FUNC_7(struct scsi_qla_host *VAR_11, fc_port_t *VAR_12,
    uint16_t *VAR_13)
{
 srb_t *VAR_14;
 struct srb_iocb *VAR_15;
 int VAR_16 = VAR_3;

 if (!VAR_11->flags.online || (VAR_12->flags & VAR_1))
  return VAR_16;

 VAR_12->flags |= VAR_1;
 VAR_14 = FUNC_2(VAR_11, VAR_12, VAR_2);
 if (!VAR_14)
  goto done;

 VAR_14->type = VAR_6;
 VAR_14->name = "adisc";

 VAR_15 = &VAR_14->u.iocb_cmd;
 VAR_15->timeout = VAR_10;
 VAR_14->gen1 = VAR_12->rscn_gen;
 VAR_14->gen2 = VAR_12->login_gen;
 FUNC_3(VAR_14, FUNC_1(VAR_11) + 2);

 VAR_14->done = VAR_9;
 if (VAR_13[1] & VAR_4)
  VAR_15->u.logio.flags |= VAR_7;

 FUNC_0(VAR_8, VAR_11, 0x206f,
     "Async-adisc - hdl=%x loopid=%x portid=%06x %8phC.\n",
     VAR_14->handle, VAR_12->loop_id, VAR_12->d_id.b24, VAR_12->port_name);

 VAR_16 = FUNC_5(VAR_14);
 if (VAR_16 != VAR_5)
  goto done_free_sp;

 return VAR_16;

done_free_sp:
 VAR_14->free(VAR_14);
done:
 VAR_12->flags &= ~(VAR_1 | VAR_0);
 FUNC_4(VAR_11, VAR_12, VAR_13);
 return VAR_16;
}
