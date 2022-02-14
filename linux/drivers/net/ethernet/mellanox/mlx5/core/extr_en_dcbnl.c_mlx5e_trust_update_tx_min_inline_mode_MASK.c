
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ trust_state; } ;
struct mlx5e_priv {TYPE_1__ dcbx_dp; int mdev; } ;
struct mlx5e_params {scalar_t__ tx_min_inline_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_1(struct mlx5e_priv *VAR_3,
        struct mlx5e_params *VAR_4)
{
 FUNC_0(VAR_3->mdev, &VAR_4->tx_min_inline_mode);
 if (VAR_3->dcbx_dp.trust_state == VAR_2 &&
     VAR_4->tx_min_inline_mode == VAR_1)
  VAR_4->tx_min_inline_mode = VAR_0;
}
