
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int pool_lock; } ;
struct TYPE_5__ {TYPE_1__* eq; } ;
struct mlx4_priv {TYPE_3__ msix_ctl; TYPE_2__ eq_table; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_4__ {int ref_count; } ;


 int FUNC_0 (int) ;
 struct mlx4_priv* FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct mlx4_dev *VAR_0, int VAR_1)
{
 struct mlx4_priv *VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = FUNC_0(VAR_1);

 FUNC_2(&VAR_2->msix_ctl.pool_lock);
 VAR_2->eq_table.eq[VAR_3].ref_count--;




 FUNC_3(&VAR_2->msix_ctl.pool_lock);
}
