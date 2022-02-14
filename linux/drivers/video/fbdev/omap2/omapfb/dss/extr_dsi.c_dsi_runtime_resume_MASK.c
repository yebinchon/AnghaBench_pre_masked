
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct dsi_data {int is_enabled; } ;
struct device {int dummy; } ;


 int FUNC_0 () ;
 struct dsi_data* FUNC_1 (struct platform_device*) ;
 int FUNC_2 () ;
 struct platform_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct platform_device *VAR_1 = FUNC_3(VAR_0);
 struct dsi_data *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_0();
 if (VAR_3)
  return VAR_3;

 VAR_2->is_enabled = 1;

 FUNC_2();

 return 0;
}
