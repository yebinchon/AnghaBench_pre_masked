
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct omap_overlay_manager {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct omap_overlay_manager*,struct platform_device*) ;
 struct omap_overlay_manager* VAR_0 ;
 int VAR_1 ;

int FUNC_2(struct platform_device *VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
  struct omap_overlay_manager *VAR_5 = &VAR_0[VAR_3];

  VAR_4 = FUNC_1(VAR_5, VAR_2);
  if (VAR_4)
   FUNC_0("failed to create sysfs file\n");
 }

 return 0;
}
