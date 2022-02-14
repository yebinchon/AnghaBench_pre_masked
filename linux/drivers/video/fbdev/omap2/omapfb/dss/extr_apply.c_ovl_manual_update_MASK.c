
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_overlay {int manager; } ;
struct TYPE_2__ {int stallmode; } ;
struct mgr_priv_data {TYPE_1__ lcd_config; } ;


 struct mgr_priv_data* FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct omap_overlay *VAR_0)
{
 struct mgr_priv_data *VAR_1 = FUNC_0(VAR_0->manager);

 return VAR_1->lcd_config.stallmode;
}
