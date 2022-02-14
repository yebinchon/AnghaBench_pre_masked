
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx5i_priv {int qpn_htbl; } ;


 int FUNC_0 (int ) ;
 struct mlx5i_priv* FUNC_1 (struct net_device*) ;

void FUNC_2(struct net_device *VAR_0)
{
 struct mlx5i_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->qpn_htbl);
}
