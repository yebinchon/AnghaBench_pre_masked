
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5e_rep_priv {int vport_rx_rule; } ;
struct TYPE_2__ {int ttc; } ;
struct mlx5e_priv {int drop_rq; int indir_rqt; int direct_tir; TYPE_1__ fs; struct mlx5e_rep_priv* ppriv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlx5e_priv*,int ) ;
 int FUNC_3 (struct mlx5e_priv*,int ) ;
 int FUNC_4 (struct mlx5e_priv*,int) ;
 int FUNC_5 (struct mlx5e_priv*,int *) ;
 int FUNC_6 (struct mlx5e_priv*,int *) ;

__attribute__((used)) static void FUNC_7(struct mlx5e_priv *VAR_0)
{
 struct mlx5e_rep_priv *VAR_1 = VAR_0->ppriv;

 FUNC_0(VAR_1->vport_rx_rule);
 FUNC_6(VAR_0, &VAR_0->fs.ttc);
 FUNC_3(VAR_0, VAR_0->direct_tir);
 FUNC_4(VAR_0, 0);
 FUNC_2(VAR_0, VAR_0->direct_tir);
 FUNC_5(VAR_0, &VAR_0->indir_rqt);
 FUNC_1(&VAR_0->drop_rq);
}
