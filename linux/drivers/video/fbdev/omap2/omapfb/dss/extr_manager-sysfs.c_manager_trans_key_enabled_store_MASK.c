
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_overlay_manager_info {int trans_enabled; } ;
struct omap_overlay_manager {int (* set_manager_info ) (struct omap_overlay_manager*,struct omap_overlay_manager_info*) ;int (* apply ) (struct omap_overlay_manager*) ;int (* get_manager_info ) (struct omap_overlay_manager*,struct omap_overlay_manager_info*) ;} ;
typedef int ssize_t ;


 int FUNC_0 (char const*,int*) ;
 int FUNC_1 (struct omap_overlay_manager*,struct omap_overlay_manager_info*) ;
 int FUNC_2 (struct omap_overlay_manager*,struct omap_overlay_manager_info*) ;
 int FUNC_3 (struct omap_overlay_manager*) ;

__attribute__((used)) static ssize_t FUNC_4(struct omap_overlay_manager *VAR_0,
            const char *VAR_1, size_t VAR_2)
{
 struct omap_overlay_manager_info VAR_3;
 bool VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_0->get_manager_info(VAR_0, &VAR_3);

 VAR_3.trans_enabled = VAR_4;

 VAR_5 = VAR_0->set_manager_info(VAR_0, &VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_5 = VAR_0->apply(VAR_0);
 if (VAR_5)
  return VAR_5;

 return VAR_2;
}
