
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_fid_family {size_t type; int fids_list; int fids_bitmap; } ;
struct mlxsw_sp {TYPE_1__* fid_core; } ;
struct TYPE_2__ {int ** fid_family_arr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlxsw_sp_fid_family*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct mlxsw_sp *VAR_0,
          struct mlxsw_sp_fid_family *VAR_1)
{
 VAR_0->fid_core->fid_family_arr[VAR_1->type] = ((void*)0);
 FUNC_1(VAR_1->fids_bitmap);
 FUNC_0(!FUNC_3(&VAR_1->fids_list));
 FUNC_2(VAR_1);
}
