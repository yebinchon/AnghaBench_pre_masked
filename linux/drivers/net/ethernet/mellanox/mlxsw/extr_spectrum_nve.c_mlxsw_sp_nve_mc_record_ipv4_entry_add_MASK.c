
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union mlxsw_sp_l3addr {int addr4; } ;
struct mlxsw_sp_nve_mc_record {int dummy; } ;
struct mlxsw_sp_nve_mc_entry {int addr4; } ;



__attribute__((used)) static int
FUNC_0(struct mlxsw_sp_nve_mc_record *VAR_0,
          struct mlxsw_sp_nve_mc_entry *VAR_1,
          const union mlxsw_sp_l3addr *VAR_2)
{
 VAR_1->addr4 = VAR_2->addr4;

 return 0;
}
