
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int wq; int rules; int arfs_lock; } ;
struct TYPE_6__ {TYPE_2__ arfs; } ;
struct mlx5e_priv {TYPE_3__ fs; TYPE_1__* netdev; } ;
struct TYPE_4__ {int hw_features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (struct mlx5e_priv*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct mlx5e_priv*) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct mlx5e_priv *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5;

 if (!(VAR_3->netdev->hw_features & VAR_2))
  return 0;

 FUNC_4(&VAR_3->fs.arfs.arfs_lock);
 FUNC_0(&VAR_3->fs.arfs.rules);
 VAR_3->fs.arfs.wq = FUNC_2("mlx5e_arfs");
 if (!VAR_3->fs.arfs.wq)
  return -VAR_1;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = FUNC_1(VAR_3, VAR_5);
  if (VAR_4)
   goto err;
 }
 return 0;
err:
 FUNC_3(VAR_3);
 return VAR_4;
}
