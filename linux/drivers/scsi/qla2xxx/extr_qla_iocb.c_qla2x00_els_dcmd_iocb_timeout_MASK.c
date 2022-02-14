
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int comp; } ;
struct TYPE_12__ {TYPE_4__ els_logo; } ;
struct srb_iocb {TYPE_5__ u; } ;
struct scsi_qla_host {int dummy; } ;
struct TYPE_8__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_13__ {int handle; int name; TYPE_1__ u; struct scsi_qla_host* vha; TYPE_7__* fcport; } ;
typedef TYPE_6__ srb_t ;
struct TYPE_9__ {int al_pa; int area; int domain; } ;
struct TYPE_10__ {TYPE_2__ b; } ;
struct TYPE_14__ {TYPE_3__ d_id; } ;
typedef TYPE_7__ fc_port_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct scsi_qla_host*,int,char*,int ,int ,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
 srb_t *VAR_2 = VAR_1;
 fc_port_t *VAR_3 = VAR_2->fcport;
 struct scsi_qla_host *VAR_4 = VAR_2->vha;
 struct srb_iocb *VAR_5 = &VAR_2->u.iocb_cmd;

 FUNC_1(VAR_0, VAR_4, 0x3069,
     "%s Timeout, hdl=%x, portid=%02x%02x%02x\n",
     VAR_2->name, VAR_2->handle, VAR_3->d_id.b.domain, VAR_3->d_id.b.area,
     VAR_3->d_id.b.al_pa);

 FUNC_0(&VAR_5->u.els_logo.comp);
}
