
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int data; } ;
struct TYPE_9__ {TYPE_1__ logio; } ;
struct srb_iocb {TYPE_2__ u; } ;
struct scsi_qla_host {int dpc_flags; } ;
struct TYPE_10__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_11__ {int (* free ) (TYPE_4__*) ;TYPE_6__* fcport; struct scsi_qla_host* vha; TYPE_3__ u; } ;
typedef TYPE_4__ srb_t ;
struct TYPE_12__ {int vha; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_6__*,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(srb_t *VAR_2, int VAR_3)
{
 struct srb_iocb *VAR_4 = &VAR_2->u.iocb_cmd;
 struct scsi_qla_host *VAR_5 = VAR_2->vha;

 VAR_2->fcport->flags &= ~VAR_0;
 if (!FUNC_2(VAR_1, &VAR_5->dpc_flags))
  FUNC_0(VAR_2->fcport->vha, VAR_2->fcport,
      VAR_4->u.logio.data);
 VAR_2->free(VAR_2);
}
