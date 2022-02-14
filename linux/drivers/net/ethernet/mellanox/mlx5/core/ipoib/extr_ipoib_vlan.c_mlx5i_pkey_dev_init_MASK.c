
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {TYPE_1__* netdev_ops; } ;
struct mlx5i_priv {int qpn_htbl; } ;
struct mlx5e_priv {int mdev; struct mlx5i_priv* ppriv; } ;
struct TYPE_2__ {int (* ndo_get_iflink ) (struct net_device*) ;} ;


 int VAR_0 ;
 struct net_device* FUNC_0 (int ,int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct net_device*) ;
 struct mlx5e_priv* FUNC_5 (struct net_device*) ;
 struct mlx5i_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_1)
{
 struct mlx5e_priv *VAR_2 = FUNC_5(VAR_1);
 struct mlx5i_priv *VAR_3, *VAR_4;
 struct net_device *VAR_5;
 int VAR_6;

 VAR_3 = VAR_2->ppriv;


 VAR_6 = VAR_1->netdev_ops->ndo_get_iflink(VAR_1);
 VAR_5 = FUNC_0(FUNC_1(VAR_1), VAR_6);
 if (!VAR_5) {
  FUNC_3(VAR_2->mdev, "failed to get parent device\n");
  return -VAR_0;
 }

 VAR_4 = FUNC_6(VAR_5);
 VAR_3->qpn_htbl = VAR_4->qpn_htbl;
 FUNC_2(VAR_5);

 return FUNC_4(VAR_1);
}
