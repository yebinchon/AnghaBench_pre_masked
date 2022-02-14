
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_hv_vhca_stats_agent {int delay; int work; } ;
struct mlx5e_priv {int wq; struct mlx5e_hv_vhca_stats_agent stats_agent; int max_nch; } ;
struct mlx5_hv_vhca_control_block {int command; int rings; int version; } ;
struct mlx5_hv_vhca_agent {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct mlx5e_priv* FUNC_1 (struct mlx5_hv_vhca_agent*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_4(struct mlx5_hv_vhca_agent *VAR_2,
     struct mlx5_hv_vhca_control_block *VAR_3)
{
 struct mlx5e_hv_vhca_stats_agent *VAR_4;
 struct mlx5e_priv *VAR_5;

 VAR_5 = FUNC_1(VAR_2);
 VAR_4 = &VAR_5->stats_agent;

 VAR_3->version = VAR_1;
 VAR_3->rings = VAR_5->max_nch;

 if (!VAR_3->command) {
  FUNC_0(&VAR_5->stats_agent.work);
  return;
 }

 VAR_4->delay = VAR_3->command == VAR_0 ? 0 :
   FUNC_2(VAR_3->command * 100);

 FUNC_3(VAR_5->wq, &VAR_4->work, VAR_4->delay);
}
