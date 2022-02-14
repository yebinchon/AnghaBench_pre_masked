
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlxsw_sp_nexthop {int counter_index; scalar_t__ counter_valid; struct mlxsw_sp_neigh_entry* neigh_entry; } ;
struct mlxsw_sp_neigh_entry {int ha; int rif; } ;
struct mlxsw_sp {int core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ,int,int ,int ,int ) ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct mlxsw_sp *VAR_4, u32 VAR_5,
         struct mlxsw_sp_nexthop *VAR_6)
{
 struct mlxsw_sp_neigh_entry *VAR_7 = VAR_6->neigh_entry;
 char VAR_8[VAR_0];

 FUNC_3(VAR_8, VAR_1,
       1, VAR_2,
       VAR_5, VAR_7->rif);
 FUNC_2(VAR_8, VAR_7->ha);
 if (VAR_6->counter_valid)
  FUNC_1(VAR_8, VAR_6->counter_index, 1);
 else
  FUNC_1(VAR_8, 0, 0);

 return FUNC_4(VAR_4->core, FUNC_0(VAR_3), VAR_8);
}
