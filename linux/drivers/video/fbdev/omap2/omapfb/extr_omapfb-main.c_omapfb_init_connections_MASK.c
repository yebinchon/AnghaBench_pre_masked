
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omapfb2_device {int num_displays; int num_overlays; int dev; struct omap_overlay** overlays; TYPE_1__* displays; } ;
struct omap_overlay_manager {int name; } ;
struct omap_overlay {int (* set_manager ) (struct omap_overlay*,struct omap_overlay_manager*) ;int name; int (* unset_manager ) (struct omap_overlay*) ;scalar_t__ manager; } ;
struct omap_dss_device {TYPE_2__* driver; } ;
struct TYPE_4__ {int (* connect ) (struct omap_dss_device*) ;} ;
struct TYPE_3__ {struct omap_dss_device* dssdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 struct omap_overlay_manager* FUNC_2 (struct omap_dss_device*) ;
 int FUNC_3 (struct omap_dss_device*) ;
 int FUNC_4 (struct omap_dss_device*) ;
 int FUNC_5 (struct omap_overlay*) ;
 int FUNC_6 (struct omap_overlay*,struct omap_overlay_manager*) ;

__attribute__((used)) static int FUNC_7(struct omapfb2_device *VAR_1,
  struct omap_dss_device *VAR_2)
{
 int VAR_3, VAR_4;
 struct omap_overlay_manager *VAR_5;

 VAR_4 = VAR_2->driver->connect(VAR_2);
 if (VAR_4) {
  FUNC_0(VAR_1->dev, "failed to connect default display\n");
  return VAR_4;
 }

 for (VAR_3 = 0; VAR_3 < VAR_1->num_displays; ++VAR_3) {
  struct omap_dss_device *VAR_6 = VAR_1->displays[VAR_3].dssdev;

  if (VAR_6 == VAR_2)
   continue;





  VAR_6->driver->connect(VAR_6);
 }

 VAR_5 = FUNC_2(VAR_2);

 if (!VAR_5) {
  FUNC_0(VAR_1->dev, "no ovl manager for the default display\n");
  return -VAR_0;
 }

 for (VAR_3 = 0; VAR_3 < VAR_1->num_overlays; VAR_3++) {
  struct omap_overlay *VAR_7 = VAR_1->overlays[VAR_3];

  if (VAR_7->manager)
   VAR_7->unset_manager(VAR_7);

  VAR_4 = VAR_7->set_manager(VAR_7, VAR_5);
  if (VAR_4)
   FUNC_1(VAR_1->dev,
     "failed to connect overlay %s to manager %s\n",
     VAR_7->name, VAR_5->name);
 }

 return 0;
}
