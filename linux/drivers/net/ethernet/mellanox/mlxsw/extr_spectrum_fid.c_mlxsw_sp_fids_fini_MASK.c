
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_fid_core {int fid_ht; int vni_ht; struct mlxsw_sp_fid_core* port_fid_mappings; int * fid_family_arr; } ;
struct mlxsw_sp {struct mlxsw_sp_fid_core* fid_core; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_sp_fid_core*) ;
 int FUNC_1 (struct mlxsw_sp*,int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mlxsw_sp *VAR_1)
{
 struct mlxsw_sp_fid_core *VAR_2 = VAR_1->fid_core;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_1(VAR_1,
            VAR_2->fid_family_arr[VAR_3]);
 FUNC_0(VAR_2->port_fid_mappings);
 FUNC_2(&VAR_2->vni_ht);
 FUNC_2(&VAR_2->fid_ht);
 FUNC_0(VAR_2);
}
