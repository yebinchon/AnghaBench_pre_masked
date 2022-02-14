
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int encap_lock; } ;
struct mlx5_tun_entropy {int dummy; } ;
struct mlx5_rep_uplink_priv {struct mlx5_tun_entropy tun_entropy; } ;
struct mlx5e_rep_priv {TYPE_1__ neigh_update; struct mlx5_rep_uplink_priv uplink_priv; } ;
struct mlx5e_priv {struct mlx5e_rep_priv* ppriv; } ;
struct mlx5e_neigh_hash_entry {int encap_list_lock; int encap_list; } ;
struct mlx5e_encap_entry {int encap_list; struct mlx5e_neigh_hash_entry* nhe; int reformat_type; int m_neigh; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct mlx5_tun_entropy*,int ) ;
 int FUNC_2 (struct mlx5_tun_entropy*,int ) ;
 int FUNC_3 (struct mlx5e_priv*,struct mlx5e_encap_entry*,struct mlx5e_neigh_hash_entry**) ;
 struct mlx5e_neigh_hash_entry* FUNC_4 (struct mlx5e_priv*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct mlx5e_priv *VAR_0,
     struct mlx5e_encap_entry *VAR_1)
{
 struct mlx5e_rep_priv *VAR_2 = VAR_0->ppriv;
 struct mlx5_rep_uplink_priv *VAR_3 = &VAR_2->uplink_priv;
 struct mlx5_tun_entropy *VAR_4 = &VAR_3->tun_entropy;
 struct mlx5e_neigh_hash_entry *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_4, VAR_1->reformat_type);
 if (VAR_6)
  return VAR_6;

 FUNC_5(&VAR_2->neigh_update.encap_lock);
 VAR_5 = FUNC_4(VAR_0, &VAR_1->m_neigh);
 if (!VAR_5) {
  VAR_6 = FUNC_3(VAR_0, VAR_1, &VAR_5);
  if (VAR_6) {
   FUNC_6(&VAR_2->neigh_update.encap_lock);
   FUNC_1(VAR_4,
            VAR_1->reformat_type);
   return VAR_6;
  }
 }

 VAR_1->nhe = VAR_5;
 FUNC_7(&VAR_5->encap_list_lock);
 FUNC_0(&VAR_1->encap_list, &VAR_5->encap_list);
 FUNC_8(&VAR_5->encap_list_lock);

 FUNC_6(&VAR_2->neigh_update.encap_lock);

 return 0;
}
