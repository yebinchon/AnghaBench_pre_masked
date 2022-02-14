
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct btrfs_inode {int lock; TYPE_1__* root; } ;
struct btrfs_fs_info {int dummy; } ;
struct TYPE_2__ {struct btrfs_fs_info* fs_info; } ;


 int FUNC_0 (struct btrfs_fs_info*,struct btrfs_inode*) ;
 int FUNC_1 (struct btrfs_inode*,int) ;
 scalar_t__ FUNC_2 (struct btrfs_fs_info*) ;
 int FUNC_3 (struct btrfs_inode*,unsigned int) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct btrfs_inode *VAR_0, u64 VAR_1)
{
 struct btrfs_fs_info *VAR_2 = VAR_0->root->fs_info;
 unsigned VAR_3;

 FUNC_5(&VAR_0->lock);
 VAR_3 = FUNC_4(VAR_1);
 FUNC_3(VAR_0, -VAR_3);
 FUNC_0(VAR_2, VAR_0);
 FUNC_6(&VAR_0->lock);

 if (FUNC_2(VAR_2))
  return;

 FUNC_1(VAR_0, 1);
}
