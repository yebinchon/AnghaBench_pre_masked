
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb_display_data {int auto_update_work_enabled; int auto_update_work; } ;
struct omapfb2_device {int dummy; } ;
struct omap_dss_device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct omapfb_display_data* FUNC_1 (struct omapfb2_device*,struct omap_dss_device*) ;

void FUNC_2(struct omapfb2_device *VAR_0,
  struct omap_dss_device *VAR_1)
{
 struct omapfb_display_data *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);

 FUNC_0(&VAR_2->auto_update_work);

 VAR_2->auto_update_work_enabled = 0;
}
