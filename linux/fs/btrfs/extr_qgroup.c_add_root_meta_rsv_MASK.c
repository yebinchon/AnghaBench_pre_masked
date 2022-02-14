
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_root {int qgroup_meta_rsv_prealloc; int qgroup_meta_rsv_pertrans; int qgroup_meta_rsv_lock; } ;
typedef enum btrfs_qgroup_rsv_type { ____Placeholder_btrfs_qgroup_rsv_type } btrfs_qgroup_rsv_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct btrfs_root *VAR_2, int VAR_3,
         enum btrfs_qgroup_rsv_type VAR_4)
{
 if (VAR_4 != VAR_1 &&
     VAR_4 != VAR_0)
  return;
 if (VAR_3 == 0)
  return;

 FUNC_0(&VAR_2->qgroup_meta_rsv_lock);
 if (VAR_4 == VAR_1)
  VAR_2->qgroup_meta_rsv_prealloc += VAR_3;
 else
  VAR_2->qgroup_meta_rsv_pertrans += VAR_3;
 FUNC_1(&VAR_2->qgroup_meta_rsv_lock);
}
