
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct fb_var_screeninfo {int xres; int yres; int xres_virtual; int yres_virtual; int bits_per_pixel; void* transp; void* blue; void* green; void* red; void* pixclock; } ;
struct TYPE_7__ {int dclkmax; int dclkmin; } ;
struct fb_info {TYPE_1__ monspecs; struct au1200fb_device* par; } ;
struct au1200fb_device {int plane; int fb_len; } ;
struct TYPE_10__ {int control_base; } ;
struct TYPE_9__ {TYPE_2__* w; } ;
struct TYPE_8__ {int xres; int yres; int mode_winctrl1; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ,int) ;
 TYPE_4__* VAR_4 ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (char*,int) ;
 void*** VAR_5 ;
 TYPE_3__* VAR_6 ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct fb_var_screeninfo *VAR_7,
 struct fb_info *VAR_8)
{
 struct au1200fb_device *VAR_9 = VAR_8->par;
 u32 VAR_10;
 int VAR_11, VAR_12;

 VAR_12 = VAR_9->plane;



 VAR_7->xres = VAR_6->w[VAR_12].xres;
 VAR_7->yres = VAR_6->w[VAR_12].yres;


 VAR_7->xres_virtual = VAR_7->xres;
 VAR_7->yres_virtual = VAR_7->yres;

 VAR_7->bits_per_pixel = FUNC_7(VAR_6->w[VAR_12].mode_winctrl1);

 VAR_11 = VAR_7->xres_virtual * VAR_7->yres_virtual;
 if (VAR_7->bits_per_pixel > 8) VAR_11 *= (VAR_7->bits_per_pixel / 8);
 else VAR_11 /= (8/VAR_7->bits_per_pixel);

 if (VAR_9->fb_len < VAR_11)
  return -VAR_1;





 VAR_10 = FUNC_2((u32)(FUNC_1(VAR_7->pixclock) * 1000), VAR_8->monspecs.dclkmin);
 VAR_10 = FUNC_3(VAR_10, VAR_8->monspecs.dclkmax, (u32)VAR_0/2);

 if (VAR_0 % VAR_10) {
  int VAR_13 = VAR_0 % VAR_10;
  VAR_10 -= VAR_13;
 }

 VAR_7->pixclock = FUNC_0(VAR_10/1000);
 switch (VAR_7->bits_per_pixel) {
  case 16:
  {


   int VAR_14;
   VAR_14 = (VAR_6->w[0].mode_winctrl1 & VAR_3) >> 25;
   VAR_7->red = VAR_5[VAR_14][0];
   VAR_7->green = VAR_5[VAR_14][1];
   VAR_7->blue = VAR_5[VAR_14][2];
   VAR_7->transp = VAR_5[VAR_14][3];
   break;
  }

  case 32:
  {


   int VAR_15;
   VAR_15 = (VAR_6->w[0].mode_winctrl1 & VAR_3) >> 25;
   VAR_7->red = VAR_5[VAR_15][0];
   VAR_7->green = VAR_5[VAR_15][1];
   VAR_7->blue = VAR_5[VAR_15][2];
   VAR_7->transp = VAR_5[VAR_15][3];
   break;
  }
  default:
   FUNC_6("Unsupported depth %dbpp", VAR_7->bits_per_pixel);
   return -VAR_1;
 }

 return 0;
}
