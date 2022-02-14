
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {scalar_t__ drop_rq_q_counter; int mdev; scalar_t__ q_counter; } ;


 int FUNC_0 (int ,scalar_t__) ;

void FUNC_1(struct mlx5e_priv *VAR_0)
{
 if (VAR_0->q_counter)
  FUNC_0(VAR_0->mdev, VAR_0->q_counter);

 if (VAR_0->drop_rq_q_counter)
  FUNC_0(VAR_0->mdev, VAR_0->drop_rq_q_counter);
}
