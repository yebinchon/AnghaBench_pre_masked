
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {int activate; } ;
struct fb_info {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct fb_info*,struct fb_var_screeninfo*) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_2, struct fb_var_screeninfo *VAR_3)
{
 int VAR_4;

 VAR_3->activate |= VAR_1;
 FUNC_0();
 VAR_2->flags |= VAR_0;
 VAR_4 = FUNC_2(VAR_2, VAR_3);
 VAR_2->flags &= ~VAR_0;
 FUNC_1();
 if (VAR_4)
  return VAR_4;
 return 0;
}
