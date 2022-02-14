
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx4_mr_table {int dmpt_table; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_2__ {struct mlx4_mr_table mr_table; } ;


 TYPE_1__* FUNC_0 (struct mlx4_dev*) ;
 int FUNC_1 (struct mlx4_dev*,int *,int ) ;

void FUNC_2(struct mlx4_dev *VAR_0, u32 VAR_1)
{
 struct mlx4_mr_table *VAR_2 = &FUNC_0(VAR_0)->mr_table;

 FUNC_1(VAR_0, &VAR_2->dmpt_table, VAR_1);
}
