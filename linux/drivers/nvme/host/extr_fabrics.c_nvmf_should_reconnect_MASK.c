
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_ctrl {int nr_reconnects; TYPE_1__* opts; } ;
struct TYPE_2__ {int max_reconnects; } ;



bool FUNC_0(struct nvme_ctrl *VAR_0)
{
 if (VAR_0->opts->max_reconnects == -1 ||
     VAR_0->nr_reconnects < VAR_0->opts->max_reconnects)
  return 1;

 return 0;
}
