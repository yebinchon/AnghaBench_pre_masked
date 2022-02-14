
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sh_mobile_lcdc_panel_cfg {int (* display_off ) () ;} ;
struct sh_mobile_lcdc_chan {TYPE_3__* tx_dev; TYPE_1__* cfg; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int (* display_off ) (TYPE_3__*) ;} ;
struct TYPE_4__ {struct sh_mobile_lcdc_panel_cfg panel_cfg; } ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(struct sh_mobile_lcdc_chan *VAR_0)
{
 const struct sh_mobile_lcdc_panel_cfg *VAR_1 = &VAR_0->cfg->panel_cfg;

 if (VAR_1->display_off)
  VAR_1->display_off();

 if (VAR_0->tx_dev)
  VAR_0->tx_dev->ops->display_off(VAR_0->tx_dev);
}
