
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_dss_driver {int * get_timings; int * get_recommended_bpp; int * get_resolution; } ;
struct omap_dss_device {int panel_list; int * alias; int * name; TYPE_1__* dev; struct omap_dss_driver* driver; } ;
struct TYPE_2__ {scalar_t__ of_node; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,char*) ;
 int FUNC_4 (scalar_t__,char*,int **) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *,int,char*,int) ;

int FUNC_6(struct omap_dss_device *VAR_6)
{
 struct omap_dss_driver *VAR_7 = VAR_6->driver;
 int VAR_8;







 if (VAR_6->dev->of_node) {
  VAR_8 = FUNC_3(VAR_6->dev->of_node, "display");

  if (VAR_8 < 0)
   VAR_8 = VAR_0++;
 } else {
  VAR_8 = VAR_0++;
 }

 FUNC_5(VAR_6->alias, sizeof(VAR_6->alias), "display%d", VAR_8);


 if (VAR_6->dev->of_node)
  FUNC_4(VAR_6->dev->of_node, "label",
   &VAR_6->name);

 if (VAR_6->name == ((void*)0))
  VAR_6->name = VAR_6->alias;

 if (VAR_7 && VAR_7->get_resolution == ((void*)0))
  VAR_7->get_resolution = VAR_2;
 if (VAR_7 && VAR_7->get_recommended_bpp == ((void*)0))
  VAR_7->get_recommended_bpp = VAR_1;
 if (VAR_7 && VAR_7->get_timings == ((void*)0))
  VAR_7->get_timings = VAR_3;

 FUNC_1(&VAR_5);
 FUNC_0(&VAR_6->panel_list, &VAR_4);
 FUNC_2(&VAR_5);
 return 0;
}
