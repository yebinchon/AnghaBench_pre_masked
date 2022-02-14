
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_neigh_entry {int dummy; } ;
struct mlxsw_sp {int core; } ;
struct devlink {int dummy; } ;




 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct devlink*,char const*) ;
 int FUNC_2 (struct mlxsw_sp_neigh_entry*) ;
 struct devlink* FUNC_3 (int ) ;

__attribute__((used)) static bool
FUNC_4(struct mlxsw_sp *VAR_2,
        struct mlxsw_sp_neigh_entry *VAR_3)
{
 struct devlink *VAR_4;
 const char *VAR_5;

 switch (FUNC_2(VAR_3)) {
 case 129:
  VAR_5 = VAR_0;
  break;
 case 128:
  VAR_5 = VAR_1;
  break;
 default:
  FUNC_0(1);
  return 0;
 }

 VAR_4 = FUNC_3(VAR_2->core);
 return FUNC_1(VAR_4, VAR_5);
}
