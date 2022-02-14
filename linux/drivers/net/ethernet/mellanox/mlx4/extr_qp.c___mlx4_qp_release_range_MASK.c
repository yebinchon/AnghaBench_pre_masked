
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx4_qp_table {int zones; } ;
struct mlx4_priv {struct mlx4_qp_table qp_table; } ;
struct mlx4_dev {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlx4_dev*,int ) ;
 struct mlx4_priv* FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (int ,int,int) ;

void FUNC_3(struct mlx4_dev *VAR_0, int VAR_1, int VAR_2)
{
 struct mlx4_priv *VAR_3 = FUNC_1(VAR_0);
 struct mlx4_qp_table *VAR_4 = &VAR_3->qp_table;

 if (FUNC_0(VAR_0, (u32) VAR_1))
  return;
 FUNC_2(VAR_4->zones, VAR_1, VAR_2);
}
