
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct mlxsw_sp_fid_family {scalar_t__ start_index; } ;
struct mlxsw_sp {TYPE_1__* fid_core; } ;
typedef enum mlxsw_sp_fid_type { ____Placeholder_mlxsw_sp_fid_type } mlxsw_sp_fid_type ;
struct TYPE_2__ {struct mlxsw_sp_fid_family** fid_family_arr; } ;


 int VAR_0 ;

bool FUNC_0(struct mlxsw_sp *VAR_1, u16 VAR_2)
{
 enum mlxsw_sp_fid_type VAR_3 = VAR_0;
 struct mlxsw_sp_fid_family *VAR_4;

 VAR_4 = VAR_1->fid_core->fid_family_arr[VAR_3];

 return VAR_4->start_index == VAR_2;
}
