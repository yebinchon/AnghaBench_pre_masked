
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_hwq_resources {int db; int buf; int mtt; } ;
struct mlx4_dev {int dummy; } ;


 int FUNC_0 (struct mlx4_dev*,int,int *) ;
 int FUNC_1 (struct mlx4_dev*,int *) ;
 int FUNC_2 (struct mlx4_dev*,int *) ;

void FUNC_3(struct mlx4_dev *VAR_0, struct mlx4_hwq_resources *VAR_1,
         int VAR_2)
{
 FUNC_2(VAR_0, &VAR_1->mtt);
 FUNC_0(VAR_0, VAR_2, &VAR_1->buf);
 FUNC_1(VAR_0, &VAR_1->db);
}
