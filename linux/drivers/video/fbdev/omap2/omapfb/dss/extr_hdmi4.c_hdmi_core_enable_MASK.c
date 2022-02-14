
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_dss_device {int dummy; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (struct omap_dss_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct omap_dss_device *VAR_1)
{
 int VAR_2 = 0;

 FUNC_0("ENTER omapdss_hdmi_core_enable\n");

 FUNC_3(&VAR_0.lock);

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2) {
  FUNC_1("failed to power on device\n");
  goto err0;
 }

 FUNC_4(&VAR_0.lock);
 return 0;

err0:
 FUNC_4(&VAR_0.lock);
 return VAR_2;
}
