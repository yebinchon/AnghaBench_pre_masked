
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {struct fimc_ctx* drv_priv; } ;
struct fimc_dev {int dummy; } ;
struct fimc_ctx {struct fimc_dev* fimc_dev; } ;


 int FUNC_0 (struct fimc_dev*) ;
 int FUNC_1 (struct fimc_dev*,int) ;

__attribute__((used)) static void FUNC_2(struct vb2_queue *VAR_0)
{
 struct fimc_ctx *VAR_1 = VAR_0->drv_priv;
 struct fimc_dev *VAR_2 = VAR_1->fimc_dev;

 if (!FUNC_0(VAR_2))
  return;

 FUNC_1(VAR_2, 0);
}
