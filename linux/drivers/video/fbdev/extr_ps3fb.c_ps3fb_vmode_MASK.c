
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fb_videomode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct fb_videomode const* VAR_5 ;
 struct fb_videomode const* FUNC_0 (int) ;

__attribute__((used)) static const struct fb_videomode *FUNC_1(int VAR_6)
{
 u32 VAR_7 = VAR_6 & VAR_3;

 if (VAR_7 < VAR_1 || VAR_7 > VAR_4)
  return ((void*)0);

 if (VAR_7 <= VAR_0 && !(VAR_6 & VAR_2)) {

  return &VAR_5[VAR_7 - 1];
 }

 return FUNC_0(VAR_7);
}
