
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5e_priv {int dummy; } ;
struct TYPE_2__ {int cq_period_mode; } ;
struct mlx5e_params {TYPE_1__ tx_cq_moderation; int log_sq_size; } ;
struct mlx5e_cq_param {int cq_period_mode; void* cqc; } ;


 int FUNC_0 (void*,void*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct mlx5e_priv*,struct mlx5e_cq_param*) ;

void FUNC_2(struct mlx5e_priv *VAR_1,
        struct mlx5e_params *VAR_2,
        struct mlx5e_cq_param *VAR_3)
{
 void *VAR_4 = VAR_3->cqc;

 FUNC_0(VAR_4, VAR_4, VAR_0, VAR_2->log_sq_size);

 FUNC_1(VAR_1, VAR_3);
 VAR_3->cq_period_mode = VAR_2->tx_cq_moderation.cq_period_mode;
}
