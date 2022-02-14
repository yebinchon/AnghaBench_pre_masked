
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_ns {int flags; TYPE_1__* ctrl; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static bool FUNC_1(struct nvme_ns *VAR_3)
{
 return VAR_3->ctrl->state != VAR_0 ||
  FUNC_0(VAR_1, &VAR_3->flags) ||
  FUNC_0(VAR_2, &VAR_3->flags);
}
