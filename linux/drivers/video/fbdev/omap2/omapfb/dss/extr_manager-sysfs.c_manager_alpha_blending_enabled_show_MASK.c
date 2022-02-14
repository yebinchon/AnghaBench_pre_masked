
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_overlay_manager_info {int partial_alpha_enabled; } ;
struct omap_overlay_manager {int (* get_manager_info ) (struct omap_overlay_manager*,struct omap_overlay_manager_info*) ;} ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,char*,int) ;
 int FUNC_2 (struct omap_overlay_manager*,struct omap_overlay_manager_info*) ;

__attribute__((used)) static ssize_t FUNC_3(
  struct omap_overlay_manager *VAR_3, char *VAR_4)
{
 struct omap_overlay_manager_info VAR_5;

 if(!FUNC_0(VAR_1))
  return -VAR_0;

 VAR_3->get_manager_info(VAR_3, &VAR_5);

 return FUNC_1(VAR_4, VAR_2, "%d\n",
  VAR_5.partial_alpha_enabled);
}
