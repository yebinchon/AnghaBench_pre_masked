
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct omap_dss_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ ddr_clk_always_on; } ;
struct dsi_data {TYPE_1__ vm_timings; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (struct platform_device*,int ,int,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*) ;
 struct platform_device* FUNC_6 (struct omap_dss_device*) ;
 struct dsi_data* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (struct platform_device*,int) ;
 int FUNC_9 (struct platform_device*,int,int) ;
 int FUNC_10 (struct omap_dss_device*,int) ;

__attribute__((used)) static void FUNC_11(struct omap_dss_device *VAR_0, int VAR_1,
  bool VAR_2)
{
 struct platform_device *VAR_3 = FUNC_6(VAR_0);
 struct dsi_data *VAR_4 = FUNC_7(VAR_3);

 FUNC_1("dsi_vc_enable_hs(%d, %d)\n", VAR_1, VAR_2);

 FUNC_3(!FUNC_4(VAR_3));

 FUNC_9(VAR_3, VAR_1, 0);
 FUNC_8(VAR_3, 0);

 FUNC_2(VAR_3, FUNC_0(VAR_1), VAR_2, 9, 9);

 FUNC_9(VAR_3, VAR_1, 1);
 FUNC_8(VAR_3, 1);

 FUNC_5(VAR_3);


 if (VAR_4->vm_timings.ddr_clk_always_on && VAR_2)
  FUNC_10(VAR_0, VAR_1);
}
