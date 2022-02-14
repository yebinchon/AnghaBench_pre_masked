
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode_defrag {int dummy; } ;
struct btrfs_inode {TYPE_1__* root; } ;
struct btrfs_fs_info {int defrag_inodes_lock; } ;
struct TYPE_2__ {struct btrfs_fs_info* fs_info; } ;


 int FUNC_0 (struct btrfs_inode*,struct inode_defrag*) ;
 int FUNC_1 (struct btrfs_fs_info*) ;
 int VAR_0 ;
 int FUNC_2 (int ,struct inode_defrag*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct btrfs_inode *VAR_1,
           struct inode_defrag *VAR_2)
{
 struct btrfs_fs_info *VAR_3 = VAR_1->root->fs_info;
 int VAR_4;

 if (!FUNC_1(VAR_3))
  goto out;





 FUNC_3(&VAR_3->defrag_inodes_lock);
 VAR_4 = FUNC_0(VAR_1, VAR_2);
 FUNC_4(&VAR_3->defrag_inodes_lock);
 if (VAR_4)
  goto out;
 return;
out:
 FUNC_2(VAR_0, VAR_2);
}
