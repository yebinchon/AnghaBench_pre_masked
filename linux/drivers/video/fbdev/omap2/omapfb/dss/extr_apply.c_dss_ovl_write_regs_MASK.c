
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_overlay_info {int color_mode; } ;
struct ovl_priv_data {int enabled; int info_dirty; int shadow_info_dirty; struct omap_overlay_info info; } ;
struct omap_overlay {int id; int manager; } ;
struct mgr_priv_data {scalar_t__ updating; int timings; int lcd_config; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,struct omap_overlay_info*,int,int *,int) ;
 int FUNC_4 (int ,int ) ;
 struct mgr_priv_data* FUNC_5 (int ) ;
 struct ovl_priv_data* FUNC_6 (struct omap_overlay*) ;

__attribute__((used)) static void FUNC_7(struct omap_overlay *VAR_0)
{
 struct ovl_priv_data *VAR_1 = FUNC_6(VAR_0);
 struct omap_overlay_info *VAR_2;
 bool VAR_3;
 struct mgr_priv_data *VAR_4;
 int VAR_5;

 FUNC_0("writing ovl %d regs\n", VAR_0->id);

 if (!VAR_1->enabled || !VAR_1->info_dirty)
  return;

 VAR_2 = &VAR_1->info;

 VAR_4 = FUNC_5(VAR_0->manager);

 VAR_3 = FUNC_4(VAR_4->lcd_config, VAR_2->color_mode);

 VAR_5 = FUNC_3(VAR_0->id, VAR_2, VAR_3, &VAR_4->timings, 0);
 if (VAR_5) {




  FUNC_1("dispc_ovl_setup failed for ovl %d\n", VAR_0->id);


  VAR_1->enabled = 0;
  FUNC_2(VAR_0->id, 0);
  return;
 }

 VAR_1->info_dirty = 0;
 if (VAR_4->updating)
  VAR_1->shadow_info_dirty = 1;
}
