
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_set_port_general_context {scalar_t__ pptx; scalar_t__ pprx; } ;
struct mlx4_mfunc_master_ctx {scalar_t__ pptx; scalar_t__ pprx; } ;
struct TYPE_2__ {struct mlx4_mfunc_master_ctx master; } ;
struct mlx4_priv {TYPE_1__ mfunc; } ;
struct mlx4_dev {int dummy; } ;


 int FUNC_0 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (struct mlx4_dev*,char*,int) ;

__attribute__((used)) static void
FUNC_3(struct mlx4_dev *VAR_0, int VAR_1,
         struct mlx4_set_port_general_context *VAR_2)
{
 struct mlx4_priv *VAR_3 = FUNC_1(VAR_0);
 struct mlx4_mfunc_master_ctx *VAR_4 = &VAR_3->mfunc.master;


 if (VAR_1 != FUNC_0(VAR_0) &&
     (VAR_2->pptx != VAR_4->pptx ||
      VAR_2->pprx != VAR_4->pprx)) {
  VAR_2->pptx = VAR_4->pptx;
  VAR_2->pprx = VAR_4->pprx;
  FUNC_2(VAR_0, "denying Global Pause change for slave:%d\n",
     VAR_1);
 } else {
  VAR_4->pptx = VAR_2->pptx;
  VAR_4->pprx = VAR_2->pprx;
 }
}
