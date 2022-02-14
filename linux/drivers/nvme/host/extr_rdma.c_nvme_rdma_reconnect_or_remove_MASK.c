
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ state; TYPE_1__* opts; int device; } ;
struct nvme_rdma_ctrl {TYPE_2__ ctrl; int reconnect_work; } ;
struct TYPE_4__ {int reconnect_delay; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int *,int) ;

__attribute__((used)) static void FUNC_5(struct nvme_rdma_ctrl *VAR_5)
{

 if (VAR_5->ctrl.state != VAR_1) {
  FUNC_0(VAR_5->ctrl.state == VAR_3 ||
   VAR_5->ctrl.state == VAR_2);
  return;
 }

 if (FUNC_3(&VAR_5->ctrl)) {
  FUNC_1(VAR_5->ctrl.device, "Reconnecting in %d seconds...\n",
   VAR_5->ctrl.opts->reconnect_delay);
  FUNC_4(VAR_4, &VAR_5->reconnect_work,
    VAR_5->ctrl.opts->reconnect_delay * VAR_0);
 } else {
  FUNC_2(&VAR_5->ctrl);
 }
}
