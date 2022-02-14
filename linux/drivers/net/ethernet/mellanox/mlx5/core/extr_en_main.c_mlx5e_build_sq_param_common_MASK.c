
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int buf_numa_node; } ;
struct mlx5e_sq_param {TYPE_2__ wq; void* sqc; } ;
struct mlx5e_priv {TYPE_3__* mdev; } ;
struct TYPE_4__ {int pdn; } ;
struct TYPE_6__ {int device; TYPE_1__ mlx5e_res; } ;


 void* FUNC_0 (void*,void*,int ) ;
 int VAR_0 ;
 int FUNC_1 (void*,void*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;

void FUNC_4(struct mlx5e_priv *VAR_4,
     struct mlx5e_sq_param *VAR_5)
{
 void *VAR_6 = VAR_5->sqc;
 void *VAR_7 = FUNC_0(VAR_6, VAR_6, VAR_7);

 FUNC_1(VAR_7, VAR_7, VAR_1, FUNC_3(VAR_0));
 FUNC_1(VAR_7, VAR_7, VAR_2, VAR_4->mdev->mlx5e_res.pdn);

 VAR_5->wq.buf_numa_node = FUNC_2(VAR_4->mdev->device);
}
