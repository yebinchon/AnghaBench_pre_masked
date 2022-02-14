
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mlx5e_xsk_param {int dummy; } ;
struct mlx5e_priv {struct mlx5_core_dev* mdev; } ;
struct TYPE_2__ {int cq_period_mode; } ;
struct mlx5e_params {int rq_wq_type; int log_rq_mtu_frames; TYPE_1__ rx_cq_moderation; } ;
struct mlx5e_cq_param {int cq_period_mode; void* cqc; } ;
struct mlx5_core_dev {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlx5e_params*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*,void*,int,int) ;

 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct mlx5e_priv*,struct mlx5e_cq_param*) ;
 int FUNC_3 (struct mlx5_core_dev*,struct mlx5e_params*,struct mlx5e_xsk_param*) ;
 int FUNC_4 (struct mlx5e_params*,struct mlx5e_xsk_param*) ;

void FUNC_5(struct mlx5e_priv *VAR_4,
        struct mlx5e_params *VAR_5,
        struct mlx5e_xsk_param *VAR_6,
        struct mlx5e_cq_param *VAR_7)
{
 struct mlx5_core_dev *VAR_8 = VAR_4->mdev;
 void *VAR_9 = VAR_7->cqc;
 u8 VAR_10;

 switch (VAR_5->rq_wq_type) {
 case 128:
  VAR_10 = FUNC_4(VAR_5, VAR_6) +
   FUNC_3(VAR_8, VAR_5, VAR_6);
  break;
 default:
  VAR_10 = VAR_5->log_rq_mtu_frames;
 }

 FUNC_1(VAR_9, VAR_9, VAR_10, VAR_10);
 if (FUNC_0(VAR_5, VAR_0)) {
  FUNC_1(VAR_9, VAR_9, VAR_3, VAR_1);
  FUNC_1(VAR_9, VAR_9, VAR_2, 1);
 }

 FUNC_2(VAR_4, VAR_7);
 VAR_7->cq_period_mode = VAR_5->rx_cq_moderation.cq_period_mode;
}
