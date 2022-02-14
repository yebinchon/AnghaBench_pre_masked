
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * iop; int * data; } ;
struct TYPE_10__ {TYPE_2__ logio; } ;
struct srb_iocb {TYPE_3__ u; } ;
struct scsi_qla_host {int dummy; } ;
struct event_arg {int rc; TYPE_5__* sp; TYPE_4__* fcport; int * iop; int * data; } ;
struct TYPE_8__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_12__ {int (* free ) (TYPE_5__*) ;TYPE_4__* fcport; int name; TYPE_1__ u; struct scsi_qla_host* vha; } ;
typedef TYPE_5__ srb_t ;
typedef int ea ;
struct TYPE_11__ {int flags; int port_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct event_arg*,int ,int) ;
 int FUNC_1 (int ,struct scsi_qla_host*,int,char*,int ,int,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct scsi_qla_host*,struct event_arg*) ;
 int FUNC_3 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_4(srb_t *VAR_3, int VAR_4)
{
 struct scsi_qla_host *VAR_5 = VAR_3->vha;
 struct event_arg VAR_6;
 struct srb_iocb *VAR_7 = &VAR_3->u.iocb_cmd;

 FUNC_1(VAR_2, VAR_5, 0x2066,
     "Async done-%s res %x %8phC\n",
     VAR_3->name, VAR_4, VAR_3->fcport->port_name);

 VAR_3->fcport->flags &= ~(VAR_1 | VAR_0);

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.rc = VAR_4;
 VAR_6.data[0] = VAR_7->u.logio.data[0];
 VAR_6.data[1] = VAR_7->u.logio.data[1];
 VAR_6.iop[0] = VAR_7->u.logio.iop[0];
 VAR_6.iop[1] = VAR_7->u.logio.iop[1];
 VAR_6.fcport = VAR_3->fcport;
 VAR_6.sp = VAR_3;

 FUNC_2(VAR_5, &VAR_6);

 VAR_3->free(VAR_3);
}
