
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_root {int delalloc_root; int delalloc_inodes; int nr_delalloc_inodes; struct btrfs_fs_info* fs_info; } ;
struct btrfs_inode {int runtime_flags; int delalloc_inodes; } ;
struct btrfs_fs_info {int delalloc_root_lock; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct btrfs_root *VAR_1,
    struct btrfs_inode *VAR_2)
{
 struct btrfs_fs_info *VAR_3 = VAR_1->fs_info;

 if (!FUNC_4(&VAR_2->delalloc_inodes)) {
  FUNC_3(&VAR_2->delalloc_inodes);
  FUNC_2(VAR_0,
     &VAR_2->runtime_flags);
  VAR_1->nr_delalloc_inodes--;
  if (!VAR_1->nr_delalloc_inodes) {
   FUNC_0(FUNC_4(&VAR_1->delalloc_inodes));
   FUNC_5(&VAR_3->delalloc_root_lock);
   FUNC_1(FUNC_4(&VAR_1->delalloc_root));
   FUNC_3(&VAR_1->delalloc_root);
   FUNC_6(&VAR_3->delalloc_root_lock);
  }
 }
}
