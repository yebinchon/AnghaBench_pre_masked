
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_videomode {int xres; int yres; int pixclock; } ;
struct fb_info {int dummy; } ;


 int FUNC_0 (char*,int,int,...) ;

__attribute__((used)) static int FUNC_1(struct fb_videomode *VAR_0,
  struct fb_info *VAR_1)
{
 if ((VAR_0->xres * VAR_0->yres) > (2048 * 1152)) {
  FUNC_0("%dx%d too many pixels",
         VAR_0->xres, VAR_0->yres);
  return 0;
 }

 if (VAR_0->pixclock < 5000) {
  FUNC_0("%dx%d %dps pixel clock too fast",
         VAR_0->xres, VAR_0->yres, VAR_0->pixclock);
  return 0;
 }

 FUNC_0("%dx%d (pixclk %dps %dMHz) valid mode", VAR_0->xres, VAR_0->yres,
  VAR_0->pixclock, (1000000 / VAR_0->pixclock));
 return 1;
}
