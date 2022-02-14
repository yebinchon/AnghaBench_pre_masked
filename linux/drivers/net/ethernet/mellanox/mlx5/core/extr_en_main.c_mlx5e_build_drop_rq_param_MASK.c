
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buf_numa_node; } ;
struct mlx5e_rq_param {TYPE_1__ wq; void* rqc; } ;
struct mlx5e_priv {int drop_rq_q_counter; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int device; } ;


 void* FUNC_0 (void*,void*,int ) ;
 int FUNC_1 (void*,void*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,int) ;
 void* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(struct mlx5e_priv *VAR_5,
          struct mlx5e_rq_param *VAR_6)
{
 struct mlx5_core_dev *VAR_7 = VAR_5->mdev;
 void *VAR_8 = VAR_6->rqc;
 void *VAR_9 = FUNC_0(VAR_8, VAR_8, VAR_9);

 FUNC_1(VAR_9, VAR_9, VAR_4, VAR_0);
 FUNC_1(VAR_9, VAR_9, VAR_2,
   FUNC_3(VAR_0, 1));
 FUNC_1(VAR_8, VAR_8, VAR_1, VAR_5->drop_rq_q_counter);

 VAR_6->wq.buf_numa_node = FUNC_2(VAR_7->device);
}
