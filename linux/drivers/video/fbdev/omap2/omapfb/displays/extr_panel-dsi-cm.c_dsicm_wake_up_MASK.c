
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panel_drv_data {scalar_t__ ulps_enabled; } ;


 int FUNC_0 (struct panel_drv_data*) ;
 int FUNC_1 (struct panel_drv_data*) ;
 int FUNC_2 (struct panel_drv_data*) ;

__attribute__((used)) static int FUNC_3(struct panel_drv_data *VAR_0)
{
 if (VAR_0->ulps_enabled)
  return FUNC_1(VAR_0);

 FUNC_0(VAR_0);
 FUNC_2(VAR_0);
 return 0;
}
