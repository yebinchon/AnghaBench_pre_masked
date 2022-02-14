
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* db_numa_node; void* buf_numa_node; } ;
struct mlx5e_cq_param {TYPE_1__ wq; } ;
struct mlx5e_cq {int dummy; } ;
struct mlx5_core_dev {int device; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct mlx5_core_dev*,struct mlx5e_cq_param*,struct mlx5e_cq*) ;

__attribute__((used)) static int FUNC_2(struct mlx5_core_dev *VAR_0,
          struct mlx5e_cq *VAR_1,
          struct mlx5e_cq_param *VAR_2)
{
 VAR_2->wq.buf_numa_node = FUNC_0(VAR_0->device);
 VAR_2->wq.db_numa_node = FUNC_0(VAR_0->device);

 return FUNC_1(VAR_0, VAR_2, VAR_1);
}
