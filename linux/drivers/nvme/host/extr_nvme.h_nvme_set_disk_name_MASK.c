
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_ns {TYPE_1__* head; } ;
struct nvme_ctrl {int instance; } ;
struct TYPE_2__ {int instance; } ;


 int FUNC_0 (char*,char*,int,int) ;

__attribute__((used)) static inline void FUNC_1(char *VAR_0, struct nvme_ns *VAR_1,
          struct nvme_ctrl *VAR_2, int *VAR_3)
{
 FUNC_0(VAR_0, "nvme%dn%d", VAR_2->instance, VAR_1->head->instance);
}
