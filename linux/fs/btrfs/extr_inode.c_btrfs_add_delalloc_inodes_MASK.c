
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct btrfs_root {int nr_delalloc_inodes; int delalloc_lock; int delalloc_root; int delalloc_inodes; } ;
struct btrfs_fs_info {int delalloc_root_lock; int delalloc_roots; } ;
struct TYPE_2__ {int runtime_flags; int delalloc_inodes; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 struct btrfs_fs_info* FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct btrfs_root *VAR_1,
          struct inode *VAR_2)
{
 struct btrfs_fs_info *VAR_3 = FUNC_2(VAR_2->i_sb);

 FUNC_6(&VAR_1->delalloc_lock);
 if (FUNC_4(&FUNC_0(VAR_2)->delalloc_inodes)) {
  FUNC_3(&FUNC_0(VAR_2)->delalloc_inodes,
         &VAR_1->delalloc_inodes);
  FUNC_5(VAR_0,
   &FUNC_0(VAR_2)->runtime_flags);
  VAR_1->nr_delalloc_inodes++;
  if (VAR_1->nr_delalloc_inodes == 1) {
   FUNC_6(&VAR_3->delalloc_root_lock);
   FUNC_1(!FUNC_4(&VAR_1->delalloc_root));
   FUNC_3(&VAR_1->delalloc_root,
          &VAR_3->delalloc_roots);
   FUNC_7(&VAR_3->delalloc_root_lock);
  }
 }
 FUNC_7(&VAR_1->delalloc_lock);
}
