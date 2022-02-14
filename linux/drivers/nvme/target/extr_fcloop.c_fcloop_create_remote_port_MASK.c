
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvme_fc_remote_port {struct fcloop_rport* private; } ;
struct nvme_fc_port_info {int port_id; int port_role; int port_name; int node_name; } ;
struct fcloop_rport {TYPE_2__* lport; struct fcloop_nport* nport; int * targetport; struct nvme_fc_remote_port* remoteport; } ;
struct fcloop_nport {struct fcloop_rport* rport; TYPE_2__* lport; TYPE_1__* tport; int port_id; int port_role; int port_name; int node_name; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int pinfo ;
struct TYPE_4__ {int localport; } ;
struct TYPE_3__ {TYPE_2__* lport; struct nvme_fc_remote_port* remoteport; int * targetport; } ;


 int VAR_0 ;
 struct fcloop_nport* FUNC_0 (char const*,size_t,int) ;
 int FUNC_1 (struct fcloop_nport*) ;
 int FUNC_2 (struct nvme_fc_port_info*,int ,int) ;
 int FUNC_3 (int ,struct nvme_fc_port_info*,struct nvme_fc_remote_port**) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 struct nvme_fc_remote_port *VAR_5;
 struct fcloop_nport *VAR_6;
 struct fcloop_rport *VAR_7;
 struct nvme_fc_port_info VAR_8;
 int VAR_9;

 VAR_6 = FUNC_0(VAR_3, VAR_4, 1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_2(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.node_name = VAR_6->node_name;
 VAR_8.port_name = VAR_6->port_name;
 VAR_8.port_role = VAR_6->port_role;
 VAR_8.port_id = VAR_6->port_id;

 VAR_9 = FUNC_3(VAR_6->lport->localport,
      &VAR_8, &VAR_5);
 if (VAR_9 || !VAR_5) {
  FUNC_1(VAR_6);
  return VAR_9;
 }


 VAR_7 = VAR_5->private;
 VAR_7->remoteport = VAR_5;
 VAR_7->targetport = (VAR_6->tport) ? VAR_6->tport->targetport : ((void*)0);
 if (VAR_6->tport) {
  VAR_6->tport->remoteport = VAR_5;
  VAR_6->tport->lport = VAR_6->lport;
 }
 VAR_7->nport = VAR_6;
 VAR_7->lport = VAR_6->lport;
 VAR_6->rport = VAR_7;

 return VAR_4;
}
