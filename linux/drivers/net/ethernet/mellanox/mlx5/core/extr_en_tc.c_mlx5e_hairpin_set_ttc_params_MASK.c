
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_flow_table_attr {int prio; int level; int max_fte; } ;
struct ttc_params {int * indir_tirn; int any_tt_tirn; struct mlx5_flow_table_attr ft_attr; } ;
struct mlx5e_hairpin {int * indir_tirn; int tirn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ttc_params*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct mlx5e_hairpin *VAR_4,
      struct ttc_params *VAR_5)
{
 struct mlx5_flow_table_attr *VAR_6 = &VAR_5->ft_attr;
 int VAR_7;

 FUNC_0(VAR_5, 0, sizeof(*VAR_5));

 VAR_5->any_tt_tirn = VAR_4->tirn;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  VAR_5->indir_tirn[VAR_7] = VAR_4->indir_tirn[VAR_7];

 VAR_6->max_fte = VAR_1;
 VAR_6->level = VAR_3;
 VAR_6->prio = VAR_2;
}
