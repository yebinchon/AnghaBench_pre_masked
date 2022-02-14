
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct qpn_to_netdev {int hlist; int underlay_qpn; struct net_device* netdev; } ;
struct net_device {int dummy; } ;
struct mlx5i_priv {struct mlx5i_pkey_qpn_ht* qpn_htbl; } ;
struct mlx5i_pkey_qpn_ht {int ht_lock; int * buckets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *) ;
 struct qpn_to_netdev* FUNC_2 (int,int ) ;
 struct mlx5i_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct net_device *VAR_3, u32 VAR_4)
{
 struct mlx5i_priv *VAR_5 = FUNC_3(VAR_3);
 struct mlx5i_pkey_qpn_ht *VAR_6 = VAR_5->qpn_htbl;
 u8 VAR_7 = FUNC_0(VAR_4, VAR_2);
 struct qpn_to_netdev *VAR_8;

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->netdev = VAR_3;
 VAR_8->underlay_qpn = VAR_4;
 FUNC_4(&VAR_6->ht_lock);
 FUNC_1(&VAR_8->hlist, &VAR_6->buckets[VAR_7]);
 FUNC_5(&VAR_6->ht_lock);

 return 0;
}
