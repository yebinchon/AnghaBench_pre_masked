
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct btrfs_trans_handle {int dummy; } ;
struct TYPE_2__ {int objectid; } ;
struct btrfs_root {int fs_info; TYPE_1__ root_key; } ;
struct btrfs_ref {int member_0; } ;
struct btrfs_key {int offset; int objectid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct btrfs_trans_handle*,struct btrfs_ref*,int ,int *,int *) ;
 int FUNC_2 (struct btrfs_ref*,int ,int ,int ) ;
 int FUNC_3 (struct btrfs_ref*,int ,int ,int ,int ) ;
 int FUNC_4 (int ,struct btrfs_ref*) ;

int FUNC_5(struct btrfs_trans_handle *VAR_2,
         struct btrfs_root *VAR_3, u64 VAR_4,
         u64 VAR_5, u64 VAR_6,
         struct btrfs_key *VAR_7)
{
 struct btrfs_ref VAR_8 = { 0 };
 int VAR_9;

 FUNC_0(VAR_3->root_key.objectid == VAR_1);

 FUNC_3(&VAR_8, VAR_0,
          VAR_7->objectid, VAR_7->offset, 0);
 FUNC_2(&VAR_8, VAR_3->root_key.objectid, VAR_4, VAR_5);
 FUNC_4(VAR_3->fs_info, &VAR_8);
 VAR_9 = FUNC_1(VAR_2, &VAR_8,
      VAR_6, ((void*)0), ((void*)0));
 return VAR_9;
}
