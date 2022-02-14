
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int dummy; } ;
struct TYPE_3__ {int objectid; } ;
struct btrfs_root {TYPE_1__ root_key; int root_item; struct btrfs_free_space_ctl* free_ino_ctl; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_free_space_ctl {int dummy; } ;
struct TYPE_4__ {scalar_t__ generation; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct btrfs_root*,struct inode*,struct btrfs_free_space_ctl*,struct btrfs_path*,int ) ;
 struct btrfs_path* FUNC_3 () ;
 int FUNC_4 (struct btrfs_fs_info*,char*,int ) ;
 int FUNC_5 (struct btrfs_path*) ;
 scalar_t__ FUNC_6 (struct btrfs_fs_info*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (struct btrfs_fs_info*,int ) ;
 int FUNC_9 (struct inode*) ;
 struct inode* FUNC_10 (struct btrfs_root*,struct btrfs_path*) ;

int FUNC_11(struct btrfs_fs_info *VAR_1, struct btrfs_root *VAR_2)
{
 struct btrfs_free_space_ctl *VAR_3 = VAR_2->free_ino_ctl;
 struct btrfs_path *VAR_4;
 struct inode *VAR_5;
 int VAR_6 = 0;
 u64 VAR_7 = FUNC_7(&VAR_2->root_item);

 if (!FUNC_8(VAR_1, VAR_0))
  return 0;





 if (FUNC_6(VAR_1))
  return 0;

 VAR_4 = FUNC_3();
 if (!VAR_4)
  return 0;

 VAR_5 = FUNC_10(VAR_2, VAR_4);
 if (FUNC_1(VAR_5))
  goto out;

 if (VAR_7 != FUNC_0(VAR_5)->generation)
  goto out_put;

 VAR_6 = FUNC_2(VAR_2, VAR_5, VAR_3, VAR_4, 0);

 if (VAR_6 < 0)
  FUNC_4(VAR_1,
   "failed to load free ino cache for root %llu",
   VAR_2->root_key.objectid);
out_put:
 FUNC_9(VAR_5);
out:
 FUNC_5(VAR_4);
 return VAR_6;
}
