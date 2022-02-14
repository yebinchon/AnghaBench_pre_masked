
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct btrfs_trans_handle {TYPE_3__* fs_info; TYPE_2__* transaction; } ;
struct TYPE_6__ {int avg_delayed_ref_runtime; } ;
struct TYPE_4__ {int num_entries; } ;
struct TYPE_5__ {TYPE_1__ delayed_refs; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 () ;

int FUNC_3(struct btrfs_trans_handle *VAR_1)
{
 u64 VAR_2 =
  FUNC_0(&VAR_1->transaction->delayed_refs.num_entries);
 u64 VAR_3;
 u64 VAR_4;

 FUNC_2();
 VAR_3 = VAR_1->fs_info->avg_delayed_ref_runtime;
 VAR_4 = VAR_2 * VAR_3;
 if (VAR_4 >= VAR_0)
  return 1;
 if (VAR_4 >= VAR_0 / 2)
  return 2;

 return FUNC_1(VAR_1->fs_info);
}
