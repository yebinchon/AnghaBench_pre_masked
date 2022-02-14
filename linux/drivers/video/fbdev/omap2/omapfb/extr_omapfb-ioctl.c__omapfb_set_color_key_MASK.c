
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb_color_key {int key_type; int trans_key; int background; } ;
struct omap_overlay_manager_info {int trans_enabled; int trans_key_type; int trans_key; int default_color; } ;
struct omap_overlay_manager {size_t id; int (* set_manager_info ) (struct omap_overlay_manager*,struct omap_overlay_manager_info*) ;int (* apply ) (struct omap_overlay_manager*) ;int (* get_manager_info ) (struct omap_overlay_manager*,struct omap_overlay_manager_info*) ;} ;
typedef enum omap_dss_trans_key_type { ____Placeholder_omap_dss_trans_key_type } omap_dss_trans_key_type ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 struct omapfb_color_key* VAR_4 ;
 int FUNC_0 (struct omap_overlay_manager*,struct omap_overlay_manager_info*) ;
 int FUNC_1 (struct omap_overlay_manager*,struct omap_overlay_manager_info*) ;
 int FUNC_2 (struct omap_overlay_manager*) ;
 int FUNC_3 (struct omap_overlay_manager*,struct omap_overlay_manager_info*) ;
 int FUNC_4 (struct omap_overlay_manager*) ;

__attribute__((used)) static int FUNC_5(struct omap_overlay_manager *VAR_5,
  struct omapfb_color_key *VAR_6)
{
 struct omap_overlay_manager_info VAR_7;
 enum omap_dss_trans_key_type VAR_8;
 int VAR_9;

 VAR_5->get_manager_info(VAR_5, &VAR_7);

 if (VAR_6->key_type == VAR_1) {
  VAR_7.trans_enabled = 0;
  VAR_4[VAR_5->id] = *VAR_6;

  VAR_9 = VAR_5->set_manager_info(VAR_5, &VAR_7);
  if (VAR_9)
   return VAR_9;

  VAR_9 = VAR_5->apply(VAR_5);

  return VAR_9;
 }

 switch (VAR_6->key_type) {
 case 129:
  VAR_8 = VAR_2;
  break;
 case 128:
  VAR_8 = VAR_3;
  break;
 default:
  return -VAR_0;
 }

 VAR_7.default_color = VAR_6->background;
 VAR_7.trans_key = VAR_6->trans_key;
 VAR_7.trans_key_type = VAR_8;
 VAR_7.trans_enabled = 1;

 VAR_4[VAR_5->id] = *VAR_6;

 VAR_9 = VAR_5->set_manager_info(VAR_5, &VAR_7);
 if (VAR_9)
  return VAR_9;

 VAR_9 = VAR_5->apply(VAR_5);

 return VAR_9;
}
