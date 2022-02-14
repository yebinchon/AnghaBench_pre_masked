
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct btrfs_trans_handle {TYPE_1__* fs_info; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_key {int type; int offset; scalar_t__ objectid; } ;
struct TYPE_2__ {struct btrfs_root* quota_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct btrfs_path* FUNC_0 () ;
 int FUNC_1 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_2 (struct btrfs_path*) ;
 int FUNC_3 (struct btrfs_path*) ;
 int FUNC_4 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int,int) ;

__attribute__((used)) static int FUNC_5(struct btrfs_trans_handle *VAR_4, u64 VAR_5)
{
 int VAR_6;
 struct btrfs_root *VAR_7 = VAR_4->fs_info->quota_root;
 struct btrfs_path *VAR_8;
 struct btrfs_key VAR_9;

 VAR_8 = FUNC_0();
 if (!VAR_8)
  return -VAR_3;

 VAR_9.objectid = 0;
 VAR_9.type = VAR_0;
 VAR_9.offset = VAR_5;
 VAR_6 = FUNC_4(VAR_4, VAR_7, &VAR_9, VAR_8, -1, 1);
 if (VAR_6 < 0)
  goto out;

 if (VAR_6 > 0) {
  VAR_6 = -VAR_2;
  goto out;
 }

 VAR_6 = FUNC_1(VAR_4, VAR_7, VAR_8);
 if (VAR_6)
  goto out;

 FUNC_3(VAR_8);

 VAR_9.type = VAR_1;
 VAR_6 = FUNC_4(VAR_4, VAR_7, &VAR_9, VAR_8, -1, 1);
 if (VAR_6 < 0)
  goto out;

 if (VAR_6 > 0) {
  VAR_6 = -VAR_2;
  goto out;
 }

 VAR_6 = FUNC_1(VAR_4, VAR_7, VAR_8);

out:
 FUNC_2(VAR_8);
 return VAR_6;
}
