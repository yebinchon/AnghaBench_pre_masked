
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct btrfs_path {int dummy; } ;
struct btrfs_key {int type; void* offset; void* objectid; } ;
struct btrfs_fs_info {int extent_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct btrfs_path* FUNC_0 () ;
 int FUNC_1 (struct btrfs_path*) ;
 int FUNC_2 (int *,int ,struct btrfs_key*,struct btrfs_path*,int ,int ) ;

int FUNC_3(struct btrfs_fs_info *VAR_2, u64 VAR_3, u64 VAR_4)
{
 int VAR_5;
 struct btrfs_key VAR_6;
 struct btrfs_path *VAR_7;

 VAR_7 = FUNC_0();
 if (!VAR_7)
  return -VAR_1;

 VAR_6.objectid = VAR_3;
 VAR_6.offset = VAR_4;
 VAR_6.type = VAR_0;
 VAR_5 = FUNC_2(((void*)0), VAR_2->extent_root, &VAR_6, VAR_7, 0, 0);
 FUNC_1(VAR_7);
 return VAR_5;
}
