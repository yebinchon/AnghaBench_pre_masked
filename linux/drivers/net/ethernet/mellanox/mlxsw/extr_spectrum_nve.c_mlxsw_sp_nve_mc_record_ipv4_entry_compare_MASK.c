
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union mlxsw_sp_l3addr {scalar_t__ addr4; } ;
struct mlxsw_sp_nve_mc_record {int dummy; } ;
struct mlxsw_sp_nve_mc_entry {scalar_t__ addr4; } ;



__attribute__((used)) static bool
FUNC_0(const struct mlxsw_sp_nve_mc_record *VAR_0,
       const struct mlxsw_sp_nve_mc_entry *VAR_1,
       const union mlxsw_sp_l3addr *VAR_2)
{
 return VAR_1->addr4 == VAR_2->addr4;
}
