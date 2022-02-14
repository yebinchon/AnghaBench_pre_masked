
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int fs_info; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_key {void* offset; int type; void* objectid; } ;
struct btrfs_dir_item {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct btrfs_dir_item* FUNC_0 (int) ;
 struct btrfs_dir_item* FUNC_1 (int ,struct btrfs_path*,char const*,int) ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int,int) ;

struct btrfs_dir_item *
FUNC_3(struct btrfs_trans_handle *VAR_2,
       struct btrfs_root *VAR_3,
       struct btrfs_path *VAR_4, u64 VAR_5,
       u64 VAR_6, const char *VAR_7, int VAR_8,
       int VAR_9)
{
 int VAR_10;
 struct btrfs_key VAR_11;
 int VAR_12 = VAR_9 < 0 ? -1 : 0;
 int VAR_13 = VAR_9 != 0;

 VAR_11.objectid = VAR_5;
 VAR_11.type = VAR_0;
 VAR_11.offset = VAR_6;

 VAR_10 = FUNC_2(VAR_2, VAR_3, &VAR_11, VAR_4, VAR_12, VAR_13);
 if (VAR_10 < 0)
  return FUNC_0(VAR_10);
 if (VAR_10 > 0)
  return FUNC_0(-VAR_1);
 return FUNC_1(VAR_3->fs_info, VAR_4, VAR_7, VAR_8);
}
