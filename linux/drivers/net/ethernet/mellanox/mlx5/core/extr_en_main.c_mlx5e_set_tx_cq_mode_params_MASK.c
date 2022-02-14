
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ cq_period_mode; } ;
struct mlx5e_params {TYPE_1__ tx_cq_moderation; scalar_t__ tx_dim_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5e_params*,int ,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_1__ FUNC_2 (int ) ;
 TYPE_1__ FUNC_3 (int ) ;

void FUNC_4(struct mlx5e_params *VAR_2, u8 VAR_3)
{
 if (VAR_2->tx_dim_enabled) {
  u8 VAR_4 = FUNC_1(VAR_3);

  VAR_2->tx_cq_moderation = FUNC_3(VAR_4);
 } else {
  VAR_2->tx_cq_moderation = FUNC_2(VAR_3);
 }

 FUNC_0(VAR_2, VAR_0,
   VAR_2->tx_cq_moderation.cq_period_mode ==
    VAR_1);
}
