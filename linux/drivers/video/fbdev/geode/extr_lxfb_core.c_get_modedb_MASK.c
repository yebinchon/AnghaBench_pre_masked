
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_videomode {int dummy; } ;


 unsigned int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct fb_videomode **VAR_2, unsigned int *VAR_3)
{
 if (FUNC_1()) {
  *VAR_2 = (struct fb_videomode *) VAR_1;
  *VAR_3 = FUNC_0(VAR_1);
 } else {
  *VAR_2 = (struct fb_videomode *) VAR_0;
  *VAR_3 = FUNC_0(VAR_0);
 }
}
