
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_tun_entropy {int dummy; } ;
struct mlx5_rep_uplink_priv {struct mlx5_tun_entropy tun_entropy; } ;
struct mlx5e_rep_priv {struct mlx5_rep_uplink_priv uplink_priv; } ;
struct mlx5e_priv {struct mlx5e_rep_priv* ppriv; } ;
struct mlx5e_encap_entry {int reformat_type; TYPE_1__* nhe; int encap_list; } ;
struct TYPE_2__ {int encap_list_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx5_tun_entropy*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct mlx5e_priv *VAR_0,
      struct mlx5e_encap_entry *VAR_1)
{
 struct mlx5e_rep_priv *VAR_2 = VAR_0->ppriv;
 struct mlx5_rep_uplink_priv *VAR_3 = &VAR_2->uplink_priv;
 struct mlx5_tun_entropy *VAR_4 = &VAR_3->tun_entropy;

 if (!VAR_1->nhe)
  return;

 FUNC_3(&VAR_1->nhe->encap_list_lock);
 FUNC_0(&VAR_1->encap_list);
 FUNC_4(&VAR_1->nhe->encap_list_lock);

 FUNC_2(VAR_1->nhe);
 VAR_1->nhe = ((void*)0);
 FUNC_1(VAR_4, VAR_1->reformat_type);
}
