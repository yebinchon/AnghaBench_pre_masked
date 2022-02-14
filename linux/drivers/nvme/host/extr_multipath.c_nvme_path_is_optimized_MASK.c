
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_ns {scalar_t__ ana_state; TYPE_1__* ctrl; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct nvme_ns *VAR_2)
{
 return VAR_2->ctrl->state == VAR_1 &&
  VAR_2->ana_state == VAR_0;
}
