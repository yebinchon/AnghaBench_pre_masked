
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5e_rep_priv {TYPE_2__* rep; } ;
struct TYPE_3__ {int eswitch; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;
struct TYPE_4__ {scalar_t__ vport; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static bool
FUNC_1(const struct mlx5_core_dev *VAR_2,
     const struct mlx5e_rep_priv *VAR_3)
{
 return VAR_3->rep->vport == VAR_1 ||
        VAR_3->rep->vport == VAR_0 ||
        FUNC_0(VAR_2->priv.eswitch, VAR_3->rep->vport);
}
