
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ttc_params {TYPE_3__* inner_ttc; int * indir_tirn; int any_tt_tirn; } ;
struct TYPE_6__ {struct mlx5_flow_table* t; } ;
struct mlx5e_ttc_table {struct mlx5_flow_handle** tunnel_rules; struct mlx5_flow_handle** rules; TYPE_1__ ft; } ;
struct mlx5e_priv {int mdev; } ;
struct mlx5_flow_table {int dummy; } ;
struct mlx5_flow_handle {int dummy; } ;
struct mlx5_flow_destination {int ft; int type; int tir_num; } ;
struct TYPE_10__ {int proto; int etype; } ;
struct TYPE_9__ {int proto; int etype; } ;
struct TYPE_7__ {int t; } ;
struct TYPE_8__ {TYPE_2__ ft; } ;


 scalar_t__ FUNC_0 (struct mlx5_flow_handle*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mlx5_flow_handle*) ;
 int FUNC_2 (struct mlx5e_ttc_table*) ;
 struct mlx5_flow_handle* FUNC_3 (struct mlx5e_priv*,struct mlx5_flow_table*,struct mlx5_flow_destination*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 TYPE_5__* VAR_5 ;
 TYPE_4__* VAR_6 ;

__attribute__((used)) static int FUNC_6(struct mlx5e_priv *VAR_7,
       struct ttc_params *VAR_8,
       struct mlx5e_ttc_table *VAR_9)
{
 struct mlx5_flow_destination VAR_10 = {};
 struct mlx5_flow_handle **VAR_11;
 struct mlx5_flow_table *VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_12 = VAR_9->ft.t;
 VAR_11 = VAR_9->rules;

 VAR_10.type = VAR_4;
 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
  if (VAR_13 == VAR_2)
   VAR_10.tir_num = VAR_8->any_tt_tirn;
  else
   VAR_10.tir_num = VAR_8->indir_tirn[VAR_13];
  VAR_11[VAR_13] = FUNC_3(VAR_7, VAR_12, &VAR_10,
          VAR_5[VAR_13].etype,
          VAR_5[VAR_13].proto);
  if (FUNC_0(VAR_11[VAR_13]))
   goto del_rules;
 }

 if (!VAR_8->inner_ttc || !FUNC_4(VAR_7->mdev))
  return 0;

 VAR_11 = VAR_9->tunnel_rules;
 VAR_10.type = VAR_3;
 VAR_10.ft = VAR_8->inner_ttc->ft.t;
 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
  if (!FUNC_5(VAR_7->mdev,
        VAR_6[VAR_13].proto))
   continue;
  VAR_11[VAR_13] = FUNC_3(VAR_7, VAR_12, &VAR_10,
          VAR_6[VAR_13].etype,
          VAR_6[VAR_13].proto);
  if (FUNC_0(VAR_11[VAR_13]))
   goto del_rules;
 }

 return 0;

del_rules:
 VAR_14 = FUNC_1(VAR_11[VAR_13]);
 VAR_11[VAR_13] = ((void*)0);
 FUNC_2(VAR_9);
 return VAR_14;
}
