
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_nve_mc_record {int num_entries; int kvdl_index; int list; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlxsw_sp_nve_mc_record*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mlxsw_sp*,int ,int,int ) ;

__attribute__((used)) static void
FUNC_4(struct mlxsw_sp_nve_mc_record *VAR_1)
{
 struct mlxsw_sp *VAR_2 = VAR_1->mlxsw_sp;

 FUNC_2(&VAR_1->list);
 FUNC_3(VAR_2, VAR_0, 1,
      VAR_1->kvdl_index);
 FUNC_0(VAR_1->num_entries);
 FUNC_1(VAR_1);
}
