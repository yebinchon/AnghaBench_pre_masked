
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct ci_hdrc_msm {int core_clk; int iface_clk; int ci; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct ci_hdrc_msm* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct ci_hdrc_msm *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(&VAR_0->dev);
 FUNC_0(VAR_1->ci);
 FUNC_1(VAR_1->iface_clk);
 FUNC_1(VAR_1->core_clk);

 return 0;
}
