
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct btrfs_inode {int lock; int csum_bytes; TYPE_1__* root; } ;
struct btrfs_fs_info {int sectorsize; } ;
struct TYPE_2__ {struct btrfs_fs_info* fs_info; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct btrfs_fs_info*,struct btrfs_inode*) ;
 int FUNC_2 (struct btrfs_inode*,int) ;
 scalar_t__ FUNC_3 (struct btrfs_fs_info*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct btrfs_inode *VAR_0, u64 VAR_1,
         bool VAR_2)
{
 struct btrfs_fs_info *VAR_3 = VAR_0->root->fs_info;

 VAR_1 = FUNC_0(VAR_1, VAR_3->sectorsize);
 FUNC_4(&VAR_0->lock);
 VAR_0->csum_bytes -= VAR_1;
 FUNC_1(VAR_3, VAR_0);
 FUNC_5(&VAR_0->lock);

 if (FUNC_3(VAR_3))
  return;

 FUNC_2(VAR_0, VAR_2);
}
