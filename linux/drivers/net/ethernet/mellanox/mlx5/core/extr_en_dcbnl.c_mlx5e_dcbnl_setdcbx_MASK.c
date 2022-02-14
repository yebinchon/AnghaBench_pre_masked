
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct mlx5e_dcbx {scalar_t__ mode; int cap; } ;
struct mlx5e_priv {int mdev; struct mlx5e_dcbx dcbx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,struct mlx5e_dcbx*) ;
 int FUNC_1 (struct mlx5e_priv*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct mlx5e_priv*) ;
 struct mlx5e_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static u8 FUNC_4(struct net_device *VAR_3, u8 VAR_4)
{
 struct mlx5e_priv *VAR_5 = FUNC_3(VAR_3);
 struct mlx5e_dcbx *VAR_6 = &VAR_5->dcbx;

 if (VAR_4 & VAR_1)
  return 1;

 if ((!VAR_4) && FUNC_0(VAR_5->mdev, VAR_6)) {
  if (VAR_6->mode == VAR_2)
   return 0;


  if (!FUNC_1(VAR_5, VAR_2)) {
   VAR_6->mode = VAR_2;
   VAR_6->cap &= ~VAR_0;
   return 0;
  }

  return 1;
 }

 if (!(VAR_4 & VAR_0))
  return 1;

 if (FUNC_2(FUNC_3(VAR_3)))
  return 1;

 VAR_6->cap = VAR_4;

 return 0;
}
