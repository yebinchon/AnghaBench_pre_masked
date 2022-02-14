
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__* values; } ;
struct btrfs_qgroup {TYPE_1__ rsv; int qgroupid; } ;
struct btrfs_fs_info {int dummy; } ;
typedef int s64 ;
typedef enum btrfs_qgroup_rsv_type { ____Placeholder_btrfs_qgroup_rsv_type } btrfs_qgroup_rsv_type ;


 int FUNC_0 (int,char*,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct btrfs_fs_info*,struct btrfs_qgroup*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct btrfs_fs_info *VAR_0,
          struct btrfs_qgroup *VAR_1, u64 VAR_2,
          enum btrfs_qgroup_rsv_type VAR_3)
{
 FUNC_2(VAR_0, VAR_1, -(s64)VAR_2, VAR_3);
 if (VAR_1->rsv.values[VAR_3] >= VAR_2) {
  VAR_1->rsv.values[VAR_3] -= VAR_2;
  return;
 }






 VAR_1->rsv.values[VAR_3] = 0;
}
