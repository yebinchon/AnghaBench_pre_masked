
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vt8500lcd_info {scalar_t__ regbase; } ;
struct TYPE_12__ {int length; scalar_t__ msb_right; scalar_t__ offset; } ;
struct TYPE_10__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_9__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_8__ {scalar_t__ msb_right; scalar_t__ length; scalar_t__ offset; } ;
struct TYPE_11__ {int bits_per_pixel; int xres_virtual; int hsync_len; int left_margin; int xres; int right_margin; int vsync_len; int upper_margin; int yres; int lower_margin; TYPE_6__ blue; TYPE_4__ green; TYPE_3__ red; TYPE_2__ transp; } ;
struct TYPE_7__ {int line_length; int visual; } ;
struct fb_info {TYPE_5__ var; TYPE_1__ fix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 struct vt8500lcd_info* FUNC_1 (struct fb_info*) ;
 int FUNC_2 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_4)
{
 struct vt8500lcd_info *VAR_5 = FUNC_1(VAR_4);
 int VAR_6 = 5;
 int VAR_7;
 unsigned long VAR_8;

 if (!VAR_5)
  return -VAR_0;

 if (VAR_4->var.bits_per_pixel <= 8) {

  VAR_4->var.red.offset = 0;
  VAR_4->var.red.length = VAR_4->var.bits_per_pixel;
  VAR_4->var.red.msb_right = 0;

  VAR_4->var.green.offset = 0;
  VAR_4->var.green.length = VAR_4->var.bits_per_pixel;
  VAR_4->var.green.msb_right = 0;

  VAR_4->var.blue.offset = 0;
  VAR_4->var.blue.length = VAR_4->var.bits_per_pixel;
  VAR_4->var.blue.msb_right = 0;

  VAR_4->var.transp.offset = 0;
  VAR_4->var.transp.length = 0;
  VAR_4->var.transp.msb_right = 0;

  VAR_4->fix.visual = VAR_1;
  VAR_4->fix.line_length = VAR_4->var.xres_virtual /
      (8/VAR_4->var.bits_per_pixel);
 } else {

  VAR_4->var.transp.offset = 0;
  VAR_4->var.transp.length = 0;
  VAR_4->var.transp.msb_right = 0;

  if (VAR_4->var.bits_per_pixel == 16) {

   VAR_4->var.red.offset = 11;
   VAR_4->var.red.length = 5;
   VAR_4->var.red.msb_right = 0;
   VAR_4->var.green.offset = 5;
   VAR_4->var.green.length = 6;
   VAR_4->var.green.msb_right = 0;
   VAR_4->var.blue.offset = 0;
   VAR_4->var.blue.length = 5;
   VAR_4->var.blue.msb_right = 0;
  } else {

   VAR_4->var.red.offset = VAR_4->var.bits_per_pixel
       * 2 / 3;
   VAR_4->var.red.length = VAR_4->var.bits_per_pixel / 3;
   VAR_4->var.red.msb_right = 0;
   VAR_4->var.green.offset = VAR_4->var.bits_per_pixel / 3;
   VAR_4->var.green.length = VAR_4->var.bits_per_pixel / 3;
   VAR_4->var.green.msb_right = 0;
   VAR_4->var.blue.offset = 0;
   VAR_4->var.blue.length = VAR_4->var.bits_per_pixel / 3;
   VAR_4->var.blue.msb_right = 0;
  }

  VAR_4->fix.visual = VAR_2;
  VAR_4->fix.line_length = VAR_4->var.bits_per_pixel > 16 ?
     VAR_4->var.xres_virtual << 2 :
     VAR_4->var.xres_virtual << 1;
 }

 for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
  if (VAR_3[VAR_7] == VAR_4->var.bits_per_pixel)
   VAR_6 = VAR_7;
 }

 VAR_8 = FUNC_0(VAR_5->regbase) & ~0xf;
 FUNC_2(0, VAR_5->regbase);
 while (FUNC_0(VAR_5->regbase + 0x38) & 0x10)
            ;
 FUNC_2((((VAR_4->var.hsync_len - 1) & 0x3f) << 26)
  | ((VAR_4->var.left_margin & 0xff) << 18)
  | (((VAR_4->var.xres - 1) & 0x3ff) << 8)
  | (VAR_4->var.right_margin & 0xff), VAR_5->regbase + 0x4);
 FUNC_2((((VAR_4->var.vsync_len - 1) & 0x3f) << 26)
  | ((VAR_4->var.upper_margin & 0xff) << 18)
  | (((VAR_4->var.yres - 1) & 0x3ff) << 8)
  | (VAR_4->var.lower_margin & 0xff), VAR_5->regbase + 0x8);
 FUNC_2((((VAR_4->var.yres - 1) & 0x400) << 2)
  | ((VAR_4->var.xres - 1) & 0x400), VAR_5->regbase + 0x10);
 FUNC_2(0x80000000, VAR_5->regbase + 0x20);
 FUNC_2(VAR_8 | (VAR_6 << 1) | 0x100, VAR_5->regbase);

 return 0;
}
