
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ smem_start; } ;
struct fb_info {TYPE_1__ fix; struct amifb_par* par; } ;
struct amifb_par {short clk_shift; int vmode; short xoffset; short diwstrt_h; short xres; short next_line; short ddfstrt; short ddfstop; short bpl2mod; int bplcon0; int fmode; short bpl1mod; int yoffset; int vyres; int yres; int diwstrt_v; scalar_t__ bplpt0; scalar_t__ bplpt0wrap; int bplcon1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 short FUNC_0 (short) ;
 short FUNC_1 (short,short) ;
 int FUNC_2 (short) ;
 int VAR_5 ;
 short VAR_6 ;
 scalar_t__ FUNC_3 (int) ;
 short FUNC_4 (short,short) ;
 short FUNC_5 (short) ;
 short FUNC_6 (short,short) ;

__attribute__((used)) static void FUNC_7(struct fb_info *VAR_7)
{
 struct amifb_par *VAR_8 = VAR_7->par;
 short VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;

 VAR_9 = VAR_8->clk_shift;

 if (!(VAR_8->vmode & VAR_1))
  VAR_8->xoffset = FUNC_6(16 << VAR_5, VAR_8->xoffset);

 VAR_14 = 16 << VAR_5 << VAR_9;
 VAR_10 = FUNC_4(16 << VAR_5, VAR_8->xoffset);
 VAR_11 = VAR_8->diwstrt_h - (VAR_10 << VAR_9) - 4;
 VAR_12 = (VAR_8->xres + VAR_10) << VAR_9;
 VAR_15 = FUNC_4(VAR_14, VAR_11);
 VAR_16 = FUNC_1(2 << VAR_5, FUNC_0(VAR_8->xoffset));
 if (VAR_5 + VAR_9 > 1) {
  VAR_11 = FUNC_1(VAR_14, VAR_11) - 64;
  VAR_12 = FUNC_6(VAR_14, VAR_12);
  VAR_13 = VAR_11 + VAR_12 - VAR_14;
 } else {
  VAR_17 = VAR_11 = FUNC_1(VAR_14, VAR_11) - VAR_14;
  VAR_13 = VAR_11 + FUNC_6(VAR_14, VAR_12) - 64;
  VAR_12 = FUNC_5(VAR_12);
  VAR_11 = VAR_13 - VAR_12 + 64;
  if (VAR_11 < VAR_6) {
   VAR_13 += VAR_6 - VAR_11;
   VAR_11 = VAR_6;
  }
  VAR_16 = VAR_16 - FUNC_0((VAR_17 - VAR_11)>>VAR_9);
 }
 VAR_17 = VAR_8->next_line - FUNC_0(VAR_12>>VAR_9);
 VAR_8->ddfstrt = VAR_11;
 VAR_8->ddfstop = VAR_13;
 VAR_8->bplcon1 = FUNC_2(VAR_15);
 VAR_8->bpl2mod = VAR_17;
 if (VAR_8->bplcon0 & VAR_0)
  VAR_8->bpl2mod += VAR_8->next_line;
 if (VAR_4 && (VAR_8->fmode & VAR_3))
  VAR_8->bpl1mod = -FUNC_0(VAR_12>>VAR_9);
 else
  VAR_8->bpl1mod = VAR_8->bpl2mod;

 if (VAR_8->yoffset) {
  VAR_8->bplpt0 = VAR_7->fix.smem_start +
         VAR_8->next_line * VAR_8->yoffset + VAR_16;
  if (VAR_8->vmode & VAR_2) {
   if (VAR_8->yoffset > VAR_8->vyres - VAR_8->yres) {
    VAR_8->bplpt0wrap = VAR_7->fix.smem_start + VAR_16;
    if (VAR_8->bplcon0 & VAR_0 &&
        FUNC_3(VAR_8->diwstrt_v + VAR_8->vyres -
      VAR_8->yoffset))
     VAR_8->bplpt0wrap += VAR_8->next_line;
   }
  }
 } else
  VAR_8->bplpt0 = VAR_7->fix.smem_start + VAR_16;

 if (VAR_8->bplcon0 & VAR_0 && FUNC_3(VAR_8->diwstrt_v))
  VAR_8->bplpt0 += VAR_8->next_line;
}
