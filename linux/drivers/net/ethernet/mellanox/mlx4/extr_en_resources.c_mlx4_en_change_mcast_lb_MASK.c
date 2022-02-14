
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_update_qp_params {int flags; } ;
struct mlx4_qp {int qpn; } ;
struct mlx4_en_priv {TYPE_1__* mdev; } ;
typedef int qp_params ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_update_qp_params*,int ,int) ;
 int FUNC_1 (int ,int ,int ,struct mlx4_update_qp_params*) ;

int FUNC_2(struct mlx4_en_priv *VAR_2, struct mlx4_qp *VAR_3,
       int VAR_4)
{
 int VAR_5;
 struct mlx4_update_qp_params VAR_6;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 if (!VAR_4)
  VAR_6.flags = VAR_1;

 VAR_5 = FUNC_1(VAR_2->mdev->dev, VAR_3->qpn,
        VAR_0,
        &VAR_6);

 return VAR_5;
}
