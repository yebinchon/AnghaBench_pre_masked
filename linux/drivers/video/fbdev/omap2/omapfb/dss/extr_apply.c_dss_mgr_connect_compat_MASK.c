
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_overlay_manager {int (* set_output ) (struct omap_overlay_manager*,struct omap_dss_device*) ;} ;
struct omap_dss_device {int dummy; } ;


 int FUNC_0 (struct omap_overlay_manager*,struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_1(struct omap_overlay_manager *VAR_0,
  struct omap_dss_device *VAR_1)
{
 return VAR_0->set_output(VAR_0, VAR_1);
}
