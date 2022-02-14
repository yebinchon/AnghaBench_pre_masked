
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_mobile_lcdc_panel_cfg {int (* start_transfer ) (struct sh_mobile_lcdc_chan*,int *) ;} ;
struct sh_mobile_lcdc_chan {int sglist; TYPE_2__* lcdc; TYPE_1__* cfg; } ;
struct list_head {int dummy; } ;
struct fb_info {struct sh_mobile_lcdc_chan* par; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct sh_mobile_lcdc_panel_cfg panel_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned int,int ) ;
 int FUNC_1 (int ,int ,unsigned int,int ) ;
 int FUNC_2 (struct sh_mobile_lcdc_chan*,int ,int ) ;
 int FUNC_3 (struct list_head*) ;
 int FUNC_4 (TYPE_2__*) ;
 unsigned int FUNC_5 (struct fb_info*,struct list_head*) ;
 int VAR_3 ;
 int FUNC_6 (struct sh_mobile_lcdc_chan*,int *) ;
 int FUNC_7 (struct sh_mobile_lcdc_chan*,int *) ;

__attribute__((used)) static void FUNC_8(struct fb_info *VAR_4,
           struct list_head *VAR_5)
{
 struct sh_mobile_lcdc_chan *VAR_6 = VAR_4->par;
 const struct sh_mobile_lcdc_panel_cfg *VAR_7 = &VAR_6->cfg->panel_cfg;


 FUNC_4(VAR_6->lcdc);
 if (!FUNC_3(VAR_5)) {
  unsigned int VAR_8 = FUNC_5(VAR_4, VAR_5);


  FUNC_0(VAR_6->lcdc->dev, VAR_6->sglist, VAR_8, VAR_0);
  if (VAR_7->start_transfer)
   VAR_7->start_transfer(VAR_6, &VAR_3);
  FUNC_2(VAR_6, VAR_1, VAR_2);
  FUNC_1(VAR_6->lcdc->dev, VAR_6->sglist, VAR_8,
        VAR_0);
 } else {
  if (VAR_7->start_transfer)
   VAR_7->start_transfer(VAR_6, &VAR_3);
  FUNC_2(VAR_6, VAR_1, VAR_2);
 }
}
