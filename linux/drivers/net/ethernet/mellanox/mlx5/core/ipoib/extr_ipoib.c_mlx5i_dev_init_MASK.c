
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int* dev_addr; } ;
struct TYPE_2__ {int qpn; } ;
struct mlx5i_priv {TYPE_1__ qp; } ;
struct mlx5e_priv {struct mlx5i_priv* ppriv; } ;


 struct mlx5e_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int) ;

int FUNC_2(struct net_device *VAR_0)
{
 struct mlx5e_priv *VAR_1 = FUNC_0(VAR_0);
 struct mlx5i_priv *VAR_2 = VAR_1->ppriv;


 VAR_0->dev_addr[1] = (VAR_2->qp.qpn >> 16) & 0xff;
 VAR_0->dev_addr[2] = (VAR_2->qp.qpn >> 8) & 0xff;
 VAR_0->dev_addr[3] = (VAR_2->qp.qpn) & 0xff;


 FUNC_1(VAR_0 ,VAR_2->qp.qpn);

 return 0;
}
