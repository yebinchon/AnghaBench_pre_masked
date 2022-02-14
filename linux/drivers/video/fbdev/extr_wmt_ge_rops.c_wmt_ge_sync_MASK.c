
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;

int FUNC_2(struct fb_info *VAR_3)
{
 int VAR_4 = 5000000;
 while ((FUNC_1(VAR_2 + VAR_1) & 4) && --VAR_4)
  FUNC_0();
 return VAR_4 > 0 ? 0 : -VAR_0;
}
