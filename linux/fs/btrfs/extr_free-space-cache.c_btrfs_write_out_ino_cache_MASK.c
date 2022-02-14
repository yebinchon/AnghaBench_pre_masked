
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_size; } ;
struct btrfs_trans_handle {int dummy; } ;
struct TYPE_2__ {int objectid; } ;
struct btrfs_root {TYPE_1__ root_key; struct btrfs_free_space_ctl* free_ino_ctl; struct btrfs_fs_info* fs_info; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_io_ctl {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_free_space_ctl {int dummy; } ;
typedef int io_ctl ;


 int FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct btrfs_root*,struct inode*,struct btrfs_free_space_ctl*,int *,struct btrfs_io_ctl*,struct btrfs_trans_handle*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct btrfs_fs_info*,char*,int ) ;
 int FUNC_4 (struct btrfs_fs_info*,int ) ;
 int FUNC_5 (struct btrfs_root*,struct btrfs_trans_handle*,struct btrfs_io_ctl*,struct btrfs_path*) ;
 int FUNC_6 (struct btrfs_io_ctl*,int ,int) ;

int FUNC_7(struct btrfs_root *VAR_1,
         struct btrfs_trans_handle *VAR_2,
         struct btrfs_path *VAR_3,
         struct inode *VAR_4)
{
 struct btrfs_fs_info *VAR_5 = VAR_1->fs_info;
 struct btrfs_free_space_ctl *VAR_6 = VAR_1->free_ino_ctl;
 int VAR_7;
 struct btrfs_io_ctl VAR_8;
 bool VAR_9 = 1;

 if (!FUNC_4(VAR_5, VAR_0))
  return 0;

 FUNC_6(&VAR_8, 0, sizeof(VAR_8));
 VAR_7 = FUNC_1(VAR_1, VAR_4, VAR_6, ((void*)0), &VAR_8, VAR_2);
 if (!VAR_7) {






  VAR_9 = 0;
  VAR_7 = FUNC_5(VAR_1, VAR_2, &VAR_8, VAR_3);
 }

 if (VAR_7) {
  if (VAR_9)
   FUNC_2(FUNC_0(VAR_4),
     VAR_4->i_size, 1);





 }

 return VAR_7;
}
