
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_overlay_manager_info {int cpr_enable; } ;
struct omap_overlay_manager {int (* set_manager_info ) (struct omap_overlay_manager*,struct omap_overlay_manager_info*) ;int (* apply ) (struct omap_overlay_manager*) ;int (* get_manager_info ) (struct omap_overlay_manager*,struct omap_overlay_manager_info*) ;} ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int*) ;
 int FUNC_2 (struct omap_overlay_manager*,struct omap_overlay_manager_info*) ;
 int FUNC_3 (struct omap_overlay_manager*,struct omap_overlay_manager_info*) ;
 int FUNC_4 (struct omap_overlay_manager*) ;

__attribute__((used)) static ssize_t FUNC_5(struct omap_overlay_manager *VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 struct omap_overlay_manager_info VAR_5;
 int VAR_6;
 bool VAR_7;

 if (!FUNC_0(VAR_1))
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_3, &VAR_7);
 if (VAR_6)
  return VAR_6;

 VAR_2->get_manager_info(VAR_2, &VAR_5);

 if (VAR_5.cpr_enable == VAR_7)
  return VAR_4;

 VAR_5.cpr_enable = VAR_7;

 VAR_6 = VAR_2->set_manager_info(VAR_2, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = VAR_2->apply(VAR_2);
 if (VAR_6)
  return VAR_6;

 return VAR_4;
}
