
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_id_ctrl {int dummy; } ;
struct nvme_ctrl {int device; TYPE_1__* subsys; } ;
struct TYPE_2__ {int cmic; } ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static inline int FUNC_1(struct nvme_ctrl *VAR_0,
  struct nvme_id_ctrl *VAR_1)
{
 if (VAR_0->subsys->cmic & (1 << 3))
  FUNC_0(VAR_0->device,
"Please enable CONFIG_NVME_MULTIPATH for full support of multi-port devices.\n");
 return 0;
}
