
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_overlay_manager {int dummy; } ;
struct omap_dss_device {int name; int dispc_channel; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct omap_overlay_manager*,struct omap_dss_device*) ;
 int FUNC_2 (struct omap_overlay_manager*,struct omap_dss_device*) ;
 int FUNC_3 () ;
 struct omap_overlay_manager* FUNC_4 (int ) ;
 int FUNC_5 (struct omap_dss_device*,struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_6(struct omap_dss_device *VAR_1,
  struct omap_dss_device *VAR_2)
{
 struct omap_overlay_manager *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_3();
 if (VAR_4)
  return VAR_4;

 VAR_3 = FUNC_4(VAR_1->dispc_channel);
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_3, VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_5(VAR_1, VAR_2);
 if (VAR_4) {
  FUNC_0("failed to connect output to new device: %s\n",
    VAR_2->name);
  FUNC_2(VAR_3, VAR_1);
  return VAR_4;
 }

 return 0;
}
