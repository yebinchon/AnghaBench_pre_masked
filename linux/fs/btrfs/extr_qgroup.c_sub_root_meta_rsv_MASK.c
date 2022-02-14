
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_root {int qgroup_meta_rsv_prealloc; int qgroup_meta_rsv_pertrans; int qgroup_meta_rsv_lock; } ;
typedef enum btrfs_qgroup_rsv_type { ____Placeholder_btrfs_qgroup_rsv_type } btrfs_qgroup_rsv_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct btrfs_root *VAR_3, int VAR_4,
        enum btrfs_qgroup_rsv_type VAR_5)
{
 if (VAR_5 != VAR_1 &&
     VAR_5 != VAR_0)
  return 0;
 if (VAR_4 == 0)
  return 0;

 FUNC_1(&VAR_3->qgroup_meta_rsv_lock);
 if (VAR_5 == VAR_1) {
  VAR_4 = FUNC_0(VAR_2, VAR_3->qgroup_meta_rsv_prealloc,
      VAR_4);
  VAR_3->qgroup_meta_rsv_prealloc -= VAR_4;
 } else {
  VAR_4 = FUNC_0(VAR_2, VAR_3->qgroup_meta_rsv_pertrans,
      VAR_4);
  VAR_3->qgroup_meta_rsv_pertrans -= VAR_4;
 }
 FUNC_2(&VAR_3->qgroup_meta_rsv_lock);
 return VAR_4;
}
