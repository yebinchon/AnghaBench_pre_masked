
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvme_fc_remote_port {scalar_t__ port_state; int dev_loss_tmo; } ;
struct nvme_fc_rport {unsigned long dev_loss_end; struct nvme_fc_remote_port remoteport; } ;
struct TYPE_5__ {scalar_t__ state; int device; int nr_reconnects; TYPE_1__* opts; } ;
struct nvme_fc_ctrl {TYPE_2__ ctrl; int cnum; int connect_work; struct nvme_fc_rport* rport; } ;
struct TYPE_4__ {unsigned long reconnect_delay; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,unsigned long) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 unsigned long VAR_3 ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int *,unsigned long) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;

__attribute__((used)) static void
FUNC_8(struct nvme_fc_ctrl *VAR_5, int VAR_6)
{
 struct nvme_fc_rport *VAR_7 = VAR_5->rport;
 struct nvme_fc_remote_port *VAR_8 = &VAR_7->remoteport;
 unsigned long VAR_9 = VAR_5->ctrl.opts->reconnect_delay * VAR_1;
 bool VAR_10 = 1;

 if (VAR_5->ctrl.state != VAR_2)
  return;

 if (VAR_8->port_state == VAR_0)
  FUNC_1(VAR_5->ctrl.device,
   "NVME-FC{%d}: reset: Reconnect attempt failed (%d)\n",
   VAR_5->cnum, VAR_6);
 else if (FUNC_7(VAR_3, VAR_7->dev_loss_end))
  VAR_10 = 0;

 if (VAR_10 && FUNC_4(&VAR_5->ctrl)) {
  if (VAR_8->port_state == VAR_0)
   FUNC_1(VAR_5->ctrl.device,
    "NVME-FC{%d}: Reconnect attempt in %ld "
    "seconds\n",
    VAR_5->cnum, VAR_9 / VAR_1);
  else if (FUNC_6(VAR_3 + VAR_9, VAR_7->dev_loss_end))
   VAR_9 = VAR_7->dev_loss_end - VAR_3;

  FUNC_5(VAR_4, &VAR_5->connect_work, VAR_9);
 } else {
  if (VAR_8->port_state == VAR_0)
   FUNC_2(VAR_5->ctrl.device,
    "NVME-FC{%d}: Max reconnect attempts (%d) "
    "reached.\n",
    VAR_5->cnum, VAR_5->ctrl.nr_reconnects);
  else
   FUNC_2(VAR_5->ctrl.device,
    "NVME-FC{%d}: dev_loss_tmo (%d) expired "
    "while waiting for remoteport connectivity.\n",
    VAR_5->cnum, VAR_8->dev_loss_tmo);
  FUNC_0(FUNC_3(&VAR_5->ctrl));
 }
}
