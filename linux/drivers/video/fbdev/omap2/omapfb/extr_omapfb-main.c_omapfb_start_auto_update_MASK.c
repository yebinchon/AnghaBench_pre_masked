
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct workqueue_struct {int dummy; } ;
struct TYPE_2__ {int work; } ;
struct omapfb_display_data {int auto_update_work_enabled; TYPE_1__ auto_update_work; } ;
struct omapfb2_device {struct workqueue_struct* auto_update_wq; int dev; } ;
struct omap_dss_device {int dummy; } ;


 int FUNC_0 (TYPE_1__*,int (*) (int *)) ;
 struct workqueue_struct* FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 struct omapfb_display_data* FUNC_3 (struct omapfb2_device*,struct omap_dss_device*) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct omapfb2_device *VAR_0,
  struct omap_dss_device *VAR_1)
{
 struct omapfb_display_data *VAR_2;

 if (VAR_0->auto_update_wq == ((void*)0)) {
  struct workqueue_struct *VAR_3;

  VAR_3 = FUNC_1("omapfb_auto_update");

  if (VAR_3 == ((void*)0)) {
   FUNC_2(VAR_0->dev, "Failed to create workqueue for "
     "auto-update\n");
   return;
  }

  VAR_0->auto_update_wq = VAR_3;
 }

 VAR_2 = FUNC_3(VAR_0, VAR_1);

 FUNC_0(&VAR_2->auto_update_work, FUNC_4);

 VAR_2->auto_update_work_enabled = 1;

 FUNC_4(&VAR_2->auto_update_work.work);
}
