
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dev_loss_tmo; } ;
struct nvme_fc_rport {TYPE_1__ remoteport; } ;
struct nvme_fc_port_info {scalar_t__ dev_loss_tmo; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(struct nvme_fc_rport *VAR_1,
   struct nvme_fc_port_info *VAR_2)
{
 if (VAR_2->dev_loss_tmo)
  VAR_1->remoteport.dev_loss_tmo = VAR_2->dev_loss_tmo;
 else
  VAR_1->remoteport.dev_loss_tmo = VAR_0;
}
