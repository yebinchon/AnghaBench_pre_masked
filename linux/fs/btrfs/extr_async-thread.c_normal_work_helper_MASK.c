
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_work {int flags; int (* func ) (struct btrfs_work*) ;struct __btrfs_workqueue* wq; scalar_t__ ordered_func; } ;
struct __btrfs_workqueue {int fs_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct __btrfs_workqueue*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct btrfs_work*) ;
 int FUNC_3 (struct __btrfs_workqueue*) ;
 int FUNC_4 (int ,void*) ;
 int FUNC_5 (struct btrfs_work*) ;

__attribute__((used)) static void FUNC_6(struct btrfs_work *VAR_1)
{
 struct __btrfs_workqueue *VAR_2;
 void *VAR_3;
 int VAR_4 = 0;
 if (VAR_1->ordered_func)
  VAR_4 = 1;
 VAR_2 = VAR_1->wq;

 VAR_3 = VAR_1;

 FUNC_5(VAR_1);
 FUNC_3(VAR_2);
 VAR_1->func(VAR_1);
 if (VAR_4) {
  FUNC_1(VAR_0, &VAR_1->flags);
  FUNC_0(VAR_2);
 }
 if (!VAR_4)
  FUNC_4(VAR_2->fs_info, VAR_3);
}
