
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_key {int offset; int type; int objectid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct btrfs_path* FUNC_0 () ;
 int FUNC_1 (struct btrfs_path*) ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,struct btrfs_key*,int ) ;

int FUNC_3(struct btrfs_trans_handle *VAR_3,
        struct btrfs_root *VAR_4, u64 VAR_5)
{
 struct btrfs_path *VAR_6;
 struct btrfs_key VAR_7;
 int VAR_8 = 0;

 VAR_7.objectid = VAR_1;
 VAR_7.type = VAR_0;
 VAR_7.offset = VAR_5;

 VAR_6 = FUNC_0();
 if (!VAR_6)
  return -VAR_2;

 VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_6, &VAR_7, 0);

 FUNC_1(VAR_6);
 return VAR_8;
}
