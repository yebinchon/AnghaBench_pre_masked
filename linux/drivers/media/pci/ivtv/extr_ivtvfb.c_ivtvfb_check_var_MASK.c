
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv {int dummy; } ;
struct fb_var_screeninfo {int dummy; } ;
struct fb_info {scalar_t__ par; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct fb_var_screeninfo*,struct ivtv*) ;

__attribute__((used)) static int FUNC_2(struct fb_var_screeninfo *VAR_0, struct fb_info *VAR_1)
{
 struct ivtv *VAR_2 = (struct ivtv *) VAR_1->par;
 FUNC_0("ivtvfb_check_var\n");
 return FUNC_1(VAR_0, VAR_2);
}
