
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ttc_params {int * indir_tirn; int any_tt_tirn; } ;
struct TYPE_3__ {struct mlx5_flow_table* t; } ;
struct mlx5e_ttc_table {struct mlx5_flow_handle** rules; TYPE_1__ ft; } ;
struct mlx5e_priv {int dummy; } ;
struct mlx5_flow_table {int dummy; } ;
struct mlx5_flow_handle {int dummy; } ;
struct mlx5_flow_destination {int tir_num; int type; } ;
struct TYPE_4__ {int proto; int etype; } ;


 scalar_t__ FUNC_0 (struct mlx5_flow_handle*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mlx5_flow_handle*) ;
 int FUNC_2 (struct mlx5e_ttc_table*) ;
 struct mlx5_flow_handle* FUNC_3 (struct mlx5e_priv*,struct mlx5_flow_table*,struct mlx5_flow_destination*,int ,int ) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static int FUNC_4(struct mlx5e_priv *VAR_4,
      struct ttc_params *VAR_5,
      struct mlx5e_ttc_table *VAR_6)
{
 struct mlx5_flow_destination VAR_7 = {};
 struct mlx5_flow_handle **VAR_8;
 struct mlx5_flow_table *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_9 = VAR_6->ft.t;
 VAR_8 = VAR_6->rules;

 VAR_7.type = VAR_2;
 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  if (VAR_11 == VAR_1)
   VAR_7.tir_num = VAR_5->any_tt_tirn;
  else
   VAR_7.tir_num = VAR_5->indir_tirn[VAR_11];

  VAR_8[VAR_11] = FUNC_3(VAR_4, VAR_9, &VAR_7,
         VAR_3[VAR_11].etype,
         VAR_3[VAR_11].proto);
  if (FUNC_0(VAR_8[VAR_11]))
   goto del_rules;
 }

 return 0;

del_rules:
 VAR_10 = FUNC_1(VAR_8[VAR_11]);
 VAR_8[VAR_11] = ((void*)0);
 FUNC_2(VAR_6);
 return VAR_10;
}
