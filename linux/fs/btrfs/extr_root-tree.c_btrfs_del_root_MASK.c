
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_trans_handle {TYPE_1__* fs_info; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_key {int dummy; } ;
struct TYPE_2__ {struct btrfs_root* tree_root; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct btrfs_path* FUNC_1 () ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_3 (struct btrfs_path*) ;
 int FUNC_4 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_key const*,struct btrfs_path*,int,int) ;

int FUNC_5(struct btrfs_trans_handle *VAR_1,
     const struct btrfs_key *VAR_2)
{
 struct btrfs_root *VAR_3 = VAR_1->fs_info->tree_root;
 struct btrfs_path *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1();
 if (!VAR_4)
  return -VAR_0;
 VAR_5 = FUNC_4(VAR_1, VAR_3, VAR_2, VAR_4, -1, 1);
 if (VAR_5 < 0)
  goto out;

 FUNC_0(VAR_5 != 0);

 VAR_5 = FUNC_2(VAR_1, VAR_3, VAR_4);
out:
 FUNC_3(VAR_4);
 return VAR_5;
}
