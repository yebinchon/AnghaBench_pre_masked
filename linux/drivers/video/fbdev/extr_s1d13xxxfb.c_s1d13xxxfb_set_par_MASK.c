
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct s1d13xxxfb_par {int display; } ;
struct TYPE_4__ {int line_length; } ;
struct TYPE_3__ {int bits_per_pixel; int xres; } ;
struct fb_info {TYPE_2__ fix; TYPE_1__ var; struct s1d13xxxfb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 unsigned int FUNC_1 (struct s1d13xxxfb_par*,int ) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (struct fb_info*) ;
 int FUNC_4 (struct s1d13xxxfb_par*,int ,unsigned int) ;

__attribute__((used)) static int
FUNC_5(struct fb_info *VAR_3)
{
 struct s1d13xxxfb_par *VAR_4 = VAR_3->par;
 unsigned int VAR_5;

 FUNC_0("s1d13xxxfb_set_par: bpp=%d\n", VAR_3->var.bits_per_pixel);

 if ((VAR_4->display & 0x01))
  VAR_5 = FUNC_1(VAR_4, VAR_2);
 else
  VAR_5 = FUNC_1(VAR_4, VAR_1);

 VAR_5 &= ~0x07;

 switch (VAR_3->var.bits_per_pixel) {
  case 4:
   FUNC_0("pseudo colour 4\n");
   FUNC_2(VAR_3);
   VAR_5 |= 2;
   break;
  case 8:
   FUNC_0("pseudo colour 8\n");
   FUNC_2(VAR_3);
   VAR_5 |= 3;
   break;
  case 16:
   FUNC_0("true colour\n");
   FUNC_3(VAR_3);
   VAR_5 |= 5;
   break;

  default:
   FUNC_0("bpp not supported!\n");
   return -VAR_0;
 }

 FUNC_0("writing %02x to display mode register\n", VAR_5);

 if ((VAR_4->display & 0x01))
  FUNC_4(VAR_4, VAR_2, VAR_5);
 else
  FUNC_4(VAR_4, VAR_1, VAR_5);

 VAR_3->fix.line_length = VAR_3->var.xres * VAR_3->var.bits_per_pixel;
 VAR_3->fix.line_length /= 8;

 FUNC_0("setting line_length to %d\n", VAR_3->fix.line_length);

 FUNC_0("done setup\n");

 return 0;
}
