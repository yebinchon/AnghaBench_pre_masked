
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct btrfs_key {scalar_t__ offset; int type; int objectid; } ;
struct TYPE_2__ {struct super_block* sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct super_block*,struct btrfs_key*,struct btrfs_root*,int *) ;
 int FUNC_3 (struct btrfs_trans_handle*,struct inode*,struct inode*) ;
 int FUNC_4 (struct inode*) ;

int FUNC_5(struct btrfs_trans_handle *VAR_2,
          struct btrfs_root *VAR_3,
          struct btrfs_root *VAR_4)
{
 struct super_block *VAR_5 = VAR_3->fs_info->sb;
 struct btrfs_key VAR_6;
 struct inode *VAR_7, *VAR_8;
 int VAR_9;

 VAR_6.objectid = VAR_0;
 VAR_6.type = VAR_1;
 VAR_6.offset = 0;

 VAR_7 = FUNC_2(VAR_5, &VAR_6, VAR_4, ((void*)0));
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_8 = FUNC_2(VAR_5, &VAR_6, VAR_3, ((void*)0));
 if (FUNC_0(VAR_8)) {
  FUNC_4(VAR_7);
  return FUNC_1(VAR_8);
 }

 VAR_9 = FUNC_3(VAR_2, VAR_8, VAR_7);
 FUNC_4(VAR_8);
 FUNC_4(VAR_7);

 return VAR_9;
}
