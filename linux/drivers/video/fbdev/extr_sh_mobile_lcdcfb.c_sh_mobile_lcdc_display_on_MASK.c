
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sh_mobile_lcdc_panel_cfg {int (* display_on ) () ;} ;
struct sh_mobile_lcdc_chan {TYPE_1__* info; TYPE_4__* tx_dev; TYPE_2__* cfg; } ;
struct TYPE_8__ {TYPE_3__* ops; } ;
struct TYPE_7__ {int (* display_on ) (TYPE_4__*) ;} ;
struct TYPE_6__ {struct sh_mobile_lcdc_panel_cfg panel_cfg; } ;
struct TYPE_5__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct sh_mobile_lcdc_chan *VAR_2)
{
 const struct sh_mobile_lcdc_panel_cfg *VAR_3 = &VAR_2->cfg->panel_cfg;

 if (VAR_2->tx_dev) {
  int VAR_4;

  VAR_4 = VAR_2->tx_dev->ops->display_on(VAR_2->tx_dev);
  if (VAR_4 < 0)
   return;

  if (VAR_4 == VAR_1)
   VAR_2->info->state = VAR_0;
 }


 if (VAR_3->display_on)
  VAR_3->display_on();
}
