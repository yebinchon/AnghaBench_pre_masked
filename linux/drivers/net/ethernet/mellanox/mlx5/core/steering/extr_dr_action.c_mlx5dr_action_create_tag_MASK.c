
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5dr_action {int flow_tag; } ;


 int VAR_0 ;
 struct mlx5dr_action* FUNC_0 (int ) ;

struct mlx5dr_action *FUNC_1(u32 VAR_1)
{
 struct mlx5dr_action *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->flow_tag = VAR_1 & 0xffffff;

 return VAR_2;
}
