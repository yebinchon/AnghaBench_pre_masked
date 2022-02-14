
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_trans_handle {scalar_t__ transid; TYPE_1__* fs_info; } ;
struct TYPE_2__ {int last_trans_log_full_commit; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct btrfs_trans_handle *VAR_0)
{
 return FUNC_0(VAR_0->fs_info->last_trans_log_full_commit) ==
  VAR_0->transid;
}
