
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {int drop_rq_q_counter; int q_counter; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (struct mlx5_core_dev*,int *) ;
 int FUNC_1 (struct mlx5_core_dev*,char*,int) ;

void FUNC_2(struct mlx5e_priv *VAR_0)
{
 struct mlx5_core_dev *VAR_1 = VAR_0->mdev;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1, &VAR_0->q_counter);
 if (VAR_2) {
  FUNC_1(VAR_1, "alloc queue counter failed, %d\n", VAR_2);
  VAR_0->q_counter = 0;
 }

 VAR_2 = FUNC_0(VAR_1, &VAR_0->drop_rq_q_counter);
 if (VAR_2) {
  FUNC_1(VAR_1, "alloc drop RQ counter failed, %d\n", VAR_2);
  VAR_0->drop_rq_q_counter = 0;
 }
}
