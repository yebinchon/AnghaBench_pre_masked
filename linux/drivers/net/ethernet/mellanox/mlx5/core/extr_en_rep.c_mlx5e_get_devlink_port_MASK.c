
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct devlink_port {int dummy; } ;
struct mlx5e_rep_priv {struct devlink_port dl_port; } ;
struct mlx5e_priv {struct mlx5e_rep_priv* ppriv; } ;


 struct mlx5e_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static struct devlink_port *FUNC_1(struct net_device *VAR_0)
{
 struct mlx5e_priv *VAR_1 = FUNC_0(VAR_0);
 struct mlx5e_rep_priv *VAR_2 = VAR_1->ppriv;

 return &VAR_2->dl_port;
}
