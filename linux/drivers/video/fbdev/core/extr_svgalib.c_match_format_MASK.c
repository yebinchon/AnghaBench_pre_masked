
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ length; } ;
struct TYPE_14__ {scalar_t__ length; } ;
struct TYPE_12__ {scalar_t__ length; } ;
struct TYPE_10__ {scalar_t__ length; } ;
struct svga_fb_format {scalar_t__ bits_per_pixel; scalar_t__ nonstd; TYPE_8__ transp; TYPE_6__ blue; TYPE_4__ green; TYPE_2__ red; } ;
struct TYPE_15__ {scalar_t__ length; } ;
struct TYPE_13__ {scalar_t__ length; } ;
struct TYPE_11__ {scalar_t__ length; } ;
struct TYPE_9__ {scalar_t__ length; } ;
struct fb_var_screeninfo {scalar_t__ bits_per_pixel; scalar_t__ nonstd; TYPE_7__ transp; TYPE_5__ blue; TYPE_3__ green; TYPE_1__ red; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0(const struct svga_fb_format *VAR_2,
          struct fb_var_screeninfo *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = -VAR_0;

 while (VAR_2->bits_per_pixel != VAR_1)
 {
  if ((VAR_3->bits_per_pixel == VAR_2->bits_per_pixel) &&
      (VAR_3->red.length <= VAR_2->red.length) &&
      (VAR_3->green.length <= VAR_2->green.length) &&
      (VAR_3->blue.length <= VAR_2->blue.length) &&
      (VAR_3->transp.length <= VAR_2->transp.length) &&
      (VAR_3->nonstd == VAR_2->nonstd))
   return VAR_4;
  if (VAR_3->bits_per_pixel == VAR_2->bits_per_pixel)
   VAR_5 = VAR_4;
  VAR_4++;
  VAR_2++;
 }
 return VAR_5;
}
