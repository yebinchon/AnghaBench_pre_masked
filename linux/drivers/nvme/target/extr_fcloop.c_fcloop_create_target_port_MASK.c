
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvmet_fc_target_port {struct fcloop_tport* private; } ;
struct nvmet_fc_port_info {int port_id; int port_name; int node_name; } ;
struct fcloop_tport {int lport; struct fcloop_nport* nport; int * remoteport; struct nvmet_fc_target_port* targetport; } ;
struct fcloop_nport {struct fcloop_tport* tport; int lport; TYPE_1__* rport; int port_id; int port_name; int node_name; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct nvmet_fc_target_port* targetport; int * remoteport; } ;


 int VAR_0 ;
 struct fcloop_nport* FUNC_0 (char const*,size_t,int) ;
 int FUNC_1 (struct fcloop_nport*) ;
 int FUNC_2 (struct nvmet_fc_port_info*,int *,int *,struct nvmet_fc_target_port**) ;
 int VAR_1 ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_2, struct device_attribute *VAR_3,
  const char *VAR_4, size_t VAR_5)
{
 struct nvmet_fc_target_port *VAR_6;
 struct fcloop_nport *VAR_7;
 struct fcloop_tport *VAR_8;
 struct nvmet_fc_port_info VAR_9;
 int VAR_10;

 VAR_7 = FUNC_0(VAR_4, VAR_5, 0);
 if (!VAR_7)
  return -VAR_0;

 VAR_9.node_name = VAR_7->node_name;
 VAR_9.port_name = VAR_7->port_name;
 VAR_9.port_id = VAR_7->port_id;

 VAR_10 = FUNC_2(&VAR_9, &VAR_1, ((void*)0),
      &VAR_6);
 if (VAR_10) {
  FUNC_1(VAR_7);
  return VAR_10;
 }


 VAR_8 = VAR_6->private;
 VAR_8->targetport = VAR_6;
 VAR_8->remoteport = (VAR_7->rport) ? VAR_7->rport->remoteport : ((void*)0);
 if (VAR_7->rport)
  VAR_7->rport->targetport = VAR_6;
 VAR_8->nport = VAR_7;
 VAR_8->lport = VAR_7->lport;
 VAR_7->tport = VAR_8;

 return VAR_5;
}
