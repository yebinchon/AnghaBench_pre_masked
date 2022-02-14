
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_rq_param {int dummy; } ;
struct mlx5e_cq {int dummy; } ;
struct mlx5e_rq {struct mlx5e_cq cq; } ;
struct mlx5e_priv {struct mlx5_core_dev* mdev; } ;
struct mlx5e_cq_param {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_1 (struct mlx5_core_dev*,struct mlx5e_cq*,struct mlx5e_cq_param*) ;
 int FUNC_2 (struct mlx5_core_dev*,struct mlx5e_rq*,struct mlx5e_rq_param*) ;
 int FUNC_3 (struct mlx5e_priv*,struct mlx5e_rq_param*) ;
 int FUNC_4 (struct mlx5e_cq*,struct mlx5e_cq_param*) ;
 int FUNC_5 (struct mlx5e_rq*,struct mlx5e_rq_param*) ;
 int FUNC_6 (struct mlx5e_cq*) ;
 int FUNC_7 (struct mlx5e_cq*) ;
 int FUNC_8 (struct mlx5e_rq*) ;
 int FUNC_9 (struct mlx5e_rq*,int ,int ) ;

int FUNC_10(struct mlx5e_priv *VAR_2,
         struct mlx5e_rq *VAR_3)
{
 struct mlx5_core_dev *VAR_4 = VAR_2->mdev;
 struct mlx5e_cq_param VAR_5 = {};
 struct mlx5e_rq_param VAR_6 = {};
 struct mlx5e_cq *VAR_7 = &VAR_3->cq;
 int VAR_8;

 FUNC_3(VAR_2, &VAR_6);

 VAR_8 = FUNC_1(VAR_4, VAR_7, &VAR_5);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_4(VAR_7, &VAR_5);
 if (VAR_8)
  goto err_free_cq;

 VAR_8 = FUNC_2(VAR_4, VAR_3, &VAR_6);
 if (VAR_8)
  goto err_destroy_cq;

 VAR_8 = FUNC_5(VAR_3, &VAR_6);
 if (VAR_8)
  goto err_free_rq;

 VAR_8 = FUNC_9(VAR_3, VAR_1, VAR_0);
 if (VAR_8)
  FUNC_0(VAR_2->mdev, "modify_rq_state failed, rx_if_down_packets won't be counted %d\n", VAR_8);

 return 0;

err_free_rq:
 FUNC_8(VAR_3);

err_destroy_cq:
 FUNC_6(VAR_7);

err_free_cq:
 FUNC_7(VAR_7);

 return VAR_8;
}
