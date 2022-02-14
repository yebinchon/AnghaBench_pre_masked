
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
struct panel_settings {int mode_clkcontrol; int lcdclk; int mode_screen; int mode_horztiming; int mode_verttiming; int mode_pwmdiv; int mode_pwmhi; int mode_outmask; int mode_fifoctrl; int Yres; int Xres; int name; } ;
struct clk {int dummy; } ;
struct au1200fb_platdata {int (* panel_init ) () ;int (* panel_shutdown ) () ;} ;
struct TYPE_7__ {int cursorctrl; int cursorpos; int cursorcolor0; int cursorcolor1; int cursorcolor2; int cursorcolor3; } ;
struct TYPE_10__ {int winenable; int screen; int intstatus; int horztiming; int verttiming; int clkcontrol; int pwmdiv; int pwmhi; int outmask; int fifoctrl; int intenable; int backcolor; int colorkey; int colorkeymsk; TYPE_2__ hwc; TYPE_1__* window; } ;
struct TYPE_9__ {int mode_backcolor; int mode_colorkey; int mode_colorkeymsk; TYPE_3__* w; } ;
struct TYPE_8__ {int ypos; int xpos; } ;
struct TYPE_6__ {int winctrl0; int winctrl1; int winctrl2; int winbuf0; int winbuf1; int winbufctrl; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct clk*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int,int ,int ) ;
 struct clk* FUNC_3 (int *,char*) ;
 int FUNC_4 (struct clk*) ;
 int FUNC_5 (struct clk*) ;
 long FUNC_6 (struct clk*,long) ;
 int FUNC_7 (struct clk*,long) ;
 int VAR_4 ;
 TYPE_5__* VAR_5 ;
 struct panel_settings* VAR_6 ;
 int FUNC_8 (char*,int ,int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 TYPE_4__* VAR_7 ;
 int FUNC_11 () ;

__attribute__((used)) static void FUNC_12(struct panel_settings *VAR_8,
       struct au1200fb_platdata *VAR_9)
{



 uint32 VAR_10;


 VAR_10 = VAR_5->winenable;
 VAR_5->winenable = 0;
 FUNC_11();



 if (VAR_5->screen & VAR_3) {

  VAR_5->intstatus = VAR_2;
  while ((VAR_5->intstatus & VAR_2) == 0)
   ;

  VAR_5->screen &= ~VAR_3;

  do {
   VAR_5->intstatus = VAR_5->intstatus;
   FUNC_11();

  } while ((VAR_5->intstatus & VAR_1) == 0);






  if (VAR_9->panel_shutdown)
   VAR_9->panel_shutdown();
 }


 if (VAR_8 == ((void*)0))
  return;

 VAR_6 = VAR_8;

 FUNC_8("Panel(%s), %dx%d\n", VAR_6->name, VAR_6->Xres, VAR_6->Yres);




 if (!(VAR_6->mode_clkcontrol & VAR_0))
 {
  struct clk *VAR_11 = FUNC_3(((void*)0), "lcd_intclk");
  long VAR_12, VAR_13 = VAR_6->lcdclk * 1000000;

  if (!FUNC_1(VAR_11)) {
   VAR_12 = FUNC_6(VAR_11, VAR_13);
   if ((VAR_13 - VAR_12) < (VAR_13 / 10)) {
    FUNC_7(VAR_11, VAR_12);
    FUNC_4(VAR_11);
   }
   FUNC_5(VAR_11);
  }
 }




 VAR_5->screen = VAR_6->mode_screen;
 VAR_5->horztiming = VAR_6->mode_horztiming;
 VAR_5->verttiming = VAR_6->mode_verttiming;
 VAR_5->clkcontrol = VAR_6->mode_clkcontrol;
 VAR_5->pwmdiv = VAR_6->mode_pwmdiv;
 VAR_5->pwmhi = VAR_6->mode_pwmhi;
 VAR_5->outmask = VAR_6->mode_outmask;
 VAR_5->fifoctrl = VAR_6->mode_fifoctrl;
 FUNC_11();
 VAR_5->winenable = VAR_10;




 VAR_5->screen |= VAR_3;
 FUNC_11();


 if (VAR_9->panel_init)
  VAR_9->panel_init();


 VAR_5->intenable = 0;
 VAR_5->intstatus = ~0;
 VAR_5->backcolor = VAR_7->mode_backcolor;


 VAR_5->colorkey = VAR_7->mode_colorkey;
 VAR_5->colorkeymsk = VAR_7->mode_colorkeymsk;


 VAR_5->hwc.cursorctrl = 0;
 VAR_5->hwc.cursorpos = 0;
 VAR_5->hwc.cursorcolor0 = 0;
 VAR_5->hwc.cursorcolor1 = 0;
 VAR_5->hwc.cursorcolor2 = 0;
 VAR_5->hwc.cursorcolor3 = 0;
}
