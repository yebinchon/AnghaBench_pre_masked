
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct btrfs_trans_handle {TYPE_1__* fs_info; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int * nodes; } ;
struct btrfs_key {void* offset; int type; void* objectid; } ;
struct TYPE_2__ {struct btrfs_root* quota_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct btrfs_path* FUNC_0 () ;
 int FUNC_1 (struct btrfs_path*) ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,struct btrfs_key*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct btrfs_trans_handle *VAR_2, u64 VAR_3,
        u64 VAR_4)
{
 int VAR_5;
 struct btrfs_root *VAR_6 = VAR_2->fs_info->quota_root;
 struct btrfs_path *VAR_7;
 struct btrfs_key VAR_8;

 VAR_7 = FUNC_0();
 if (!VAR_7)
  return -VAR_1;

 VAR_8.objectid = VAR_3;
 VAR_8.type = VAR_0;
 VAR_8.offset = VAR_4;

 VAR_5 = FUNC_2(VAR_2, VAR_6, VAR_7, &VAR_8, 0);

 FUNC_3(VAR_7->nodes[0]);

 FUNC_1(VAR_7);
 return VAR_5;
}
