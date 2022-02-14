
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct mlx5_flow_table {TYPE_1__ node; } ;
struct mlx5_core_dev {int dummy; } ;
struct fs_prio {int dummy; } ;


 int FUNC_0 (struct mlx5_core_dev*,struct fs_prio*,struct mlx5_flow_table*) ;
 struct mlx5_flow_table* FUNC_1 (struct fs_prio*) ;
 int FUNC_2 (struct fs_prio*,int ) ;

__attribute__((used)) static int FUNC_3(struct mlx5_core_dev *VAR_0,
       struct mlx5_flow_table *VAR_1,
       struct fs_prio *VAR_2)
{
 struct mlx5_flow_table *VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3) {
  struct fs_prio *VAR_4;

  FUNC_2(VAR_4, VAR_3->node.parent);
  return FUNC_0(VAR_0, VAR_4, VAR_1);
 }
 return 0;
}
