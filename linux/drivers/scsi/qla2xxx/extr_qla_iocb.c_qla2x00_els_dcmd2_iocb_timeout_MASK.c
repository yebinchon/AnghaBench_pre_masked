
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct qla_hw_data {int hardware_lock; TYPE_2__* isp_ops; } ;
struct TYPE_9__ {int (* done ) (TYPE_3__*,int ) ;int handle; int name; struct scsi_qla_host* vha; TYPE_4__* fcport; } ;
typedef TYPE_3__ srb_t ;
struct TYPE_7__ {int b24; } ;
struct TYPE_10__ {TYPE_1__ d_id; int port_name; } ;
typedef TYPE_4__ fc_port_t ;
struct TYPE_8__ {int (* abort_command ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,struct scsi_qla_host*,int,char*,char*,...) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ) ;

__attribute__((used)) static void
FUNC_5(void *VAR_4)
{
 srb_t *VAR_5 = VAR_4;
 fc_port_t *VAR_6 = VAR_5->fcport;
 struct scsi_qla_host *VAR_7 = VAR_5->vha;
 struct qla_hw_data *VAR_8 = VAR_7->hw;
 unsigned long VAR_9 = 0;
 int VAR_10;

 FUNC_0(VAR_3 + VAR_2, VAR_7, 0x3069,
     "%s hdl=%x ELS Timeout, %8phC portid=%06x\n",
     VAR_5->name, VAR_5->handle, VAR_6->port_name, VAR_6->d_id.b24);


 FUNC_1(&VAR_8->hardware_lock, VAR_9);
 VAR_10 = VAR_8->isp_ops->abort_command(VAR_5);
 FUNC_0(VAR_3, VAR_7, 0x3070,
     "mbx abort_command %s\n",
     (VAR_10 == VAR_1) ? "successful" : "failed");
 FUNC_2(&VAR_8->hardware_lock, VAR_9);

 VAR_5->done(VAR_5, VAR_0);
}
