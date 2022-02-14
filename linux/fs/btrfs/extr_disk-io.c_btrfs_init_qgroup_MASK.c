
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_fs_info {int qgroup_seq; int qgroup_rescan_running; int qgroup_rescan_lock; int * qgroup_ulist; int dirty_qgroups; int qgroup_tree; int qgroup_ioctl_lock; int qgroup_lock; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct btrfs_fs_info *VAR_1)
{
 FUNC_2(&VAR_1->qgroup_lock);
 FUNC_1(&VAR_1->qgroup_ioctl_lock);
 VAR_1->qgroup_tree = VAR_0;
 FUNC_0(&VAR_1->dirty_qgroups);
 VAR_1->qgroup_seq = 1;
 VAR_1->qgroup_ulist = ((void*)0);
 VAR_1->qgroup_rescan_running = 0;
 FUNC_1(&VAR_1->qgroup_rescan_lock);
}
