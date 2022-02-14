
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udp_tunnel_info {scalar_t__ type; int port; } ;
struct net_device {int dummy; } ;
struct mlx5e_priv {TYPE_1__* mdev; } ;
struct TYPE_2__ {int vxlan; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlx5e_priv*,int ,int) ;
 struct mlx5e_priv* FUNC_3 (struct net_device*) ;

void FUNC_4(struct net_device *VAR_1, struct udp_tunnel_info *VAR_2)
{
 struct mlx5e_priv *VAR_3 = FUNC_3(VAR_1);

 if (VAR_2->type != VAR_0)
  return;

 if (!FUNC_1(VAR_3->mdev->vxlan))
  return;

 FUNC_2(VAR_3, FUNC_0(VAR_2->port), 1);
}
