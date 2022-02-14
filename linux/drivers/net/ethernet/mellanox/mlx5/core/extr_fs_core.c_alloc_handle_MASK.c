
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_flow_handle {int num_rules; } ;


 int VAR_0 ;
 struct mlx5_flow_handle* FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct mlx5_flow_handle*,int ,int) ;

__attribute__((used)) static struct mlx5_flow_handle *FUNC_2(int VAR_2)
{
 struct mlx5_flow_handle *VAR_3;

 VAR_3 = FUNC_0(FUNC_1(VAR_3, VAR_1, VAR_2), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->num_rules = VAR_2;

 return VAR_3;
}
