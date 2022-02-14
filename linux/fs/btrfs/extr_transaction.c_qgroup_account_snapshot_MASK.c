
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct btrfs_trans_handle {int transaction; } ;
struct TYPE_2__ {int objectid; } ;
struct btrfs_root {TYPE_1__ root_key; struct btrfs_fs_info* fs_info; } ;
struct btrfs_qgroup_inherit {int dummy; } ;
struct btrfs_fs_info {int tree_log_mutex; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_fs_info*,int,char*) ;
 int FUNC_1 (struct btrfs_trans_handle*) ;
 int FUNC_2 (struct btrfs_trans_handle*,int ,int ,struct btrfs_qgroup_inherit*) ;
 int FUNC_3 (struct btrfs_trans_handle*) ;
 int FUNC_4 (struct btrfs_trans_handle*) ;
 int FUNC_5 (struct btrfs_trans_handle*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct btrfs_trans_handle*,struct btrfs_root*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static int FUNC_11(struct btrfs_trans_handle *VAR_1,
       struct btrfs_root *VAR_2,
       struct btrfs_root *VAR_3,
       struct btrfs_qgroup_inherit *VAR_4,
       u64 VAR_5)
{
 struct btrfs_fs_info *VAR_6 = VAR_2->fs_info;
 int VAR_7;






 if (!FUNC_10(VAR_0, &VAR_6->flags))
  return 0;







 FUNC_8(VAR_1, VAR_2, 1);





 FUNC_6(&VAR_6->tree_log_mutex);

 VAR_7 = FUNC_5(VAR_1);
 if (VAR_7)
  goto out;
 VAR_7 = FUNC_1(VAR_1);
 if (VAR_7 < 0)
  goto out;


 VAR_7 = FUNC_2(VAR_1, VAR_2->root_key.objectid, VAR_5,
       VAR_4);
 if (VAR_7 < 0)
  goto out;
 VAR_7 = FUNC_4(VAR_1);
 if (VAR_7)
  goto out;
 FUNC_9(VAR_1->transaction);
 VAR_7 = FUNC_3(VAR_1);
 if (VAR_7)
  FUNC_0(VAR_6, VAR_7,
   "Error while writing out transaction for qgroup");

out:
 FUNC_7(&VAR_6->tree_log_mutex);







 if (!VAR_7)
  FUNC_8(VAR_1, VAR_3, 1);
 return VAR_7;
}
