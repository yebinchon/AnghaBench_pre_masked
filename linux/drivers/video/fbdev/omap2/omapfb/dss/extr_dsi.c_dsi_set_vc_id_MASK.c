
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct omap_dss_device {int name; } ;
struct dsi_data {TYPE_1__* vc; } ;
struct TYPE_2__ {int vc_id; struct omap_dss_device* dssdev; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 struct platform_device* FUNC_1 (struct omap_dss_device*) ;
 struct dsi_data* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct omap_dss_device *VAR_1, int VAR_2, int VAR_3)
{
 struct platform_device *VAR_4 = FUNC_1(VAR_1);
 struct dsi_data *VAR_5 = FUNC_2(VAR_4);

 if (VAR_3 < 0 || VAR_3 > 3) {
  FUNC_0("VC ID out of range\n");
  return -VAR_0;
 }

 if (VAR_2 < 0 || VAR_2 > 3) {
  FUNC_0("Virtual Channel out of range\n");
  return -VAR_0;
 }

 if (VAR_5->vc[VAR_2].dssdev != VAR_1) {
  FUNC_0("Virtual Channel not allocated to display %s\n",
   VAR_1->name);
  return -VAR_0;
 }

 VAR_5->vc[VAR_2].vc_id = VAR_3;

 return 0;
}
