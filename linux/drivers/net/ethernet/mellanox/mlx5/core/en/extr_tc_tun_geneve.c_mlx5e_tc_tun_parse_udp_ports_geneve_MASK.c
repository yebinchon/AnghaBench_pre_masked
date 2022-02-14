
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {int dummy; } ;
struct mlx5_flow_spec {int dummy; } ;
struct flow_cls_offload {int dummy; } ;


 int FUNC_0 (struct mlx5e_priv*,struct flow_cls_offload*) ;
 int FUNC_1 (struct mlx5e_priv*,struct mlx5_flow_spec*,struct flow_cls_offload*,void*,void*) ;

__attribute__((used)) static int FUNC_2(struct mlx5e_priv *VAR_0,
            struct mlx5_flow_spec *VAR_1,
            struct flow_cls_offload *VAR_2,
            void *VAR_3,
            void *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 return FUNC_0(VAR_0, VAR_2);
}
