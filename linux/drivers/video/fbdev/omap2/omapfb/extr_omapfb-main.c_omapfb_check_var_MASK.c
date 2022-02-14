
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb_info {int region; int id; } ;
struct fb_var_screeninfo {int dummy; } ;
struct fb_info {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 struct omapfb_info* FUNC_1 (struct fb_info*) ;
 int FUNC_2 (struct fb_info*,struct fb_var_screeninfo*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct fb_var_screeninfo *VAR_0, struct fb_info *VAR_1)
{
 struct omapfb_info *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 FUNC_0("check_var(%d)\n", FUNC_1(VAR_1)->id);

 FUNC_3(VAR_2->region);

 VAR_3 = FUNC_2(VAR_1, VAR_0);

 FUNC_4(VAR_2->region);

 return VAR_3;
}
