
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_fs_info {int qgroup_rescan_running; int qgroup_rescan_completion; int qgroup_rescan_lock; int qgroup_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct btrfs_fs_info *VAR_0,
         bool VAR_1)
{
 int VAR_2;
 int VAR_3 = 0;

 FUNC_0(&VAR_0->qgroup_rescan_lock);
 FUNC_2(&VAR_0->qgroup_lock);
 VAR_2 = VAR_0->qgroup_rescan_running;
 FUNC_3(&VAR_0->qgroup_lock);
 FUNC_1(&VAR_0->qgroup_rescan_lock);

 if (!VAR_2)
  return 0;

 if (VAR_1)
  VAR_3 = FUNC_5(
     &VAR_0->qgroup_rescan_completion);
 else
  FUNC_4(&VAR_0->qgroup_rescan_completion);

 return VAR_3;
}
