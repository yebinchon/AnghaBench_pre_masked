
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_fix_cursorinfo {int crsr_color1; int crsr_color2; int crsr_ysize; int crsr_height; int crsr_xsize; int crsr_width; } ;
struct TYPE_2__ {int height; int width; } ;
struct amifb_par {TYPE_1__ crsr; } ;



__attribute__((used)) static int FUNC_0(struct fb_fix_cursorinfo *VAR_0,
      const struct amifb_par *VAR_1)
{
 VAR_0->crsr_width = VAR_0->crsr_xsize = VAR_1->crsr.width;
 VAR_0->crsr_height = VAR_0->crsr_ysize = VAR_1->crsr.height;
 VAR_0->crsr_color1 = 17;
 VAR_0->crsr_color2 = 18;
 return 0;
}
