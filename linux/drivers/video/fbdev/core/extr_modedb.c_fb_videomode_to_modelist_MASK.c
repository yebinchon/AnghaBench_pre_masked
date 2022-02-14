
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct fb_videomode {int dummy; } ;


 int FUNC_0 (struct list_head*) ;
 scalar_t__ FUNC_1 (struct fb_videomode const*,struct list_head*) ;

void FUNC_2(const struct fb_videomode *VAR_0, int VAR_1,
         struct list_head *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (FUNC_1(&VAR_0[VAR_3], VAR_2))
   return;
 }
}
