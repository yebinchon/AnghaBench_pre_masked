
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx5i_priv {struct mlx5i_pkey_qpn_ht* qpn_htbl; } ;
struct mlx5i_pkey_qpn_ht {int ht_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlx5i_pkey_qpn_ht* FUNC_0 (int,int ) ;
 struct mlx5i_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct net_device *VAR_2)
{
 struct mlx5i_priv *VAR_3 = FUNC_1(VAR_2);
 struct mlx5i_pkey_qpn_ht *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_3->qpn_htbl = VAR_4;
 FUNC_2(&VAR_4->ht_lock);

 return 0;
}
