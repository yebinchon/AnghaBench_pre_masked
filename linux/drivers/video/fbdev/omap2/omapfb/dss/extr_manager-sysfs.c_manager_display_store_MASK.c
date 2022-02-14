
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_overlay_manager {int (* apply ) (struct omap_overlay_manager*) ;struct omap_dss_device* (* get_device ) (struct omap_overlay_manager*) ;} ;
struct omap_dss_device {TYPE_1__* driver; int name; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* connect ) (struct omap_dss_device*) ;int (* disconnect ) (struct omap_dss_device*) ;} ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct omap_dss_device* FUNC_2 (void*,int ) ;
 int FUNC_3 (struct omap_dss_device*) ;
 scalar_t__ FUNC_4 (struct omap_dss_device*) ;
 scalar_t__ FUNC_5 (struct omap_dss_device*) ;
 struct omap_dss_device* FUNC_6 (struct omap_overlay_manager*) ;
 int FUNC_7 (struct omap_dss_device*) ;
 int FUNC_8 (struct omap_dss_device*) ;
 struct omap_dss_device* FUNC_9 (struct omap_overlay_manager*) ;
 int FUNC_10 (struct omap_dss_device*) ;
 int FUNC_11 (struct omap_overlay_manager*) ;

__attribute__((used)) static ssize_t FUNC_12(struct omap_overlay_manager *VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 int VAR_5 = 0;
 size_t VAR_6 = VAR_4;
 struct omap_dss_device *VAR_7 = ((void*)0);
 struct omap_dss_device *VAR_8;

 if (VAR_3[VAR_4-1] == '\n')
  --VAR_6;

 if (VAR_6 > 0)
  VAR_7 = FUNC_2((void *)VAR_3,
   VAR_1);

 if (VAR_6 > 0 && VAR_7 == ((void*)0))
  return -VAR_0;

 if (VAR_7) {
  FUNC_0("display %s found\n", VAR_7->name);

  if (FUNC_4(VAR_7)) {
   FUNC_1("new display is already connected\n");
   VAR_5 = -VAR_0;
   goto put_device;
  }

  if (FUNC_5(VAR_7)) {
   FUNC_1("new display is not disabled\n");
   VAR_5 = -VAR_0;
   goto put_device;
  }
 }

 VAR_8 = VAR_2->get_device(VAR_2);
 if (VAR_8) {
  if (FUNC_5(VAR_8)) {
   FUNC_1("old display is not disabled\n");
   VAR_5 = -VAR_0;
   goto put_device;
  }

  VAR_8->driver->disconnect(VAR_8);
 }

 if (VAR_7) {
  VAR_5 = VAR_7->driver->connect(VAR_7);
  if (VAR_5) {
   FUNC_1("failed to connect new device\n");
   goto put_device;
  }

  VAR_8 = VAR_2->get_device(VAR_2);
  if (VAR_8 != VAR_7) {
   FUNC_1("failed to connect device to this manager\n");
   VAR_7->driver->disconnect(VAR_7);
   goto put_device;
  }

  VAR_5 = VAR_2->apply(VAR_2);
  if (VAR_5) {
   FUNC_1("failed to apply dispc config\n");
   goto put_device;
  }
 }

put_device:
 if (VAR_7)
  FUNC_3(VAR_7);

 return VAR_5 ? VAR_5 : VAR_4;
}
