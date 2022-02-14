
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ttc_params {int dummy; } ;
struct mlx5e_priv {int netdev; } ;
struct TYPE_5__ {TYPE_1__* t; } ;
struct TYPE_6__ {TYPE_2__ ft; } ;
struct mlx5e_hairpin {int indir_rqt; TYPE_3__ ttc; int num_channels; struct mlx5e_priv* func_priv; } ;
struct TYPE_4__ {int id; } ;


 int FUNC_0 (struct mlx5e_priv*,struct ttc_params*,TYPE_3__*) ;
 int FUNC_1 (struct mlx5e_priv*,int *) ;
 int FUNC_2 (struct mlx5e_hairpin*) ;
 int FUNC_3 (struct mlx5e_hairpin*) ;
 int FUNC_4 (struct mlx5e_hairpin*) ;
 int FUNC_5 (struct mlx5e_hairpin*,struct ttc_params*) ;
 int FUNC_6 (int ,char*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct mlx5e_hairpin *VAR_0)
{
 struct mlx5e_priv *VAR_1 = VAR_0->func_priv;
 struct ttc_params VAR_2;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_3(VAR_0);
 if (VAR_3)
  goto err_create_indirect_tirs;

 FUNC_5(VAR_0, &VAR_2);
 VAR_3 = FUNC_0(VAR_1, &VAR_2, &VAR_0->ttc);
 if (VAR_3)
  goto err_create_ttc_table;

 FUNC_6(VAR_1->netdev, "add hairpin: using %d channels rss ttc table id %x\n",
     VAR_0->num_channels, VAR_0->ttc.ft.t->id);

 return 0;

err_create_ttc_table:
 FUNC_4(VAR_0);
err_create_indirect_tirs:
 FUNC_1(VAR_1, &VAR_0->indir_rqt);

 return VAR_3;
}
