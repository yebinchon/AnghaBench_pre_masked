
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_workqueue {struct __btrfs_workqueue* normal; struct __btrfs_workqueue* high; } ;
struct btrfs_work {int flags; } ;
struct __btrfs_workqueue {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct __btrfs_workqueue*,struct btrfs_work*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

void FUNC_2(struct btrfs_workqueue *VAR_1,
        struct btrfs_work *VAR_2)
{
 struct __btrfs_workqueue *VAR_3;

 if (FUNC_1(VAR_0, &VAR_2->flags) && VAR_1->high)
  VAR_3 = VAR_1->high;
 else
  VAR_3 = VAR_1->normal;
 FUNC_0(VAR_3, VAR_2);
}
