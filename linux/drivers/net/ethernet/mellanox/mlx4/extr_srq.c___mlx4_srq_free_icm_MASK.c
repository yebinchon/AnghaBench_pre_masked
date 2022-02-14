
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_srq_table {int bitmap; int table; int cmpt_table; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_2__ {struct mlx4_srq_table srq_table; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ) ;
 TYPE_1__* FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (struct mlx4_dev*,int *,int) ;

void FUNC_3(struct mlx4_dev *VAR_1, int VAR_2)
{
 struct mlx4_srq_table *VAR_3 = &FUNC_1(VAR_1)->srq_table;

 FUNC_2(VAR_1, &VAR_3->cmpt_table, VAR_2);
 FUNC_2(VAR_1, &VAR_3->table, VAR_2);
 FUNC_0(&VAR_3->bitmap, VAR_2, VAR_0);
}
