
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_dcbx {scalar_t__ mode; int cap; int manual_buffer; int cable_len; } ;
struct mlx5e_priv {struct mlx5e_dcbx dcbx; int mdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,struct mlx5e_dcbx*) ;
 int FUNC_1 (struct mlx5e_priv*,scalar_t__*) ;
 int FUNC_2 (struct mlx5e_priv*) ;
 int FUNC_3 (struct mlx5e_priv*) ;
 struct mlx5e_dcbx* VAR_5 ;

void FUNC_4(struct mlx5e_priv *VAR_6)
{
 struct mlx5e_dcbx *VAR_7 = &VAR_6->dcbx;

 FUNC_3(VAR_6);

 if (!FUNC_0(VAR_6->mdev, VAR_5))
  return;

 if (FUNC_0(VAR_6->mdev, VAR_7))
  FUNC_1(VAR_6, &VAR_7->mode);

 VAR_6->dcbx.cap = VAR_1 |
    VAR_2;
 if (VAR_6->dcbx.mode == VAR_3)
  VAR_6->dcbx.cap |= VAR_0;

 VAR_6->dcbx.manual_buffer = 0;
 VAR_6->dcbx.cable_len = VAR_4;

 FUNC_2(VAR_6);
}
