
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_overlay_manager {int id; } ;
struct mgr_priv_data {int extra_info_dirty; int shadow_extra_info_dirty; scalar_t__ updating; int lcd_config; int timings; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 struct mgr_priv_data* FUNC_4 (struct omap_overlay_manager*) ;

__attribute__((used)) static void FUNC_5(struct omap_overlay_manager *VAR_0)
{
 struct mgr_priv_data *VAR_1 = FUNC_4(VAR_0);

 FUNC_0("writing mgr %d regs extra\n", VAR_0->id);

 if (!VAR_1->extra_info_dirty)
  return;

 FUNC_2(VAR_0->id, &VAR_1->timings);


 if (FUNC_3(VAR_0->id))
  FUNC_1(VAR_0->id, &VAR_1->lcd_config);

 VAR_1->extra_info_dirty = 0;
 if (VAR_1->updating)
  VAR_1->shadow_extra_info_dirty = 1;
}
