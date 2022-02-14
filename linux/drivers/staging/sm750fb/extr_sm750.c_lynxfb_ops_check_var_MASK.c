
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct lynxfb_crtc {int vidmem_size; int line_pad; } ;
struct lynxfb_par {struct lynxfb_crtc crtc; } ;
struct TYPE_9__ {int length; int offset; } ;
struct TYPE_8__ {int offset; int length; } ;
struct TYPE_7__ {int offset; int length; } ;
struct TYPE_6__ {int offset; int length; } ;
struct fb_var_screeninfo {int bits_per_pixel; int height; int width; int xres_virtual; int yres_virtual; scalar_t__ accel_flags; TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; TYPE_1__ transp; int yres; int xres; } ;
struct TYPE_10__ {void* visual; } ;
struct fb_info {TYPE_5__ fix; struct lynxfb_par* par; } ;
typedef int resource_size_t ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (struct lynxfb_crtc*,struct fb_var_screeninfo*) ;
 int FUNC_2 (char*,int ,int ,int) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int FUNC_4(struct fb_var_screeninfo *VAR_4,
    struct fb_info *VAR_5)
{
 struct lynxfb_par *VAR_6;
 struct lynxfb_crtc *VAR_7;
 resource_size_t VAR_8;

 VAR_6 = VAR_5->par;
 VAR_7 = &VAR_6->crtc;

 FUNC_2("check var:%dx%d-%d\n",
   VAR_4->xres,
   VAR_4->yres,
   VAR_4->bits_per_pixel);

 switch (VAR_4->bits_per_pixel) {
 case 8:
  VAR_5->fix.visual = VAR_2;
  VAR_4->red.offset = 0;
  VAR_4->red.length = 8;
  VAR_4->green.offset = 0;
  VAR_4->green.length = 8;
  VAR_4->blue.offset = 0;
  VAR_4->blue.length = 8;
  VAR_4->transp.length = 0;
  VAR_4->transp.offset = 0;
  break;
 case 16:
  VAR_4->red.offset = 11;
  VAR_4->red.length = 5;
  VAR_4->green.offset = 5;
  VAR_4->green.length = 6;
  VAR_4->blue.offset = 0;
  VAR_4->blue.length = 5;
  VAR_4->transp.length = 0;
  VAR_4->transp.offset = 0;
  VAR_5->fix.visual = VAR_3;
  break;
 case 24:
 case 32:
  VAR_4->red.offset = 16;
  VAR_4->red.length = 8;
  VAR_4->green.offset = 8;
  VAR_4->green.length = 8;
  VAR_4->blue.offset = 0;
  VAR_4->blue.length = 8;
  VAR_5->fix.visual = VAR_3;
  break;
 default:
  FUNC_3("bpp %d not supported\n", VAR_4->bits_per_pixel);
  return -VAR_0;
 }
 VAR_4->height = VAR_4->width = -1;
 VAR_4->accel_flags = 0;


 VAR_8 = VAR_4->xres_virtual * (VAR_4->bits_per_pixel >> 3);


 VAR_8 = FUNC_0(VAR_8, VAR_7->line_pad);
 VAR_8 = VAR_8 * VAR_4->yres_virtual;
 if (VAR_7->vidmem_size < VAR_8) {
  FUNC_3("not enough video memory for mode\n");
  return -VAR_1;
 }

 return FUNC_1(VAR_7, VAR_4);
}
