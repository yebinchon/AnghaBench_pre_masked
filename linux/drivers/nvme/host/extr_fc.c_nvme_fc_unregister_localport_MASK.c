
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_fc_lport {int localport; TYPE_1__* ops; int act_rport_cnt; } ;
struct nvme_fc_local_port {scalar_t__ port_state; } ;
struct TYPE_2__ {int (* localport_delete ) (int *) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 struct nvme_fc_lport* FUNC_1 (struct nvme_fc_local_port*) ;
 int VAR_3 ;
 int FUNC_2 (struct nvme_fc_lport*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct nvme_fc_local_port *VAR_4)
{
 struct nvme_fc_lport *VAR_5 = FUNC_1(VAR_4);
 unsigned long VAR_6;

 if (!VAR_4)
  return -VAR_0;

 FUNC_3(&VAR_3, VAR_6);

 if (VAR_4->port_state != VAR_2) {
  FUNC_4(&VAR_3, VAR_6);
  return -VAR_0;
 }
 VAR_4->port_state = VAR_1;

 FUNC_4(&VAR_3, VAR_6);

 if (FUNC_0(&VAR_5->act_rport_cnt) == 0)
  VAR_5->ops->localport_delete(&VAR_5->localport);

 FUNC_2(VAR_5);

 return 0;
}
