
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ttc_params {int * inner_ttc; int any_tt_tirn; } ;
struct TYPE_4__ {int inner_ttc; } ;
struct mlx5e_priv {TYPE_2__ fs; TYPE_1__* direct_tir; } ;
struct TYPE_3__ {int tirn; } ;



void FUNC_0(struct mlx5e_priv *VAR_0,
    struct ttc_params *VAR_1)
{
 VAR_1->any_tt_tirn = VAR_0->direct_tir[0].tirn;
 VAR_1->inner_ttc = &VAR_0->fs.inner_ttc;
}
