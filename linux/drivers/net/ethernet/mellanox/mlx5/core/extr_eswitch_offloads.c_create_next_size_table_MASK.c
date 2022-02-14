
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mlx5_flow_table {int dummy; } ;
struct mlx5_flow_namespace {int dummy; } ;
struct mlx5_eswitch {int dev; } ;


 int VAR_0 ;
 struct mlx5_flow_table* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct mlx5_flow_table*) ;
 scalar_t__ FUNC_2 (struct mlx5_flow_table*) ;
 int FUNC_3 (int ,char*,int,int ,int,int) ;
 int FUNC_4 (struct mlx5_eswitch*) ;
 struct mlx5_flow_table* FUNC_5 (struct mlx5_flow_namespace*,int ,int,int ,int,int ) ;
 int FUNC_6 (struct mlx5_eswitch*,int) ;

__attribute__((used)) static struct mlx5_flow_table *
FUNC_7(struct mlx5_eswitch *VAR_2,
         struct mlx5_flow_namespace *VAR_3,
         u16 VAR_4,
         int VAR_5,
         u32 VAR_6)
{
 struct mlx5_flow_table *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_4(VAR_2);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_5(VAR_3,
        VAR_4,
        VAR_8,
        VAR_1,
        VAR_5,
        VAR_6);
 if (FUNC_1(VAR_7)) {
  FUNC_3(VAR_2->dev, "Failed to create FDB Table err %d (table prio: %d, level: %d, size: %d)\n",
    (int)FUNC_2(VAR_7), VAR_4, VAR_5, VAR_8);
  FUNC_6(VAR_2, VAR_8);
 }

 return VAR_7;
}
