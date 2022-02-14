
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_tc_flow {int refcnt; } ;


 int VAR_0 ;
 struct mlx5e_tc_flow* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct mlx5e_tc_flow *FUNC_2(struct mlx5e_tc_flow *VAR_1)
{
 if (!VAR_1 || !FUNC_1(&VAR_1->refcnt))
  return FUNC_0(-VAR_0);
 return VAR_1;
}
