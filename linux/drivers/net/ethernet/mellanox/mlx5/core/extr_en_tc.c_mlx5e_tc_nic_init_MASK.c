
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * notifier_call; } ;
struct TYPE_4__ {int hlist; int lock; } ;
struct mlx5e_tc_table {TYPE_3__ netdevice_nb; int ht; int hairpin_tbl; int hairpin_tbl_lock; TYPE_1__ mod_hdr; int t_lock; } ;
struct TYPE_5__ {struct mlx5e_tc_table tc; } ;
struct mlx5e_priv {int mdev; TYPE_2__ fs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int * VAR_0 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *,int *) ;
 int VAR_1 ;

int FUNC_5(struct mlx5e_priv *VAR_2)
{
 struct mlx5e_tc_table *VAR_3 = &VAR_2->fs.tc;
 int VAR_4;

 FUNC_2(&VAR_3->t_lock);
 FUNC_2(&VAR_3->mod_hdr.lock);
 FUNC_0(VAR_3->mod_hdr.hlist);
 FUNC_2(&VAR_3->hairpin_tbl_lock);
 FUNC_0(VAR_3->hairpin_tbl);

 VAR_4 = FUNC_4(&VAR_3->ht, &VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_3->netdevice_nb.notifier_call = VAR_0;
 if (FUNC_3(&VAR_3->netdevice_nb)) {
  VAR_3->netdevice_nb.notifier_call = ((void*)0);
  FUNC_1(VAR_2->mdev, "Failed to register netdev notifier\n");
 }

 return VAR_4;
}
