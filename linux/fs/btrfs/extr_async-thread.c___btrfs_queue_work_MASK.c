
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_work {int normal_work; int ordered_list; scalar_t__ ordered_func; struct __btrfs_workqueue* wq; } ;
struct __btrfs_workqueue {int normal_wq; int list_lock; int ordered_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct __btrfs_workqueue*) ;
 int FUNC_5 (struct btrfs_work*) ;

__attribute__((used)) static inline void FUNC_6(struct __btrfs_workqueue *VAR_0,
          struct btrfs_work *VAR_1)
{
 unsigned long VAR_2;

 VAR_1->wq = VAR_0;
 FUNC_4(VAR_0);
 if (VAR_1->ordered_func) {
  FUNC_2(&VAR_0->list_lock, VAR_2);
  FUNC_0(&VAR_1->ordered_list, &VAR_0->ordered_list);
  FUNC_3(&VAR_0->list_lock, VAR_2);
 }
 FUNC_5(VAR_1);
 FUNC_1(VAR_0->normal_wq, &VAR_1->normal_work);
}
