
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ objectid; } ;
struct btrfs_root {scalar_t__ free_ino_ctl; scalar_t__ free_ino_pinned; TYPE_2__* reloc_root; int root_item; TYPE_1__ root_key; } ;
struct btrfs_fs_info {int fs_state; int subvol_srcu; int fs_roots_radix_lock; int fs_roots_radix; } ;
struct TYPE_4__ {int commit_root; int node; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct btrfs_root*) ;
 int FUNC_2 (int *,struct btrfs_root*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;

void FUNC_11(struct btrfs_fs_info *VAR_1,
      struct btrfs_root *VAR_2)
{
 FUNC_7(&VAR_1->fs_roots_radix_lock);
 FUNC_6(&VAR_1->fs_roots_radix,
     (unsigned long)VAR_2->root_key.objectid);
 FUNC_8(&VAR_1->fs_roots_radix_lock);

 if (FUNC_4(&VAR_2->root_item) == 0)
  FUNC_9(&VAR_1->subvol_srcu);

 if (FUNC_10(VAR_0, &VAR_1->fs_state)) {
  FUNC_2(((void*)0), VAR_2);
  if (VAR_2->reloc_root) {
   FUNC_5(VAR_2->reloc_root->node);
   FUNC_5(VAR_2->reloc_root->commit_root);
   FUNC_3(VAR_2->reloc_root);
   VAR_2->reloc_root = ((void*)0);
  }
 }

 if (VAR_2->free_ino_pinned)
  FUNC_0(VAR_2->free_ino_pinned);
 if (VAR_2->free_ino_ctl)
  FUNC_0(VAR_2->free_ino_ctl);
 FUNC_1(VAR_2);
}
