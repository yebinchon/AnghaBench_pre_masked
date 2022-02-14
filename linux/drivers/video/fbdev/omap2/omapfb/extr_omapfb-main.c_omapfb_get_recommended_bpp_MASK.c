
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omapfb_display_data {scalar_t__ bpp_override; } ;
struct omapfb2_device {int dummy; } ;
struct omap_dss_device {TYPE_1__* driver; } ;
struct TYPE_2__ {int (* get_recommended_bpp ) (struct omap_dss_device*) ;} ;


 int FUNC_0 (int ) ;
 struct omapfb_display_data* FUNC_1 (struct omapfb2_device*,struct omap_dss_device*) ;
 int FUNC_2 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_3(struct omapfb2_device *VAR_0,
  struct omap_dss_device *VAR_1)
{
 struct omapfb_display_data *VAR_2;

 FUNC_0(VAR_1->driver->get_recommended_bpp == ((void*)0));

 VAR_2 = FUNC_1(VAR_0, VAR_1);

 if (VAR_2->bpp_override != 0)
  return VAR_2->bpp_override;

 return VAR_1->driver->get_recommended_bpp(VAR_1);
}
