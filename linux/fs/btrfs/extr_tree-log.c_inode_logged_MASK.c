
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_trans_handle {scalar_t__ transid; TYPE_1__* fs_info; } ;
struct btrfs_inode {scalar_t__ logged_trans; scalar_t__ last_trans; int runtime_flags; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static bool FUNC_1(struct btrfs_trans_handle *VAR_2,
    struct btrfs_inode *VAR_3)
{
 if (VAR_3->logged_trans == VAR_2->transid)
  return 1;

 if (VAR_3->last_trans == VAR_2->transid &&
     FUNC_0(VAR_1, &VAR_3->runtime_flags) &&
     !FUNC_0(VAR_0, &VAR_2->fs_info->flags))
  return 1;

 return 0;
}
