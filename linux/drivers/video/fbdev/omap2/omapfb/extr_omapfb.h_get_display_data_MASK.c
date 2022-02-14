
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb_display_data {struct omap_dss_device* dssdev; } ;
struct omapfb2_device {int num_displays; struct omapfb_display_data* displays; } ;
struct omap_dss_device {int dummy; } ;


 int FUNC_0 () ;

__attribute__((used)) static inline struct omapfb_display_data *FUNC_1(
  struct omapfb2_device *VAR_0, struct omap_dss_device *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_displays; ++VAR_2)
  if (VAR_0->displays[VAR_2].dssdev == VAR_1)
   return &VAR_0->displays[VAR_2];


 FUNC_0();
 return ((void*)0);
}
