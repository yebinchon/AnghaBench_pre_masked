
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ objectid; } ;
struct btrfs_root {scalar_t__ reloc_root; TYPE_1__ root_key; int state; struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int reloc_ctl; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static inline bool FUNC_1(struct btrfs_root *VAR_2)
{
 struct btrfs_fs_info *VAR_3 = VAR_2->fs_info;

 if (!VAR_3->reloc_ctl ||
     !FUNC_0(VAR_0, &VAR_2->state) ||
     VAR_2->root_key.objectid == VAR_1 ||
     VAR_2->reloc_root)
  return 0;

 return 1;
}
