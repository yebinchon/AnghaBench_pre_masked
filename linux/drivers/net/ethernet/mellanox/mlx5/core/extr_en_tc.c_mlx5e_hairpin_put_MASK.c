
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int hairpin_tbl_lock; } ;
struct TYPE_9__ {TYPE_4__ tc; } ;
struct mlx5e_priv {int netdev; TYPE_3__ fs; } ;
struct mlx5e_hairpin_entry {int flows; TYPE_5__* hp; int hairpin_hlist; int refcnt; } ;
struct TYPE_11__ {TYPE_2__* pair; } ;
struct TYPE_8__ {TYPE_1__* peer_mdev; } ;
struct TYPE_7__ {int device; } ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mlx5e_hairpin_entry*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (int *,int *) ;

__attribute__((used)) static void FUNC_10(struct mlx5e_priv *VAR_0,
         struct mlx5e_hairpin_entry *VAR_1)
{

 if (!FUNC_9(&VAR_1->refcnt, &VAR_0->fs.tc.hairpin_tbl_lock))
  return;
 FUNC_3(&VAR_1->hairpin_hlist);
 FUNC_7(&VAR_0->fs.tc.hairpin_tbl_lock);

 if (!FUNC_0(VAR_1->hp)) {
  FUNC_8(VAR_0->netdev, "del hairpin: peer %s\n",
      FUNC_2(VAR_1->hp->pair->peer_mdev->device));

  FUNC_6(VAR_1->hp);
 }

 FUNC_1(!FUNC_5(&VAR_1->flows));
 FUNC_4(VAR_1);
}
