
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_qp_context {int cqn_recv; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct mlx4_qp_context *VAR_0)
{
 return FUNC_0(VAR_0->cqn_recv) & 0xffffff;
}
