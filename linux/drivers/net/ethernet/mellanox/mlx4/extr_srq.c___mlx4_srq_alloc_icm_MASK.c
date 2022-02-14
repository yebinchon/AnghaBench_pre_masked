
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_srq_table {int bitmap; int table; int cmpt_table; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_2__ {struct mlx4_srq_table srq_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int ) ;
 TYPE_1__* FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*,int *,int) ;
 int FUNC_4 (struct mlx4_dev*,int *,int) ;

int FUNC_5(struct mlx4_dev *VAR_2, int *VAR_3)
{
 struct mlx4_srq_table *VAR_4 = &FUNC_2(VAR_2)->srq_table;
 int VAR_5;


 *VAR_3 = FUNC_0(&VAR_4->bitmap);
 if (*VAR_3 == -1)
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_2, &VAR_4->table, *VAR_3);
 if (VAR_5)
  goto err_out;

 VAR_5 = FUNC_3(VAR_2, &VAR_4->cmpt_table, *VAR_3);
 if (VAR_5)
  goto err_put;
 return 0;

err_put:
 FUNC_4(VAR_2, &VAR_4->table, *VAR_3);

err_out:
 FUNC_1(&VAR_4->bitmap, *VAR_3, VAR_1);
 return VAR_5;
}
