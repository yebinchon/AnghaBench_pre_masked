
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qpn_to_netdev {int hlist; } ;
struct net_device {int dummy; } ;
struct mlx5i_priv {struct mlx5i_pkey_qpn_ht* qpn_htbl; } ;
struct mlx5i_pkey_qpn_ht {int ht_lock; int buckets; } ;
struct mlx5e_priv {int mdev; struct mlx5i_priv* ppriv; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct qpn_to_netdev*) ;
 int FUNC_2 (int ,char*) ;
 struct mlx5e_priv* FUNC_3 (struct net_device*) ;
 struct qpn_to_netdev* FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct net_device *VAR_1, u32 VAR_2)
{
 struct mlx5e_priv *VAR_3 = FUNC_3(VAR_1);
 struct mlx5i_priv *VAR_4 = VAR_3->ppriv;
 struct mlx5i_pkey_qpn_ht *VAR_5 = VAR_4->qpn_htbl;
 struct qpn_to_netdev *VAR_6;

 VAR_6 = FUNC_4(VAR_5->buckets, VAR_2);
 if (!VAR_6) {
  FUNC_2(VAR_3->mdev, "QPN to netdev delete from HT failed\n");
  return -VAR_0;
 }

 FUNC_5(&VAR_5->ht_lock);
 FUNC_0(&VAR_6->hlist);
 FUNC_6(&VAR_5->ht_lock);
 FUNC_1(VAR_6);

 return 0;
}
