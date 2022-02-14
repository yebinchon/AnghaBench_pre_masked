
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omapfb2_device {int num_overlays; int num_fbs; int num_displays; int dev; int * auto_update_wq; TYPE_1__* displays; int * fbs; struct omap_overlay** overlays; } ;
struct omap_overlay {int (* unset_manager ) (struct omap_overlay*) ;scalar_t__ manager; int (* disable ) (struct omap_overlay*) ;} ;
struct omap_dss_device {scalar_t__ state; TYPE_2__* driver; } ;
struct TYPE_4__ {int (* disconnect ) (struct omap_dss_device*) ;int (* disable ) (struct omap_dss_device*) ;} ;
struct TYPE_3__ {scalar_t__ auto_update_work_enabled; struct omap_dss_device* dssdev; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct omapfb2_device*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct omap_dss_device*) ;
 int FUNC_7 (struct omapfb2_device*) ;
 int FUNC_8 (struct omapfb2_device*,struct omap_dss_device*) ;
 int FUNC_9 (struct omap_overlay*) ;
 int FUNC_10 (struct omap_overlay*) ;
 int FUNC_11 (struct omap_dss_device*) ;
 int FUNC_12 (struct omap_dss_device*) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(struct omapfb2_device *VAR_1)
{
 int VAR_2;

 FUNC_0("free_resources\n");

 if (VAR_1 == ((void*)0))
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_overlays; VAR_2++) {
  struct omap_overlay *VAR_3 = VAR_1->overlays[VAR_2];

  VAR_3->disable(VAR_3);

  if (VAR_3->manager)
   VAR_3->unset_manager(VAR_3);
 }

 for (VAR_2 = 0; VAR_2 < VAR_1->num_fbs; VAR_2++)
  FUNC_13(VAR_1->fbs[VAR_2]);


 FUNC_7(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_1->num_fbs; VAR_2++) {
  FUNC_3(VAR_1, VAR_1->fbs[VAR_2]);
  FUNC_5(VAR_1->fbs[VAR_2]);
 }

 for (VAR_2 = 0; VAR_2 < VAR_1->num_displays; VAR_2++) {
  struct omap_dss_device *VAR_4 = VAR_1->displays[VAR_2].dssdev;

  if (VAR_1->displays[VAR_2].auto_update_work_enabled)
   FUNC_8(VAR_1, VAR_4);

  if (VAR_4->state != VAR_0)
   VAR_4->driver->disable(VAR_4);

  VAR_4->driver->disconnect(VAR_4);

  FUNC_6(VAR_4);
 }

 if (VAR_1->auto_update_wq != ((void*)0)) {
  FUNC_4(VAR_1->auto_update_wq);
  FUNC_1(VAR_1->auto_update_wq);
  VAR_1->auto_update_wq = ((void*)0);
 }

 FUNC_2(VAR_1->dev, ((void*)0));
}
