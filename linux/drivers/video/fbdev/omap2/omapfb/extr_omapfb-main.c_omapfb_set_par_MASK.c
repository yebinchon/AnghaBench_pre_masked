
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb_info {int region; int id; } ;
struct fb_info {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 struct omapfb_info* FUNC_1 (struct fb_info*) ;
 int FUNC_2 (struct fb_info*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct fb_info*) ;
 int FUNC_6 (struct fb_info*) ;

__attribute__((used)) static int FUNC_7(struct fb_info *VAR_0)
{
 struct omapfb_info *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 FUNC_0("set_par(%d)\n", FUNC_1(VAR_0)->id);

 FUNC_3(VAR_1->region);

 FUNC_5(VAR_0);

 VAR_2 = FUNC_6(VAR_0);
 if (VAR_2)
  goto out;

 VAR_2 = FUNC_2(VAR_0, 0);

 out:
 FUNC_4(VAR_1->region);

 return VAR_2;
}
