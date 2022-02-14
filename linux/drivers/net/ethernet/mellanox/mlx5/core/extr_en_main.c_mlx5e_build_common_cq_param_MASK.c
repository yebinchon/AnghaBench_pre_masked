
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5e_priv {TYPE_3__* mdev; } ;
struct mlx5e_cq_param {void* cqc; } ;
struct TYPE_5__ {TYPE_1__* uar; } ;
struct TYPE_6__ {TYPE_2__ priv; } ;
struct TYPE_4__ {int index; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (void*,void*,int ,int ) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct mlx5e_priv *VAR_4,
     struct mlx5e_cq_param *VAR_5)
{
 void *VAR_6 = VAR_5->cqc;

 FUNC_1(VAR_6, VAR_6, VAR_3, VAR_4->mdev->priv.uar->index);
 if (FUNC_0(VAR_4->mdev, VAR_1) && FUNC_2() >= 128)
  FUNC_1(VAR_6, VAR_6, VAR_2, VAR_0);
}
