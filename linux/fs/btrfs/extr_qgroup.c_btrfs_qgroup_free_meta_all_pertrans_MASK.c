
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int objectid; } ;
struct btrfs_root {TYPE_1__ root_key; struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct btrfs_fs_info*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct btrfs_root*) ;

void FUNC_4(struct btrfs_root *VAR_2)
{
 struct btrfs_fs_info *VAR_3 = VAR_2->fs_info;

 if (!FUNC_2(VAR_0, &VAR_3->flags) ||
     !FUNC_1(VAR_2->root_key.objectid))
  return;


 FUNC_3(VAR_2);

 FUNC_0(VAR_3, VAR_2->root_key.objectid, (u64)-1,
      VAR_1);
}
