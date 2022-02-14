
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ port_state; } ;
struct nvme_fc_rport {TYPE_2__ remoteport; int act_ctrl_cnt; struct nvme_fc_lport* lport; } ;
struct nvme_fc_lport {TYPE_1__* ops; } ;
struct nvme_fc_ctrl {struct nvme_fc_rport* rport; } ;
struct TYPE_3__ {int (* remoteport_delete ) (TYPE_2__*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct nvme_fc_rport*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_3(struct nvme_fc_ctrl *VAR_1)
{
 struct nvme_fc_rport *VAR_2 = VAR_1->rport;
 struct nvme_fc_lport *VAR_3 = VAR_2->lport;
 u32 VAR_4;



 VAR_4 = FUNC_0(&VAR_2->act_ctrl_cnt);
 if (VAR_4 == 0) {
  if (VAR_2->remoteport.port_state == VAR_0)
   VAR_3->ops->remoteport_delete(&VAR_2->remoteport);
  FUNC_1(VAR_2);
 }

 return 0;
}
