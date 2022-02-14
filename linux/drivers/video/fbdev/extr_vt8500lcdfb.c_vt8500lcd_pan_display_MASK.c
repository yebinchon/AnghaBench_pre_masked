
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vt8500lcd_info {scalar_t__ regbase; } ;
struct fb_var_screeninfo {unsigned int xoffset; unsigned int yoffset; } ;
struct TYPE_4__ {unsigned int xres_virtual; unsigned int xres; } ;
struct TYPE_3__ {unsigned int line_length; } ;
struct fb_info {TYPE_2__ var; TYPE_1__ fix; } ;


 struct vt8500lcd_info* FUNC_0 (struct fb_info*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct fb_var_screeninfo *VAR_0,
    struct fb_info *VAR_1)
{
 unsigned VAR_2 = VAR_1->fix.line_length / VAR_1->var.xres_virtual;
 unsigned VAR_3 = VAR_2 * VAR_0->xoffset
        + VAR_1->fix.line_length * VAR_0->yoffset;
 struct vt8500lcd_info *VAR_4 = FUNC_0(VAR_1);

 FUNC_1((1 << 31)
      | (((VAR_1->var.xres_virtual - VAR_1->var.xres) * VAR_2 / 4) << 20)
      | (VAR_3 >> 2), VAR_4->regbase + 0x20);
 return 0;
}
