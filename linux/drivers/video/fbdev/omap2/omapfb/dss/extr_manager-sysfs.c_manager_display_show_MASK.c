
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_overlay_manager {struct omap_dss_device* (* get_device ) (struct omap_overlay_manager*) ;} ;
struct omap_dss_device {char* name; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,char*) ;
 struct omap_dss_device* FUNC_1 (struct omap_overlay_manager*) ;

__attribute__((used)) static ssize_t FUNC_2(struct omap_overlay_manager *VAR_1, char *VAR_2)
{
 struct omap_dss_device *VAR_3 = VAR_1->get_device(VAR_1);

 return FUNC_0(VAR_2, VAR_0, "%s\n", VAR_3 ?
   VAR_3->name : "<none>");
}
