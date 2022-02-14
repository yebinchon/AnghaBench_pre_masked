
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mlxsw_sp_flood_table {int table_type; int table_index; } ;
struct mlxsw_sp_fid_ops {int (* flood_index ) (struct mlxsw_sp_fid*) ;} ;
struct mlxsw_sp_fid_family {TYPE_1__* mlxsw_sp; int flood_tables; struct mlxsw_sp_fid_ops* ops; } ;
struct mlxsw_sp_fid {struct mlxsw_sp_fid_family* fid_family; } ;
typedef enum mlxsw_sp_flood_type { ____Placeholder_mlxsw_sp_flood_type } mlxsw_sp_flood_type ;
struct TYPE_2__ {int core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int ,int ,int ,int,int ,int) ;
 int FUNC_5 (int ,int ,char*) ;
 struct mlxsw_sp_flood_table* FUNC_6 (struct mlxsw_sp_fid*,int) ;
 int VAR_5 ;
 int FUNC_7 (struct mlxsw_sp_fid*) ;

int FUNC_8(struct mlxsw_sp_fid *VAR_6,
      enum mlxsw_sp_flood_type VAR_7, u8 VAR_8,
      bool VAR_9)
{
 struct mlxsw_sp_fid_family *VAR_10 = VAR_6->fid_family;
 const struct mlxsw_sp_fid_ops *VAR_11 = VAR_10->ops;
 const struct mlxsw_sp_flood_table *VAR_12;
 char *VAR_13;
 int VAR_14;

 if (FUNC_1(!VAR_10->flood_tables || !VAR_11->flood_index))
  return -VAR_0;

 VAR_12 = FUNC_6(VAR_6, VAR_7);
 if (!VAR_12)
  return -VAR_2;

 VAR_13 = FUNC_3(VAR_4, VAR_3);
 if (!VAR_13)
  return -VAR_1;

 FUNC_4(VAR_13, VAR_12->table_index,
       VAR_11->flood_index(VAR_6), VAR_12->table_type, 1,
       VAR_8, VAR_9);
 VAR_14 = FUNC_5(VAR_10->mlxsw_sp->core, FUNC_0(VAR_5),
         VAR_13);
 FUNC_2(VAR_13);
 return VAR_14;
}
