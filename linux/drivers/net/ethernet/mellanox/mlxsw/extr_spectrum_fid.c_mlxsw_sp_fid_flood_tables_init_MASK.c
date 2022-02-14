
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_flood_table {int dummy; } ;
struct mlxsw_sp_fid_family {int nr_flood_tables; struct mlxsw_sp_flood_table* flood_tables; } ;


 int FUNC_0 (struct mlxsw_sp_fid_family*,struct mlxsw_sp_flood_table const*) ;

__attribute__((used)) static int
FUNC_1(struct mlxsw_sp_fid_family *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nr_flood_tables; VAR_1++) {
  const struct mlxsw_sp_flood_table *VAR_2;
  int VAR_3;

  VAR_2 = &VAR_0->flood_tables[VAR_1];
  VAR_3 = FUNC_0(VAR_0, VAR_2);
  if (VAR_3)
   return VAR_3;
 }

 return 0;
}
