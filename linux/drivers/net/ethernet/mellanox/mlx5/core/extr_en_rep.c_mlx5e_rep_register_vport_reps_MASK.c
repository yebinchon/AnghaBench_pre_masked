
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_eswitch {int dummy; } ;
struct TYPE_2__ {struct mlx5_eswitch* eswitch; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_eswitch*,int *,int ) ;
 int VAR_1 ;

void FUNC_1(struct mlx5_core_dev *VAR_2)
{
 struct mlx5_eswitch *VAR_3 = VAR_2->priv.eswitch;

 FUNC_0(VAR_3, &VAR_1, VAR_0);
}
