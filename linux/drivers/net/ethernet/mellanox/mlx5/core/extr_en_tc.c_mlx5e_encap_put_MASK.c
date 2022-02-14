
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5e_priv {TYPE_2__* mdev; } ;
struct mlx5e_encap_entry {int encap_hlist; int refcnt; } ;
struct TYPE_6__ {int encap_tbl_lock; } ;
struct mlx5_eswitch {TYPE_3__ offloads; } ;
struct TYPE_4__ {struct mlx5_eswitch* eswitch; } ;
struct TYPE_5__ {TYPE_1__ priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx5e_priv*,struct mlx5e_encap_entry*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

void FUNC_4(struct mlx5e_priv *VAR_0, struct mlx5e_encap_entry *VAR_1)
{
 struct mlx5_eswitch *VAR_2 = VAR_0->mdev->priv.eswitch;

 if (!FUNC_3(&VAR_1->refcnt, &VAR_2->offloads.encap_tbl_lock))
  return;
 FUNC_0(&VAR_1->encap_hlist);
 FUNC_2(&VAR_2->offloads.encap_tbl_lock);

 FUNC_1(VAR_0, VAR_1);
}
