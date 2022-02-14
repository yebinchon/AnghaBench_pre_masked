
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_cursorstate {int mode; int yoffset; int xoffset; } ;
struct TYPE_2__ {int crsr_y; int crsr_x; } ;
struct amifb_par {TYPE_1__ crsr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct fb_cursorstate *VAR_4,
          struct amifb_par *VAR_5)
{
 VAR_5->crsr.crsr_x = VAR_4->xoffset;
 VAR_5->crsr.crsr_y = VAR_4->yoffset;
 if ((VAR_1 = VAR_4->mode) == VAR_0)
  VAR_2 = -1;
 VAR_3 = 1;
 return 0;
}
