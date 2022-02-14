
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5dr_table {int dummy; } ;
struct TYPE_5__ {struct mlx5dr_table* dr_table; } ;
struct mlx5_flow_table {TYPE_2__ fs_dr_table; int id; int level; int flags; } ;
struct TYPE_4__ {int dr_domain; } ;
struct mlx5_flow_root_namespace {int dev; TYPE_1__ fs_dr_domain; } ;
struct TYPE_6__ {int (* create_flow_table ) (struct mlx5_flow_root_namespace*,struct mlx5_flow_table*,unsigned int,struct mlx5_flow_table*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 () ;
 struct mlx5dr_table* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct mlx5dr_table*) ;
 int FUNC_5 (struct mlx5dr_table*) ;
 int FUNC_6 (struct mlx5_flow_root_namespace*,struct mlx5_flow_table*,struct mlx5_flow_table*) ;
 int FUNC_7 (struct mlx5_flow_root_namespace*,struct mlx5_flow_table*,unsigned int,struct mlx5_flow_table*) ;

__attribute__((used)) static int FUNC_8(struct mlx5_flow_root_namespace *VAR_1,
      struct mlx5_flow_table *VAR_2,
      unsigned int VAR_3,
      struct mlx5_flow_table *VAR_4)
{
 struct mlx5dr_table *VAR_5;
 int VAR_6;

 if (FUNC_1(VAR_2->flags))
  return FUNC_2()->create_flow_table(VAR_1, VAR_2,
            VAR_3,
            VAR_4);

 VAR_5 = FUNC_3(VAR_1->fs_dr_domain.dr_domain,
      VAR_2->level);
 if (!VAR_5) {
  FUNC_0(VAR_1->dev, "Failed creating dr flow_table\n");
  return -VAR_0;
 }

 VAR_2->fs_dr_table.dr_table = VAR_5;
 VAR_2->id = FUNC_5(VAR_5);

 if (VAR_4) {
  VAR_6 = FUNC_6(VAR_1, VAR_2, VAR_4);
  if (VAR_6) {
   FUNC_4(VAR_5);
   VAR_2->fs_dr_table.dr_table = ((void*)0);
   return VAR_6;
  }
 }

 return 0;
}
