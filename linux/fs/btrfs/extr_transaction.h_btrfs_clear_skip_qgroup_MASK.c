
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_trans_handle {TYPE_1__* transaction; } ;
struct btrfs_delayed_ref_root {scalar_t__ qgroup_to_skip; } ;
struct TYPE_2__ {struct btrfs_delayed_ref_root delayed_refs; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct btrfs_trans_handle *VAR_0)
{
 struct btrfs_delayed_ref_root *VAR_1;

 VAR_1 = &VAR_0->transaction->delayed_refs;
 FUNC_0(!VAR_1->qgroup_to_skip);
 VAR_1->qgroup_to_skip = 0;
}
