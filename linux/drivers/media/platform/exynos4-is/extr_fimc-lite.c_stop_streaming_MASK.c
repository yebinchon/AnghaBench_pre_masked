
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {struct fimc_lite* drv_priv; } ;
struct fimc_lite {int dummy; } ;


 int FUNC_0 (struct fimc_lite*) ;
 int FUNC_1 (struct fimc_lite*,int) ;

__attribute__((used)) static void FUNC_2(struct vb2_queue *VAR_0)
{
 struct fimc_lite *VAR_1 = VAR_0->drv_priv;

 if (!FUNC_0(VAR_1))
  return;

 FUNC_1(VAR_1, 0);
}
