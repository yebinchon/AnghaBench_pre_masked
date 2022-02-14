
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_overlay_manager {int dummy; } ;
struct dss_lcd_mgr_config {int dummy; } ;
struct TYPE_2__ {int (* set_lcd_config ) (struct omap_overlay_manager*,struct dss_lcd_mgr_config const*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct omap_overlay_manager*,struct dss_lcd_mgr_config const*) ;

void FUNC_1(struct omap_overlay_manager *VAR_1,
  const struct dss_lcd_mgr_config *VAR_2)
{
 VAR_0->set_lcd_config(VAR_1, VAR_2);
}
