
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct qla_nvme_rport {TYPE_1__* fcport; } ;
struct nvme_fc_remote_port {struct qla_nvme_rport* private; } ;
struct TYPE_3__ {int nvme_del_done; int port_name; int vha; int nvme_flag; int * nvme_remote_port; } ;
typedef TYPE_1__ fc_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int,char*,TYPE_1__*,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct nvme_fc_remote_port *VAR_3)
{
 fc_port_t *VAR_4;
 struct qla_nvme_rport *VAR_5 = VAR_3->private;

 VAR_4 = VAR_5->fcport;
 VAR_4->nvme_remote_port = ((void*)0);
 VAR_4->nvme_flag &= ~VAR_1;
 VAR_4->nvme_flag &= ~VAR_0;
 FUNC_1(VAR_2, VAR_4->vha, 0x2110,
     "remoteport_delete of %p %8phN completed.\n",
     VAR_4, VAR_4->port_name);
 FUNC_0(&VAR_4->nvme_del_done);
}
