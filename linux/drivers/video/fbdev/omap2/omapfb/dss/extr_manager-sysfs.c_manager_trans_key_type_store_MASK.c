
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_overlay_manager_info {int trans_key_type; } ;
struct omap_overlay_manager {int (* set_manager_info ) (struct omap_overlay_manager*,struct omap_overlay_manager_info*) ;int (* apply ) (struct omap_overlay_manager*) ;int (* get_manager_info ) (struct omap_overlay_manager*,struct omap_overlay_manager_info*) ;} ;
typedef int ssize_t ;


 int FUNC_0 (struct omap_overlay_manager*,struct omap_overlay_manager_info*) ;
 int FUNC_1 (struct omap_overlay_manager*,struct omap_overlay_manager_info*) ;
 int FUNC_2 (struct omap_overlay_manager*) ;
 int FUNC_3 (int ,char const*) ;
 int VAR_0 ;

__attribute__((used)) static ssize_t FUNC_4(struct omap_overlay_manager *VAR_1,
         const char *VAR_2, size_t VAR_3)
{
 struct omap_overlay_manager_info VAR_4;
 int VAR_5;

 VAR_5 = FUNC_3(VAR_0, VAR_2);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_1->get_manager_info(VAR_1, &VAR_4);

 VAR_4.trans_key_type = VAR_5;

 VAR_5 = VAR_1->set_manager_info(VAR_1, &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = VAR_1->apply(VAR_1);
 if (VAR_5)
  return VAR_5;

 return VAR_3;
}
