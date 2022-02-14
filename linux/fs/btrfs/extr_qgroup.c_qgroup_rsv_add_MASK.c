
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {int * values; } ;
struct btrfs_qgroup {TYPE_1__ rsv; } ;
struct btrfs_fs_info {int dummy; } ;
typedef enum btrfs_qgroup_rsv_type { ____Placeholder_btrfs_qgroup_rsv_type } btrfs_qgroup_rsv_type ;


 int FUNC_0 (struct btrfs_fs_info*,struct btrfs_qgroup*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct btrfs_fs_info *VAR_0,
      struct btrfs_qgroup *VAR_1, u64 VAR_2,
      enum btrfs_qgroup_rsv_type VAR_3)
{
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 VAR_1->rsv.values[VAR_3] += VAR_2;
}
