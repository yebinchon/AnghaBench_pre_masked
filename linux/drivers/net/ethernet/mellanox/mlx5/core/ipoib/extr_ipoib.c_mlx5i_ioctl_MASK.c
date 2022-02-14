
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx5e_priv {int dummy; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct mlx5e_priv*,struct ifreq*) ;
 int FUNC_1 (struct mlx5e_priv*,struct ifreq*) ;
 struct mlx5e_priv* FUNC_2 (struct net_device*) ;

int FUNC_3(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 struct mlx5e_priv *VAR_4 = FUNC_2(VAR_1);

 switch (VAR_3) {
 case 128:
  return FUNC_1(VAR_4, VAR_2);
 case 129:
  return FUNC_0(VAR_4, VAR_2);
 default:
  return -VAR_0;
 }
}
