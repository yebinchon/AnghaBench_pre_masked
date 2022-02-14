
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fb_var_screeninfo {int sync; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static u8 FUNC_0(struct fb_var_screeninfo *VAR_4)
{
 u8 VAR_5 = 0;

 if (!(VAR_4->sync & VAR_0))
  VAR_5 |= VAR_2;
 if (!(VAR_4->sync & VAR_1))
  VAR_5 |= VAR_3;
 return VAR_5;
}
