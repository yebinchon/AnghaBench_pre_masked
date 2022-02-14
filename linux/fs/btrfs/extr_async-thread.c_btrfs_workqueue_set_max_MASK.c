
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct btrfs_workqueue {TYPE_2__* high; TYPE_1__* normal; } ;
struct TYPE_4__ {int limit_active; } ;
struct TYPE_3__ {int limit_active; } ;



void FUNC_0(struct btrfs_workqueue *VAR_0, int VAR_1)
{
 if (!VAR_0)
  return;
 VAR_0->normal->limit_active = VAR_1;
 if (VAR_0->high)
  VAR_0->high->limit_active = VAR_1;
}
