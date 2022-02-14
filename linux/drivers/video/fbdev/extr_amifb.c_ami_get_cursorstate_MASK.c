
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_cursorstate {int mode; int yoffset; int xoffset; } ;
struct TYPE_2__ {int crsr_y; int crsr_x; } ;
struct amifb_par {TYPE_1__ crsr; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct fb_cursorstate *VAR_1,
          const struct amifb_par *VAR_2)
{
 VAR_1->xoffset = VAR_2->crsr.crsr_x;
 VAR_1->yoffset = VAR_2->crsr.crsr_y;
 VAR_1->mode = VAR_0;
 return 0;
}
