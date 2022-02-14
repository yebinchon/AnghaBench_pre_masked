
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct btrfs_block_rsv {int dummy; } ;
struct btrfs_inode {TYPE_1__* root; struct btrfs_block_rsv block_rsv; } ;
struct btrfs_fs_info {int dummy; } ;
struct TYPE_3__ {struct btrfs_fs_info* fs_info; } ;


 scalar_t__ FUNC_0 (struct btrfs_fs_info*,struct btrfs_block_rsv*,int ,scalar_t__*) ;
 int FUNC_1 (struct btrfs_inode*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (struct btrfs_fs_info*,char*,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_5(struct btrfs_inode *VAR_0, bool VAR_1)
{
 struct btrfs_fs_info *VAR_2 = VAR_0->root->fs_info;
 struct btrfs_block_rsv *VAR_3 = &VAR_0->block_rsv;
 u64 VAR_4 = 0;
 u64 VAR_5 = 0;






 VAR_4 = FUNC_0(VAR_2, VAR_3, 0,
          &VAR_5);
 if (VAR_4 > 0)
  FUNC_4(VAR_2, "delalloc",
           FUNC_1(VAR_0), VAR_4, 0);
 if (VAR_1)
  FUNC_3(VAR_0->root, VAR_5);
 else
  FUNC_2(VAR_0->root,
         VAR_5);
}
