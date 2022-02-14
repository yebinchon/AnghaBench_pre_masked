
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlx5e_tc_flow {TYPE_3__* encaps; } ;
struct mlx5e_priv {TYPE_2__* mdev; } ;
struct mlx5e_encap_entry {int encap_hlist; int refcnt; } ;
struct TYPE_8__ {int encap_tbl_lock; } ;
struct mlx5_eswitch {TYPE_4__ offloads; } ;
struct TYPE_7__ {struct mlx5e_encap_entry* e; int list; } ;
struct TYPE_5__ {struct mlx5_eswitch* eswitch; } ;
struct TYPE_6__ {TYPE_1__ priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlx5e_priv*,struct mlx5e_encap_entry*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct mlx5e_priv *VAR_0,
          struct mlx5e_tc_flow *VAR_1, int VAR_2)
{
 struct mlx5e_encap_entry *VAR_3 = VAR_1->encaps[VAR_2].e;
 struct mlx5_eswitch *VAR_4 = VAR_0->mdev->priv.eswitch;


 if (!VAR_3)
  return;

 FUNC_3(&VAR_4->offloads.encap_tbl_lock);
 FUNC_1(&VAR_1->encaps[VAR_2].list);
 VAR_1->encaps[VAR_2].e = ((void*)0);
 if (!FUNC_5(&VAR_3->refcnt)) {
  FUNC_4(&VAR_4->offloads.encap_tbl_lock);
  return;
 }
 FUNC_0(&VAR_3->encap_hlist);
 FUNC_4(&VAR_4->offloads.encap_tbl_lock);

 FUNC_2(VAR_0, VAR_3);
}
