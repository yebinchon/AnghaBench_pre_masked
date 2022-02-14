
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int work; } ;
struct mlx5e_priv {TYPE_1__ stats_agent; } ;
struct mlx5_hv_vhca_agent {int dummy; } ;


 int FUNC_0 (int *) ;
 struct mlx5e_priv* FUNC_1 (struct mlx5_hv_vhca_agent*) ;

__attribute__((used)) static void FUNC_2(struct mlx5_hv_vhca_agent *VAR_0)
{
 struct mlx5e_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->stats_agent.work);
}
