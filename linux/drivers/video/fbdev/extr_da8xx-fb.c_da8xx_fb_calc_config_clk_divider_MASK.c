
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_videomode {int pixclock; } ;
struct da8xx_fb_par {int dummy; } ;


 unsigned int FUNC_0 (struct da8xx_fb_par*,int ,unsigned int*) ;
 int FUNC_1 (struct da8xx_fb_par*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct da8xx_fb_par *VAR_0,
         struct fb_videomode *VAR_1)
{
 unsigned VAR_2;
 unsigned VAR_3 = FUNC_0(VAR_0, VAR_1->pixclock,
         &VAR_2);

 return FUNC_1(VAR_0, VAR_3, VAR_2);
}
