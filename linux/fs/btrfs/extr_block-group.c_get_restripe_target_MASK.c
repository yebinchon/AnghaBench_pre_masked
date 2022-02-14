
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct btrfs_fs_info {struct btrfs_balance_control* balance_ctl; } ;
struct TYPE_6__ {int flags; int target; } ;
struct TYPE_5__ {int flags; int target; } ;
struct TYPE_4__ {int flags; int target; } ;
struct btrfs_balance_control {TYPE_3__ meta; TYPE_2__ sys; TYPE_1__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static u64 FUNC_0(struct btrfs_fs_info *VAR_4, u64 VAR_5)
{
 struct btrfs_balance_control *VAR_6 = VAR_4->balance_ctl;
 u64 VAR_7 = 0;

 if (!VAR_6)
  return 0;

 if (VAR_5 & VAR_1 &&
     VAR_6->data.flags & VAR_0) {
  VAR_7 = VAR_1 | VAR_6->data.target;
 } else if (VAR_5 & VAR_3 &&
     VAR_6->sys.flags & VAR_0) {
  VAR_7 = VAR_3 | VAR_6->sys.target;
 } else if (VAR_5 & VAR_2 &&
     VAR_6->meta.flags & VAR_0) {
  VAR_7 = VAR_2 | VAR_6->meta.target;
 }

 return VAR_7;
}
