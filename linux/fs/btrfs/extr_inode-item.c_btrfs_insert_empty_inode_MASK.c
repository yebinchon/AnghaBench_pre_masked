
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_key {scalar_t__ offset; int type; int objectid; } ;
struct btrfs_inode_item {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,struct btrfs_key*,int) ;

int FUNC_1(struct btrfs_trans_handle *VAR_1,
        struct btrfs_root *VAR_2,
        struct btrfs_path *VAR_3, u64 VAR_4)
{
 struct btrfs_key VAR_5;
 int VAR_6;
 VAR_5.objectid = VAR_4;
 VAR_5.type = VAR_0;
 VAR_5.offset = 0;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_5,
          sizeof(struct btrfs_inode_item));
 return VAR_6;
}
