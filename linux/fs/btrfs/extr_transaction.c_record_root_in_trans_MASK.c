
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_trans_handle {scalar_t__ transid; } ;
struct TYPE_2__ {scalar_t__ objectid; } ;
struct btrfs_root {scalar_t__ last_trans; scalar_t__ commit_root; scalar_t__ node; int state; TYPE_1__ root_key; struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int fs_roots_radix_lock; int fs_roots_radix; struct btrfs_root* extent_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,unsigned long,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct btrfs_trans_handle *VAR_3,
          struct btrfs_root *VAR_4,
          int VAR_5)
{
 struct btrfs_fs_info *VAR_6 = VAR_4->fs_info;

 if ((FUNC_9(VAR_1, &VAR_4->state) &&
     VAR_4->last_trans < VAR_3->transid) || VAR_5) {
  FUNC_0(VAR_4 == VAR_6->extent_root);
  FUNC_0(!VAR_5 && VAR_4->commit_root != VAR_4->node);






  FUNC_4(VAR_0, &VAR_4->state);




  FUNC_6();

  FUNC_7(&VAR_6->fs_roots_radix_lock);
  if (VAR_4->last_trans == VAR_3->transid && !VAR_5) {
   FUNC_8(&VAR_6->fs_roots_radix_lock);
   return 0;
  }
  FUNC_3(&VAR_6->fs_roots_radix,
       (unsigned long)VAR_4->root_key.objectid,
       VAR_2);
  FUNC_8(&VAR_6->fs_roots_radix_lock);
  VAR_4->last_trans = VAR_3->transid;
  FUNC_1(VAR_3, VAR_4);
  FUNC_5();
  FUNC_2(VAR_0, &VAR_4->state);
 }
 return 0;
}
