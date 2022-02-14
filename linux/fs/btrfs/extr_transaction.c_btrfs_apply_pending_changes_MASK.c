
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_fs_info {int mount_opt; int pending_changes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct btrfs_fs_info*,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct btrfs_fs_info*,char*,unsigned long) ;
 unsigned long FUNC_4 (int *,int ) ;

void FUNC_5(struct btrfs_fs_info *VAR_4)
{
 unsigned long VAR_5;
 unsigned long VAR_6;

 VAR_5 = FUNC_4(&VAR_4->pending_changes, 0);
 if (!VAR_5)
  return;

 VAR_6 = 1 << VAR_2;
 if (VAR_5 & VAR_6)
  FUNC_2(VAR_4->mount_opt, VAR_3);
 VAR_5 &= ~VAR_6;

 VAR_6 = 1 << VAR_0;
 if (VAR_5 & VAR_6)
  FUNC_0(VAR_4->mount_opt, VAR_3);
 VAR_5 &= ~VAR_6;

 VAR_6 = 1 << VAR_1;
 if (VAR_5 & VAR_6)
  FUNC_1(VAR_4, "pending commit done");
 VAR_5 &= ~VAR_6;

 if (VAR_5)
  FUNC_3(VAR_4,
   "unknown pending changes left 0x%lx, ignoring", VAR_5);
}
