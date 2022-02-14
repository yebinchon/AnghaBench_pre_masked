
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct net_device {int dummy; } ;
struct mlx5e_cee_config {scalar_t__ pfc_enable; } ;
struct TYPE_2__ {struct mlx5e_cee_config cee_cfg; } ;
struct mlx5e_priv {TYPE_1__ dcbx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct mlx5e_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2, u8 VAR_3)
{
 struct mlx5e_priv *VAR_4 = FUNC_0(VAR_2);
 struct mlx5e_cee_config *VAR_5 = &VAR_4->dcbx.cee_cfg;

 if ((VAR_3 != VAR_1) && (VAR_3 != VAR_0))
  return;

 VAR_5->pfc_enable = VAR_3;
}
