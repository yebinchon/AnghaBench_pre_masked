
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omapfb_colormode {scalar_t__ bits_per_pixel; int transp; int blue; int green; int red; } ;
struct TYPE_2__ {scalar_t__ length; } ;
struct fb_var_screeninfo {scalar_t__ bits_per_pixel; TYPE_1__ transp; TYPE_1__ blue; TYPE_1__ green; TYPE_1__ red; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,int *) ;

__attribute__((used)) static bool FUNC_1(struct fb_var_screeninfo *VAR_0,
  struct omapfb_colormode *VAR_1)
{
 if (VAR_0->bits_per_pixel == 0 ||
   VAR_0->red.length == 0 ||
   VAR_0->blue.length == 0 ||
   VAR_0->green.length == 0)
  return 0;

 return VAR_0->bits_per_pixel == VAR_1->bits_per_pixel &&
  FUNC_0(&VAR_0->red, &VAR_1->red) &&
  FUNC_0(&VAR_0->green, &VAR_1->green) &&
  FUNC_0(&VAR_0->blue, &VAR_1->blue) &&
  FUNC_0(&VAR_0->transp, &VAR_1->transp);
}
