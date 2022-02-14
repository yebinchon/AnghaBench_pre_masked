
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union mlxsw_sp_l3addr {int addr6; } ;
struct mlxsw_sp_nve_mc_record {int dummy; } ;
struct TYPE_2__ {int addr6; } ;
struct mlxsw_sp_nve_mc_entry {TYPE_1__ ipv6_entry; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static bool
FUNC_1(const struct mlxsw_sp_nve_mc_record *VAR_0,
       const struct mlxsw_sp_nve_mc_entry *VAR_1,
       const union mlxsw_sp_l3addr *VAR_2)
{
 return FUNC_0(&VAR_1->ipv6_entry.addr6, &VAR_2->addr6);
}
