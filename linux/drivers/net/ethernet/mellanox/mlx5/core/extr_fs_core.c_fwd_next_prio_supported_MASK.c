
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_flow_table {scalar_t__ type; int node; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_2(struct mlx5_flow_table *VAR_2)
{
 return ((VAR_2->type == VAR_0) &&
  (FUNC_0(FUNC_1(&VAR_2->node), VAR_1)));
}
