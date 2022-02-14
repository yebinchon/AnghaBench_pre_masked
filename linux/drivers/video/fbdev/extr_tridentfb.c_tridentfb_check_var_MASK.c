
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tridentfb_par {int chip_id; scalar_t__ flatpanel; } ;
struct TYPE_4__ {int offset; int length; } ;
struct fb_var_screeninfo {int bits_per_pixel; int xres; int xres_virtual; int yres; int yres_virtual; int pixclock; TYPE_2__ blue; TYPE_2__ green; TYPE_2__ red; } ;
struct TYPE_3__ {int smem_len; } ;
struct fb_info {int flags; TYPE_1__ fix; struct tridentfb_par* par; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;



 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct fb_var_screeninfo *VAR_3,
          struct fb_info *VAR_4)
{
 struct tridentfb_par *VAR_5 = VAR_4->par;
 int VAR_6 = VAR_3->bits_per_pixel;
 int VAR_7;
 int VAR_8 = 230000;
 FUNC_1("enter\n");


 if (VAR_6 == 24)
  VAR_6 = VAR_3->bits_per_pixel = 32;
 if (VAR_6 != 8 && VAR_6 != 16 && VAR_6 != 32)
  return -VAR_0;
 if (VAR_5->chip_id == 129 && VAR_6 == 32)
  return -VAR_0;

 if (VAR_5->flatpanel && VAR_2 && VAR_3->xres > VAR_2)
  return -VAR_0;

 VAR_3->xres = (VAR_3->xres + 7) & ~0x7;
 if (VAR_3->xres > VAR_3->xres_virtual)
  VAR_3->xres_virtual = VAR_3->xres;
 if (VAR_3->yres > VAR_3->yres_virtual)
  VAR_3->yres_virtual = VAR_3->yres;
 if (VAR_3->xres_virtual > 4095 || VAR_3->yres > 2048)
  return -VAR_0;

 if (VAR_3->yres_virtual > 0xffff)
  return -VAR_0;
 VAR_7 = VAR_3->xres_virtual * VAR_6 / 8;

 if (!FUNC_2(VAR_5->chip_id) &&
     !(VAR_4->flags & VAR_1)) {

  if (VAR_7 <= 512)
   VAR_3->xres_virtual = 512 * 8 / VAR_6;
  else if (VAR_7 <= 1024)
   VAR_3->xres_virtual = 1024 * 8 / VAR_6;
  else if (VAR_7 <= 2048)
   VAR_3->xres_virtual = 2048 * 8 / VAR_6;
  else if (VAR_7 <= 4096)
   VAR_3->xres_virtual = 4096 * 8 / VAR_6;
  else if (VAR_7 <= 8192)
   VAR_3->xres_virtual = 8192 * 8 / VAR_6;
  else
   return -VAR_0;

  VAR_7 = VAR_3->xres_virtual * VAR_6 / 8;
 }


 if (VAR_7 * (VAR_3->yres_virtual - VAR_3->yres) > (4 << 20))
  VAR_3->yres_virtual = ((4 << 20) / VAR_7) + VAR_3->yres;

 if (VAR_7 * VAR_3->yres_virtual > VAR_4->fix.smem_len)
  return -VAR_0;

 switch (VAR_6) {
 case 8:
  VAR_3->red.offset = 0;
  VAR_3->red.length = 8;
  VAR_3->green = VAR_3->red;
  VAR_3->blue = VAR_3->red;
  break;
 case 16:
  VAR_3->red.offset = 11;
  VAR_3->green.offset = 5;
  VAR_3->blue.offset = 0;
  VAR_3->red.length = 5;
  VAR_3->green.length = 6;
  VAR_3->blue.length = 5;
  break;
 case 32:
  VAR_3->red.offset = 16;
  VAR_3->green.offset = 8;
  VAR_3->blue.offset = 0;
  VAR_3->red.length = 8;
  VAR_3->green.length = 8;
  VAR_3->blue.length = 8;
  break;
 default:
  return -VAR_0;
 }

 if (FUNC_3(VAR_5->chip_id))
  VAR_8 = 350000;

 switch (VAR_5->chip_id) {
 case 129:
  VAR_8 = (VAR_6 >= 16) ? 45000 : 90000;
  break;
 case 134:
 case 128:
  VAR_8 = 135000;
  break;
 case 130:
 case 131:
 case 133:
 case 132:
  VAR_8 = 170000;
  break;
 }


 if (VAR_6 == 32)
  VAR_8 /= 2;

 if (FUNC_0(VAR_3->pixclock) > VAR_8)
  return -VAR_0;

 FUNC_1("exit\n");

 return 0;

}
