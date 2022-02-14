
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvme_ns {TYPE_2__* head; } ;
struct nvme_ctrl {int instance; TYPE_1__* subsys; } ;
struct TYPE_4__ {int instance; scalar_t__ disk; } ;
struct TYPE_3__ {int instance; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int,int,...) ;

void FUNC_1(char *VAR_2, struct nvme_ns *VAR_3,
   struct nvme_ctrl *VAR_4, int *VAR_5)
{
 if (!VAR_1) {
  FUNC_0(VAR_2, "nvme%dn%d", VAR_4->instance, VAR_3->head->instance);
 } else if (VAR_3->head->disk) {
  FUNC_0(VAR_2, "nvme%dc%dn%d", VAR_4->subsys->instance,
    VAR_4->instance, VAR_3->head->instance);
  *VAR_5 = VAR_0;
 } else {
  FUNC_0(VAR_2, "nvme%dn%d", VAR_4->subsys->instance,
    VAR_3->head->instance);
 }
}
