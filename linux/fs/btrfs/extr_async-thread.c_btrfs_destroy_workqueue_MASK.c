
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_workqueue {scalar_t__ normal; scalar_t__ high; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct btrfs_workqueue*) ;

void FUNC_2(struct btrfs_workqueue *VAR_0)
{
 if (!VAR_0)
  return;
 if (VAR_0->high)
  FUNC_0(VAR_0->high);
 FUNC_0(VAR_0->normal);
 FUNC_1(VAR_0);
}
