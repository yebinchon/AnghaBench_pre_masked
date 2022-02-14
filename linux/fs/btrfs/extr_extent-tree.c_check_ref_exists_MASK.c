
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct btrfs_trans_handle {int dummy; } ;
struct TYPE_4__ {int objectid; } ;
struct btrfs_root {TYPE_2__ root_key; TYPE_1__* fs_info; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_extent_inline_ref {int dummy; } ;
struct TYPE_3__ {int nodesize; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct btrfs_path* FUNC_0 () ;
 int FUNC_1 (struct btrfs_path*) ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_path*,struct btrfs_extent_inline_ref**,int ,int ,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct btrfs_trans_handle *VAR_2,
       struct btrfs_root *VAR_3, u64 VAR_4, u64 VAR_5,
       int VAR_6)
{
 struct btrfs_path *VAR_7;
 struct btrfs_extent_inline_ref *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_0();
 if (!VAR_7)
  return -VAR_1;

 VAR_9 = FUNC_2(VAR_2, VAR_7, &VAR_8, VAR_4,
        VAR_3->fs_info->nodesize, VAR_5,
        VAR_3->root_key.objectid, VAR_6, 0);
 FUNC_1(VAR_7);
 if (VAR_9 == -VAR_0)
  return 0;
 if (VAR_9 < 0)
  return VAR_9;
 return 1;
}
