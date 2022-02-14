
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct dsi_data {int dss_clk; int module_id; } ;


 scalar_t__ VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 struct dsi_data* FUNC_1 (struct platform_device*) ;
 unsigned long FUNC_2 (struct platform_device*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static unsigned long FUNC_4(struct platform_device *VAR_1)
{
 unsigned long VAR_2;
 struct dsi_data *VAR_3 = FUNC_1(VAR_1);

 if (FUNC_3(VAR_3->module_id) == VAR_0) {

  VAR_2 = FUNC_0(VAR_3->dss_clk);
 } else {

  VAR_2 = FUNC_2(VAR_1);
 }

 return VAR_2;
}
