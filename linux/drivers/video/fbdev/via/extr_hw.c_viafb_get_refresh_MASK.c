
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fb_videomode {int refresh; } ;


 int FUNC_0 (int) ;
 struct fb_videomode* FUNC_1 (int,int,int) ;

int FUNC_2(int VAR_0, int VAR_1, u32 VAR_2)
{
 const struct fb_videomode *VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (!VAR_3)
  return 60;

 if (FUNC_0(VAR_3->refresh - VAR_2) > 3) {
  if (VAR_0 == 1200 && VAR_1 == 900)
   return 49;
  else
   return 60;
 }

 return VAR_3->refresh;
}
