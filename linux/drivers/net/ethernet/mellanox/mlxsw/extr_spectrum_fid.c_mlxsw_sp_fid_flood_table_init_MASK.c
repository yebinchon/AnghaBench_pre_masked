
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_flood_table {int packet_type; int table_index; int table_type; int bridge_type; } ;
struct mlxsw_sp_fid_family {struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; } ;
typedef enum mlxsw_sp_flood_type { ____Placeholder_mlxsw_sp_flood_type } mlxsw_sp_flood_type ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int,int ,int ,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int** VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(struct mlxsw_sp_fid_family *VAR_4,
         const struct mlxsw_sp_flood_table *VAR_5)
{
 enum mlxsw_sp_flood_type VAR_6 = VAR_5->packet_type;
 const int *VAR_7;
 int VAR_8;

 VAR_7 = VAR_2[VAR_6];
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  struct mlxsw_sp *VAR_9 = VAR_4->mlxsw_sp;
  char VAR_10[VAR_0];
  int VAR_11;

  if (!VAR_7[VAR_8])
   continue;
  FUNC_1(VAR_10, VAR_8, VAR_5->bridge_type,
        VAR_5->table_type,
        VAR_5->table_index);
  VAR_11 = FUNC_2(VAR_9->core, FUNC_0(VAR_3), VAR_10);
  if (VAR_11)
   return VAR_11;
 }

 return 0;
}
