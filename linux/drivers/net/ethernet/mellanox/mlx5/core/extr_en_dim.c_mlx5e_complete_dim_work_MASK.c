
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {int dummy; } ;
struct mlx5_core_cq {int dummy; } ;
struct dim_cq_moder {int pkts; int usec; } ;
struct dim {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_core_dev*,struct mlx5_core_cq*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct dim *VAR_1, struct dim_cq_moder VAR_2,
   struct mlx5_core_dev *VAR_3, struct mlx5_core_cq *VAR_4)
{
 FUNC_0(VAR_3, VAR_4, VAR_2.usec, VAR_2.pkts);
 VAR_1->state = VAR_0;
}
