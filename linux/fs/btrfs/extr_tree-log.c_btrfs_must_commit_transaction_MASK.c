
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_trans_handle {int dummy; } ;
struct btrfs_inode {scalar_t__ last_unlink_trans; int log_mutex; TYPE_1__* root; } ;
struct btrfs_fs_info {scalar_t__ last_trans_committed; } ;
struct TYPE_2__ {struct btrfs_fs_info* fs_info; } ;


 int FUNC_0 (struct btrfs_trans_handle*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct btrfs_trans_handle *VAR_0,
       struct btrfs_inode *VAR_1)
{
 struct btrfs_fs_info *VAR_2 = VAR_1->root->fs_info;
 bool VAR_3 = 0;

 FUNC_1(&VAR_1->log_mutex);
 if (VAR_1->last_unlink_trans > VAR_2->last_trans_committed) {




  FUNC_0(VAR_0);
  VAR_3 = 1;
 }
 FUNC_2(&VAR_1->log_mutex);

 return VAR_3;
}
