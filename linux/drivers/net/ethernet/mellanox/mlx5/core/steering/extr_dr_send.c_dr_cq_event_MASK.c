
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_cq {int cqn; } ;
typedef enum mlx5_event { ____Placeholder_mlx5_event } mlx5_event ;


 int FUNC_0 (char*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct mlx5_core_cq *VAR_0,
   enum mlx5_event VAR_1)
{
 FUNC_0("CQ event %u on CQ #%u\n", VAR_1, VAR_0->cqn);
}
