
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev_loss_tmo; } ;
struct nvme_fc_rport {int lock; TYPE_1__ remoteport; } ;
struct nvme_fc_remote_port {scalar_t__ port_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct nvme_fc_rport* FUNC_0 (struct nvme_fc_remote_port*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int
FUNC_3(struct nvme_fc_remote_port *VAR_2,
   u32 VAR_3)
{
 struct nvme_fc_rport *VAR_4 = FUNC_0(VAR_2);
 unsigned long VAR_5;

 FUNC_1(&VAR_4->lock, VAR_5);

 if (VAR_2->port_state != VAR_1) {
  FUNC_2(&VAR_4->lock, VAR_5);
  return -VAR_0;
 }


 VAR_4->remoteport.dev_loss_tmo = VAR_3;

 FUNC_2(&VAR_4->lock, VAR_5);

 return 0;
}
