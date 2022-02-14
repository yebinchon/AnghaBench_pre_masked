
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvme_ctrl {scalar_t__ state; int device; TYPE_1__* opts; } ;
struct TYPE_4__ {int connect_work; } ;
struct TYPE_3__ {int reconnect_delay; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct nvme_ctrl*) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct nvme_ctrl*) ;
 int FUNC_4 (int ,int *,int) ;
 TYPE_2__* FUNC_5 (struct nvme_ctrl*) ;

__attribute__((used)) static void FUNC_6(struct nvme_ctrl *VAR_5)
{

 if (VAR_5->state != VAR_1) {
  FUNC_0(VAR_5->state == VAR_3 ||
   VAR_5->state == VAR_2);
  return;
 }

 if (FUNC_3(VAR_5)) {
  FUNC_1(VAR_5->device, "Reconnecting in %d seconds...\n",
   VAR_5->opts->reconnect_delay);
  FUNC_4(VAR_4, &FUNC_5(VAR_5)->connect_work,
    VAR_5->opts->reconnect_delay * VAR_0);
 } else {
  FUNC_1(VAR_5->device, "Removing controller...\n");
  FUNC_2(VAR_5);
 }
}
