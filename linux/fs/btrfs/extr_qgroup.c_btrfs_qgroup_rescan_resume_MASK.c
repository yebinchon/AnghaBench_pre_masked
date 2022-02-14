
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_fs_info {int qgroup_flags; int qgroup_rescan_work; int qgroup_rescan_workers; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

void
FUNC_1(struct btrfs_fs_info *VAR_1)
{
 if (VAR_1->qgroup_flags & VAR_0)
  FUNC_0(VAR_1->qgroup_rescan_workers,
     &VAR_1->qgroup_rescan_work);
}
