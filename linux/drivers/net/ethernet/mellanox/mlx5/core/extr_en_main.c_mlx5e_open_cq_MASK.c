
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_cq_param {int dummy; } ;
struct mlx5e_cq {int mcq; } ;
struct mlx5e_channel {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
struct dim_cq_moder {int pkts; int usec; } ;


 scalar_t__ FUNC_0 (struct mlx5_core_dev*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct mlx5_core_dev*,int *,int ,int ) ;
 int FUNC_2 (struct mlx5e_channel*,struct mlx5e_cq_param*,struct mlx5e_cq*) ;
 int FUNC_3 (struct mlx5e_cq*,struct mlx5e_cq_param*) ;
 int FUNC_4 (struct mlx5e_cq*) ;

int FUNC_5(struct mlx5e_channel *VAR_1, struct dim_cq_moder VAR_2,
    struct mlx5e_cq_param *VAR_3, struct mlx5e_cq *VAR_4)
{
 struct mlx5_core_dev *VAR_5 = VAR_1->mdev;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_1, VAR_3, VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_4, VAR_3);
 if (VAR_6)
  goto err_free_cq;

 if (FUNC_0(VAR_5, VAR_0))
  FUNC_1(VAR_5, &VAR_4->mcq, VAR_2.usec, VAR_2.pkts);
 return 0;

err_free_cq:
 FUNC_4(VAR_4);

 return VAR_6;
}
