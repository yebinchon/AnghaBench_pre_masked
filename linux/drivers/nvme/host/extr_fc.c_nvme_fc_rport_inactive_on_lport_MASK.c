
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nvme_fc_rport {struct nvme_fc_lport* lport; } ;
struct TYPE_4__ {scalar_t__ port_state; } ;
struct nvme_fc_lport {TYPE_2__ localport; TYPE_1__* ops; int act_rport_cnt; } ;
struct TYPE_3__ {int (* localport_delete ) (TYPE_2__*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_2(struct nvme_fc_rport *VAR_1)
{
 struct nvme_fc_lport *VAR_2 = VAR_1->lport;
 u32 VAR_3;

 VAR_3 = FUNC_0(&VAR_2->act_rport_cnt);
 if (VAR_3 == 0 && VAR_2->localport.port_state == VAR_0)
  VAR_2->ops->localport_delete(&VAR_2->localport);
}
