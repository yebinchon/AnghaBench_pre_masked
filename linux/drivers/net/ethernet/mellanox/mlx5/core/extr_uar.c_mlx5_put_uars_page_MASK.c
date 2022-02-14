
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5_uars_page {int ref_count; } ;
struct TYPE_4__ {int lock; } ;
struct TYPE_5__ {TYPE_1__ reg_head; } ;
struct TYPE_6__ {TYPE_2__ bfregs; } ;
struct mlx5_core_dev {TYPE_3__ priv; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

void FUNC_3(struct mlx5_core_dev *VAR_1, struct mlx5_uars_page *VAR_2)
{
 FUNC_1(&VAR_1->priv.bfregs.reg_head.lock);
 FUNC_0(&VAR_2->ref_count, VAR_0);
 FUNC_2(&VAR_1->priv.bfregs.reg_head.lock);
}
