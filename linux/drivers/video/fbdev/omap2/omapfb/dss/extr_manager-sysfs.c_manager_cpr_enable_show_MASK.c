
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_overlay_manager_info {int cpr_enable; } ;
struct omap_overlay_manager {int (* get_manager_info ) (struct omap_overlay_manager*,struct omap_overlay_manager_info*) ;} ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int) ;
 int FUNC_1 (struct omap_overlay_manager*,struct omap_overlay_manager_info*) ;

__attribute__((used)) static ssize_t FUNC_2(struct omap_overlay_manager *VAR_1,
  char *VAR_2)
{
 struct omap_overlay_manager_info VAR_3;

 VAR_1->get_manager_info(VAR_1, &VAR_3);

 return FUNC_0(VAR_2, VAR_0, "%d\n", VAR_3.cpr_enable);
}
