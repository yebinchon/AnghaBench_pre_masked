
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_flow_table {int dummy; } ;
struct mlx5_flow_namespace {int dummy; } ;
struct TYPE_3__ {struct mlx5_flow_table* vepa_fdb; } ;
struct TYPE_4__ {TYPE_1__ legacy; } ;
struct mlx5_eswitch {TYPE_2__ fdb_table; struct mlx5_core_dev* dev; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx5_flow_table*) ;
 int VAR_1 ;
 int FUNC_1 (struct mlx5_flow_table*) ;
 int FUNC_2 (struct mlx5_core_dev*,char*,...) ;
 struct mlx5_flow_table* FUNC_3 (struct mlx5_flow_namespace*,int ,int,int,int ,int ) ;
 struct mlx5_flow_namespace* FUNC_4 (struct mlx5_core_dev*,int ) ;

__attribute__((used)) static int FUNC_5(struct mlx5_eswitch *VAR_2)
{
 struct mlx5_core_dev *VAR_3 = VAR_2->dev;
 struct mlx5_flow_namespace *VAR_4;
 struct mlx5_flow_table *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_4(VAR_3, 0);
 if (!VAR_4) {
  FUNC_2(VAR_3, "Failed to get FDB flow namespace\n");
  return -VAR_0;
 }


 VAR_5 = FUNC_3(VAR_4, VAR_1,
        2, 2, 0, 0);
 if (FUNC_0(VAR_5)) {
  VAR_6 = FUNC_1(VAR_5);
  FUNC_2(VAR_3, "Failed to create VEPA FDB err %d\n", VAR_6);
  return VAR_6;
 }
 VAR_2->fdb_table.legacy.vepa_fdb = VAR_5;

 return 0;
}
