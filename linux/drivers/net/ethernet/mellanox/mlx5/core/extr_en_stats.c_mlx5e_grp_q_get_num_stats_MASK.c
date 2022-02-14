
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {scalar_t__ drop_rq_q_counter; scalar_t__ q_counter; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct mlx5e_priv *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2->q_counter)
  VAR_3 += VAR_1;

 if (VAR_2->drop_rq_q_counter)
  VAR_3 += VAR_0;

 return VAR_3;
}
