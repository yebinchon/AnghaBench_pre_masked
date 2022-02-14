
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
struct TYPE_6__ {scalar_t__ notifier_call; } ;
struct mlx5e_tc_table {int t_lock; int * t; int ht; int hairpin_tbl_lock; TYPE_1__ mod_hdr; TYPE_3__ netdevice_nb; } ;
struct TYPE_5__ {struct mlx5e_tc_table tc; } ;
struct mlx5e_priv {TYPE_2__ fs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*) ;

void FUNC_5(struct mlx5e_priv *VAR_0)
{
 struct mlx5e_tc_table *VAR_1 = &VAR_0->fs.tc;

 if (VAR_1->netdevice_nb.notifier_call)
  FUNC_4(&VAR_1->netdevice_nb);

 FUNC_2(&VAR_1->mod_hdr.lock);
 FUNC_2(&VAR_1->hairpin_tbl_lock);

 FUNC_3(&VAR_1->ht);

 if (!FUNC_0(VAR_1->t)) {
  FUNC_1(VAR_1->t);
  VAR_1->t = ((void*)0);
 }
 FUNC_2(&VAR_1->t_lock);
}
