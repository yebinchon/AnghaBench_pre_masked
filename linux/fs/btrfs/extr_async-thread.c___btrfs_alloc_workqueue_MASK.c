
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_fs_info {int dummy; } ;
struct __btrfs_workqueue {int limit_active; int current_active; int thresh; int thres_lock; int list_lock; int ordered_list; void* normal_wq; int pending; struct btrfs_fs_info* fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 void* FUNC_1 (char*,unsigned int,int,char const*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct __btrfs_workqueue*) ;
 struct __btrfs_workqueue* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct __btrfs_workqueue*,char const*,unsigned int) ;

__attribute__((used)) static struct __btrfs_workqueue *
FUNC_7(struct btrfs_fs_info *VAR_4, const char *VAR_5,
   unsigned int VAR_6, int VAR_7, int VAR_8)
{
 struct __btrfs_workqueue *VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_1);

 if (!VAR_9)
  return ((void*)0);

 VAR_9->fs_info = VAR_4;
 VAR_9->limit_active = VAR_7;
 FUNC_2(&VAR_9->pending, 0);
 if (VAR_8 == 0)
  VAR_8 = VAR_0;

 if (VAR_8 < VAR_0) {
  VAR_9->current_active = VAR_7;
  VAR_9->thresh = VAR_2;
 } else {





  VAR_9->current_active = 1;
  VAR_9->thresh = VAR_8;
 }

 if (VAR_6 & VAR_3)
  VAR_9->normal_wq = FUNC_1("btrfs-%s-high", VAR_6,
       VAR_9->current_active, VAR_5);
 else
  VAR_9->normal_wq = FUNC_1("btrfs-%s", VAR_6,
       VAR_9->current_active, VAR_5);
 if (!VAR_9->normal_wq) {
  FUNC_3(VAR_9);
  return ((void*)0);
 }

 FUNC_0(&VAR_9->ordered_list);
 FUNC_5(&VAR_9->list_lock);
 FUNC_5(&VAR_9->thres_lock);
 FUNC_6(VAR_9, VAR_5, VAR_6 & VAR_3);
 return VAR_9;
}
