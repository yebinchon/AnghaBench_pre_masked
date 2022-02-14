
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct dsi_data {int module_id; int ulps_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct platform_device*) ;
 struct dsi_data* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*,int ) ;
 int FUNC_4 (struct platform_device*,int) ;
 int FUNC_5 (struct platform_device*,int,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct platform_device *VAR_1,
  bool VAR_2, bool VAR_3)
{
 struct dsi_data *VAR_4 = FUNC_2(VAR_1);

 if (VAR_3 && !VAR_4->ulps_enabled)
  FUNC_1(VAR_1);


 FUNC_3(VAR_1, 0);
 FUNC_5(VAR_1, 0, 0);
 FUNC_5(VAR_1, 1, 0);
 FUNC_5(VAR_1, 2, 0);
 FUNC_5(VAR_1, 3, 0);

 FUNC_6(VAR_4->module_id, VAR_0);
 FUNC_0(VAR_1);
 FUNC_4(VAR_1, VAR_2);
}
