
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct broadsheetfb_par {size_t panel_index; TYPE_3__* board; TYPE_2__* info; } ;
struct TYPE_8__ {int w; int h; int sdcfg; int gdcfg; int lutfmt; int fsynclen; int fendfbegin; int lsynclen; int lendlbegin; int pixclk; } ;
struct TYPE_7__ {int (* wait_for_rdy ) (struct broadsheetfb_par*) ;} ;
struct TYPE_5__ {int xres; int yres; } ;
struct TYPE_6__ {scalar_t__ screen_base; TYPE_1__ var; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct broadsheetfb_par*,int,int*) ;
 int FUNC_1 (struct broadsheetfb_par*,int ,int,int*) ;
 int FUNC_2 (struct broadsheetfb_par*,int ) ;
 int FUNC_3 (struct broadsheetfb_par*,int,int) ;
 int FUNC_4 (struct broadsheetfb_par*,int,int) ;
 TYPE_4__* VAR_10 ;
 int FUNC_5 (struct broadsheetfb_par*) ;

__attribute__((used)) static void FUNC_6(struct broadsheetfb_par *VAR_11)
{
 u16 VAR_12[5];
 int VAR_13 = VAR_11->info->var.xres;
 int VAR_14 = VAR_11->info->var.yres;

 VAR_12[0] = VAR_10[VAR_11->panel_index].w;
 VAR_12[1] = VAR_10[VAR_11->panel_index].h;
 VAR_12[2] = VAR_10[VAR_11->panel_index].sdcfg;
 VAR_12[3] = VAR_10[VAR_11->panel_index].gdcfg;
 VAR_12[4] = VAR_10[VAR_11->panel_index].lutfmt;
 FUNC_1(VAR_11, VAR_0, 5, VAR_12);


 FUNC_1(VAR_11, VAR_0, 5, VAR_12);

 VAR_12[0] = VAR_10[VAR_11->panel_index].fsynclen;
 VAR_12[1] = VAR_10[VAR_11->panel_index].fendfbegin;
 VAR_12[2] = VAR_10[VAR_11->panel_index].lsynclen;
 VAR_12[3] = VAR_10[VAR_11->panel_index].lendlbegin;
 VAR_12[4] = VAR_10[VAR_11->panel_index].pixclk;
 FUNC_1(VAR_11, VAR_1, 5, VAR_12);

 FUNC_4(VAR_11, 0x310, VAR_13*VAR_14*2);


 VAR_12[0] = 0x886;
 VAR_12[1] = 0;
 FUNC_1(VAR_11, VAR_4, 2, VAR_12);

 FUNC_2(VAR_11, VAR_6);

 FUNC_2(VAR_11, VAR_8);

 FUNC_3(VAR_11, 0x330, 0x84);

 FUNC_2(VAR_11, VAR_8);

 VAR_12[0] = (0x3 << 4);
 FUNC_1(VAR_11, VAR_2, 1, VAR_12);

 VAR_12[0] = 0x154;
 FUNC_1(VAR_11, VAR_9, 1, VAR_12);

 FUNC_0(VAR_11, (VAR_10[VAR_11->panel_index].w *
     VAR_10[VAR_11->panel_index].h)/2,
     (u16 *) VAR_11->info->screen_base);

 FUNC_2(VAR_11, VAR_3);

 VAR_12[0] = 0x4300;
 FUNC_1(VAR_11, VAR_5, 1, VAR_12);

 FUNC_2(VAR_11, VAR_8);

 FUNC_2(VAR_11, VAR_7);

 VAR_11->board->wait_for_rdy(VAR_11);
}
