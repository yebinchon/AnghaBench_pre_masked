
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct fb_var_screeninfo {int yoffset; scalar_t__ xoffset; } ;
struct TYPE_5__ {int line_length; } ;
struct TYPE_4__ {int yoffset; scalar_t__ xoffset; } ;
struct fb_info {TYPE_2__ fix; TYPE_1__ var; } ;
struct au1100fb_device {TYPE_3__* regs; int panel; } ;
struct TYPE_6__ {int lcd_dmaaddr0; int lcd_dmaaddr1; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 struct au1100fb_device* FUNC_3 (struct fb_info*) ;

int FUNC_4(struct fb_var_screeninfo *VAR_1, struct fb_info *VAR_2)
{
 struct au1100fb_device *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_2);

 FUNC_2("fb_pan_display %p %p", VAR_1, VAR_2);

 if (!VAR_1 || !VAR_3) {
  return -VAR_0;
 }

 if (VAR_1->xoffset - VAR_2->var.xoffset) {

  return -VAR_0;
 }

 FUNC_2("fb_pan_display 2 %p %p", VAR_1, VAR_2);
 VAR_4 = VAR_1->yoffset - VAR_2->var.yoffset;
 if (VAR_4) {

  u32 VAR_5;

  FUNC_2("Panning screen of %d lines", VAR_4);

  VAR_5 = VAR_3->regs->lcd_dmaaddr0;
  VAR_5 += (VAR_2->fix.line_length * VAR_4);


  VAR_3->regs->lcd_dmaaddr0 = FUNC_0(VAR_5);

  if (FUNC_1(VAR_3->panel)) {
   VAR_5 = VAR_3->regs->lcd_dmaaddr1;
   VAR_5 += (VAR_2->fix.line_length * VAR_4);
   VAR_3->regs->lcd_dmaaddr0 = FUNC_0(VAR_5);
 }
 }
 FUNC_2("fb_pan_display 3 %p %p", VAR_1, VAR_2);

 return 0;
}
