
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int objectid; } ;
struct btrfs_root {TYPE_1__ root_key; struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int nodesize; int flags; } ;
typedef int s64 ;
typedef enum btrfs_qgroup_rsv_type { ____Placeholder_btrfs_qgroup_rsv_type } btrfs_qgroup_rsv_type ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct btrfs_fs_info*,int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct btrfs_root*,int,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct btrfs_root*,int ,int) ;

void FUNC_7(struct btrfs_root *VAR_1, int VAR_2,
         enum btrfs_qgroup_rsv_type VAR_3)
{
 struct btrfs_fs_info *VAR_4 = VAR_1->fs_info;

 if (!FUNC_5(VAR_0, &VAR_4->flags) ||
     !FUNC_2(VAR_1->root_key.objectid))
  return;






 VAR_2 = FUNC_4(VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_2 != FUNC_3(VAR_2, VAR_4->nodesize));
 FUNC_6(VAR_1, -(s64)VAR_2, VAR_3);
 FUNC_1(VAR_4, VAR_1->root_key.objectid,
      VAR_2, VAR_3);
}
