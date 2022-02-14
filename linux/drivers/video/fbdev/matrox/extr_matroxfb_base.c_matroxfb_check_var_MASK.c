
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct matrox_fb_info {scalar_t__ dead; } ;
struct fb_var_screeninfo {int dummy; } ;
struct fb_info {int dummy; } ;


 int VAR_0 ;
 struct matrox_fb_info* FUNC_0 (struct fb_info*) ;
 int FUNC_1 (struct matrox_fb_info*,struct fb_var_screeninfo*,int*,int*,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct fb_var_screeninfo *VAR_1, struct fb_info *VAR_2)
{
 int VAR_3;
 int VAR_4;
 int VAR_5;
 unsigned int VAR_6;
 struct matrox_fb_info *VAR_7 = FUNC_0(VAR_2);

 if (VAR_7->dead) {
  return -VAR_0;
 }
 if ((VAR_3 = FUNC_1(VAR_7, VAR_1, &VAR_4, &VAR_5, &VAR_6)) != 0)
  return VAR_3;
 return 0;
}
