
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_rif {int dummy; } ;
struct mlxsw_sp_neigh_entry {int dummy; } ;
struct in6_addr {int dummy; } ;
struct devlink_dpipe_entry {int dummy; } ;


 int FUNC_0 (struct devlink_dpipe_entry*,struct mlxsw_sp_rif*,unsigned char*,struct in6_addr*) ;
 struct in6_addr* FUNC_1 (struct mlxsw_sp_neigh_entry*) ;
 unsigned char* FUNC_2 (struct mlxsw_sp_neigh_entry*) ;

__attribute__((used)) static void
FUNC_3(struct devlink_dpipe_entry *VAR_0,
          struct mlxsw_sp_neigh_entry *VAR_1,
          struct mlxsw_sp_rif *VAR_2)
{
 struct in6_addr *VAR_3;
 unsigned char *VAR_4;

 VAR_4 = FUNC_2(VAR_1);
 VAR_3 = FUNC_1(VAR_1);

 FUNC_0(VAR_0, VAR_2, VAR_4, VAR_3);
}
