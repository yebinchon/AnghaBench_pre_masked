
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_flow_table {int node; } ;
struct mlx5_flow_steering {int ftes_cache; } ;
struct mlx5_flow_spec {int flow_context; int match_value; } ;
struct mlx5_flow_act {int dummy; } ;
struct TYPE_2__ {int type; } ;
struct fs_fte {TYPE_1__ node; int flow_context; struct mlx5_flow_act action; int val; } ;


 int VAR_0 ;
 struct fs_fte* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mlx5_flow_steering* FUNC_1 (int *) ;
 struct fs_fte* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (TYPE_1__*,int *,int ) ;

__attribute__((used)) static struct fs_fte *FUNC_5(struct mlx5_flow_table *VAR_4,
    const struct mlx5_flow_spec *VAR_5,
    struct mlx5_flow_act *VAR_6)
{
 struct mlx5_flow_steering *VAR_7 = FUNC_1(&VAR_4->node);
 struct fs_fte *VAR_8;

 VAR_8 = FUNC_2(VAR_7->ftes_cache, VAR_2);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 FUNC_3(VAR_8->val, &VAR_5->match_value, sizeof(VAR_8->val));
 VAR_8->node.type = VAR_1;
 VAR_8->action = *VAR_6;
 VAR_8->flow_context = VAR_5->flow_context;

 FUNC_4(&VAR_8->node, ((void*)0), VAR_3);

 return VAR_8;
}
