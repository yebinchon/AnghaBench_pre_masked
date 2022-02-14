
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct lynxfb_crtc {int dummy; } ;
struct lynxfb_par {int * pseudo_palette; struct lynxfb_crtc crtc; } ;
struct fb_var_screeninfo {int bits_per_pixel; int blue; int green; int red; scalar_t__ grayscale; } ;
struct TYPE_2__ {scalar_t__ visual; } ;
struct fb_info {TYPE_1__ fix; struct fb_var_screeninfo var; struct lynxfb_par* par; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (struct lynxfb_crtc*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (char*,unsigned int) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_3,
    unsigned int VAR_4,
    unsigned int VAR_5,
    unsigned int VAR_6,
    unsigned int VAR_7,
    struct fb_info *VAR_8)
{
 struct lynxfb_par *VAR_9;
 struct lynxfb_crtc *VAR_10;
 struct fb_var_screeninfo *VAR_11;
 int VAR_12;

 VAR_9 = VAR_8->par;
 VAR_10 = &VAR_9->crtc;
 VAR_11 = &VAR_8->var;
 VAR_12 = 0;

 if (VAR_3 > 256) {
  FUNC_2("regno = %d\n", VAR_3);
  return -VAR_0;
 }

 if (VAR_8->var.grayscale)
  VAR_4 = VAR_5 = VAR_6 = (VAR_4 * 77 + VAR_5 * 151 + VAR_6 * 28) >> 8;

 if (VAR_11->bits_per_pixel == 8 &&
     VAR_8->fix.visual == VAR_1) {
  VAR_4 >>= 8;
  VAR_5 >>= 8;
  VAR_6 >>= 8;
  VAR_12 = FUNC_1(VAR_10, VAR_3, VAR_4, VAR_5, VAR_6);
  goto exit;
 }

 if (VAR_8->fix.visual == VAR_2 && VAR_3 < 256) {
  u32 VAR_13;

  if (VAR_11->bits_per_pixel == 16 ||
      VAR_11->bits_per_pixel == 32 ||
      VAR_11->bits_per_pixel == 24) {
   VAR_13 = FUNC_0(VAR_4, &VAR_11->red);
   VAR_13 |= FUNC_0(VAR_5, &VAR_11->green);
   VAR_13 |= FUNC_0(VAR_6, &VAR_11->blue);
   VAR_9->pseudo_palette[VAR_3] = VAR_13;
   goto exit;
  }
 }

 VAR_12 = -VAR_0;

exit:
 return VAR_12;
}
