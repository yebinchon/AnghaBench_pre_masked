
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct lynxfb_output {int dummy; } ;
struct lynxfb_crtc {int line_pad; } ;
struct lynxfb_par {struct lynxfb_output output; struct lynxfb_crtc crtc; } ;
struct TYPE_8__ {int length; int offset; } ;
struct TYPE_7__ {int offset; int length; } ;
struct TYPE_6__ {int offset; int length; } ;
struct TYPE_5__ {int offset; int length; } ;
struct fb_var_screeninfo {int xres_virtual; int bits_per_pixel; int height; int width; scalar_t__ accel_flags; TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; TYPE_1__ transp; } ;
struct fb_fix_screeninfo {unsigned int line_length; void* visual; } ;
struct fb_info {struct fb_fix_screeninfo fix; struct fb_var_screeninfo var; struct lynxfb_par* par; } ;


 unsigned int FUNC_0 (unsigned int,int ) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (struct lynxfb_crtc*,struct fb_var_screeninfo*,struct fb_fix_screeninfo*) ;
 int FUNC_2 (struct lynxfb_output*,struct fb_var_screeninfo*,struct fb_fix_screeninfo*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct fb_info *VAR_3)
{
 struct lynxfb_par *VAR_4;
 struct lynxfb_crtc *VAR_5;
 struct lynxfb_output *VAR_6;
 struct fb_var_screeninfo *VAR_7;
 struct fb_fix_screeninfo *VAR_8;
 int VAR_9;
 unsigned int VAR_10;

 if (!VAR_3)
  return -VAR_0;

 VAR_9 = 0;
 VAR_4 = VAR_3->par;
 VAR_5 = &VAR_4->crtc;
 VAR_6 = &VAR_4->output;
 VAR_7 = &VAR_3->var;
 VAR_8 = &VAR_3->fix;


 VAR_10 = VAR_7->xres_virtual * VAR_7->bits_per_pixel / 8;
 VAR_10 = FUNC_0(VAR_10, VAR_5->line_pad);
 VAR_8->line_length = VAR_10;
 FUNC_4("fix->line_length = %d\n", VAR_8->line_length);






 switch (VAR_7->bits_per_pixel) {
 case 8:
  VAR_8->visual = VAR_1;
  VAR_7->red.offset = 0;
  VAR_7->red.length = 8;
  VAR_7->green.offset = 0;
  VAR_7->green.length = 8;
  VAR_7->blue.offset = 0;
  VAR_7->blue.length = 8;
  VAR_7->transp.length = 0;
  VAR_7->transp.offset = 0;
  break;
 case 16:
  VAR_7->red.offset = 11;
  VAR_7->red.length = 5;
  VAR_7->green.offset = 5;
  VAR_7->green.length = 6;
  VAR_7->blue.offset = 0;
  VAR_7->blue.length = 5;
  VAR_7->transp.length = 0;
  VAR_7->transp.offset = 0;
  VAR_8->visual = VAR_2;
  break;
 case 24:
 case 32:
  VAR_7->red.offset = 16;
  VAR_7->red.length = 8;
  VAR_7->green.offset = 8;
  VAR_7->green.length = 8;
  VAR_7->blue.offset = 0;
  VAR_7->blue.length = 8;
  VAR_8->visual = VAR_2;
  break;
 default:
  VAR_9 = -VAR_0;
  break;
 }
 VAR_7->height = VAR_7->width = -1;
 VAR_7->accel_flags = 0;

 if (VAR_9) {
  FUNC_3("pixel bpp format not satisfied\n.");
  return VAR_9;
 }
 VAR_9 = FUNC_1(VAR_5, VAR_7, VAR_8);
 if (!VAR_9)
  VAR_9 = FUNC_2(VAR_6, VAR_7, VAR_8);
 return VAR_9;
}
