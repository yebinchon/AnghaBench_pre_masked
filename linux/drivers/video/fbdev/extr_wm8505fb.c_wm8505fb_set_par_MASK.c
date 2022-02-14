
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wm8505fb_info {int contrast; scalar_t__ regbase; } ;
struct TYPE_8__ {int length; scalar_t__ msb_right; scalar_t__ offset; } ;
struct TYPE_7__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_6__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_10__ {int bits_per_pixel; int xres_virtual; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;
struct TYPE_9__ {int line_length; void* visual; } ;
struct fb_info {TYPE_5__ var; TYPE_4__ fix; } ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 struct wm8505fb_info* FUNC_0 (struct fb_info*) ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_3)
{
 struct wm8505fb_info *VAR_4 = FUNC_0(VAR_3);

 if (!VAR_4)
  return -VAR_0;

 if (VAR_3->var.bits_per_pixel == 32) {
  VAR_3->var.red.offset = 16;
  VAR_3->var.red.length = 8;
  VAR_3->var.red.msb_right = 0;
  VAR_3->var.green.offset = 8;
  VAR_3->var.green.length = 8;
  VAR_3->var.green.msb_right = 0;
  VAR_3->var.blue.offset = 0;
  VAR_3->var.blue.length = 8;
  VAR_3->var.blue.msb_right = 0;
  VAR_3->fix.visual = VAR_1;
  VAR_3->fix.line_length = VAR_3->var.xres_virtual << 2;
 } else if (VAR_3->var.bits_per_pixel == 16) {
  VAR_3->var.red.offset = 11;
  VAR_3->var.red.length = 5;
  VAR_3->var.red.msb_right = 0;
  VAR_3->var.green.offset = 5;
  VAR_3->var.green.length = 6;
  VAR_3->var.green.msb_right = 0;
  VAR_3->var.blue.offset = 0;
  VAR_3->var.blue.length = 5;
  VAR_3->var.blue.msb_right = 0;
  VAR_3->fix.visual = VAR_1;
  VAR_3->fix.line_length = VAR_3->var.xres_virtual << 1;
 }

 FUNC_1(VAR_3);

 FUNC_2(VAR_4->contrast<<16 | VAR_4->contrast<<8 | VAR_4->contrast,
  VAR_4->regbase + VAR_2);

 return 0;
}
