
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_err_ctx {int (* recover ) (int ) ;int ctx; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct mlx5e_err_ctx *VAR_0)
{
 return VAR_0->recover(VAR_0->ctx);
}
