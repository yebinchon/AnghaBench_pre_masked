
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_videomode {int xres; int yres; scalar_t__ refresh; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static const struct fb_videomode *FUNC_1(
 const struct fb_videomode *VAR_0, int VAR_1,
 int VAR_2, int VAR_3, int VAR_4)
{
 const struct fb_videomode *VAR_5 = ((void*)0);
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (VAR_0[VAR_6].xres != VAR_2 || VAR_0[VAR_6].yres != VAR_3)
   continue;

  if (!VAR_5 || FUNC_0(VAR_0[VAR_6].refresh - VAR_4) <
   FUNC_0(VAR_5->refresh - VAR_4))
   VAR_5 = &VAR_0[VAR_6];
 }

 return VAR_5;
}
