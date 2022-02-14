
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_flow_table {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_3__ {int children; } ;
struct fs_prio {TYPE_1__ node; } ;
struct TYPE_4__ {int modify_root; } ;


 scalar_t__ FUNC_0 (struct mlx5_core_dev*,int ) ;
 int FUNC_1 (struct mlx5_core_dev*,struct mlx5_flow_table*,struct mlx5_flow_table*) ;
 int FUNC_2 (struct mlx5_core_dev*,struct mlx5_flow_table*,struct fs_prio*) ;
 struct mlx5_flow_table* FUNC_3 (struct fs_prio*) ;
 TYPE_2__ VAR_0 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct mlx5_flow_table*,struct fs_prio*) ;

__attribute__((used)) static int FUNC_6(struct mlx5_core_dev *VAR_1, struct mlx5_flow_table *VAR_2,
         struct fs_prio *VAR_3)
{
 struct mlx5_flow_table *VAR_4;
 int VAR_5 = 0;



 if (FUNC_4(&VAR_3->node.children)) {
  VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3);
  if (VAR_5)
   return VAR_5;

  VAR_4 = FUNC_3(VAR_3);
  VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_4);
  if (VAR_5)
   return VAR_5;
 }

 if (FUNC_0(VAR_1,
          VAR_0.modify_root))
  VAR_5 = FUNC_5(VAR_2, VAR_3);
 return VAR_5;
}
