
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_5__* arfs_tables; int wq; } ;
struct TYPE_8__ {TYPE_2__ arfs; } ;
struct mlx5e_priv {TYPE_3__ fs; TYPE_1__* netdev; } ;
struct TYPE_9__ {int t; } ;
struct TYPE_10__ {TYPE_4__ ft; } ;
struct TYPE_6__ {int hw_features; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct mlx5e_priv*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct mlx5e_priv *VAR_2)
{
 int VAR_3;

 if (!(VAR_2->netdev->hw_features & VAR_1))
  return;

 FUNC_1(VAR_2);
 FUNC_3(VAR_2->fs.arfs.wq);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (!FUNC_0(VAR_2->fs.arfs.arfs_tables[VAR_3].ft.t))
   FUNC_2(&VAR_2->fs.arfs.arfs_tables[VAR_3]);
 }
}
