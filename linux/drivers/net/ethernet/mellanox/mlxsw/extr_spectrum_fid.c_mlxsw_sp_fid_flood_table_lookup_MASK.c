
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_flood_table {int packet_type; } ;
struct mlxsw_sp_fid_family {int nr_flood_tables; struct mlxsw_sp_flood_table const* flood_tables; } ;
struct mlxsw_sp_fid {struct mlxsw_sp_fid_family* fid_family; } ;
typedef enum mlxsw_sp_flood_type { ____Placeholder_mlxsw_sp_flood_type } mlxsw_sp_flood_type ;



__attribute__((used)) static const struct mlxsw_sp_flood_table *
FUNC_0(const struct mlxsw_sp_fid *VAR_0,
    enum mlxsw_sp_flood_type VAR_1)
{
 struct mlxsw_sp_fid_family *VAR_2 = VAR_0->fid_family;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->nr_flood_tables; VAR_3++) {
  if (VAR_2->flood_tables[VAR_3].packet_type != VAR_1)
   continue;
  return &VAR_2->flood_tables[VAR_3];
 }

 return ((void*)0);
}
