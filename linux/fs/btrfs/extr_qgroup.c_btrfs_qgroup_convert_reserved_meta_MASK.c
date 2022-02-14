
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int objectid; } ;
struct btrfs_root {TYPE_1__ root_key; struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct btrfs_fs_info*,int ,int) ;
 int FUNC_2 (struct btrfs_root*,int,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct btrfs_root*,int) ;

void FUNC_5(struct btrfs_root *VAR_2, int VAR_3)
{
 struct btrfs_fs_info *VAR_4 = VAR_2->fs_info;

 if (!FUNC_3(VAR_0, &VAR_4->flags) ||
     !FUNC_0(VAR_2->root_key.objectid))
  return;

 VAR_3 = FUNC_2(VAR_2, VAR_3,
          VAR_1);
 FUNC_4(VAR_2, VAR_3);
 FUNC_1(VAR_4, VAR_2->root_key.objectid, VAR_3);
}
