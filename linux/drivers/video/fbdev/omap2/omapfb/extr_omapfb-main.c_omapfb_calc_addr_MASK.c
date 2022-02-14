
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omapfb_info {scalar_t__ rotation_type; } ;
struct fb_var_screeninfo {int yoffset; int xoffset; } ;
struct fb_fix_screeninfo {int dummy; } ;


 int FUNC_0 (char*,int,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct fb_var_screeninfo const*,struct fb_fix_screeninfo const*,int) ;
 int FUNC_2 (struct fb_var_screeninfo const*,struct fb_fix_screeninfo const*,int) ;
 int FUNC_3 (struct omapfb_info const*) ;
 int FUNC_4 (struct omapfb_info const*,int) ;

__attribute__((used)) static void FUNC_5(const struct omapfb_info *VAR_1,
        const struct fb_var_screeninfo *VAR_2,
        const struct fb_fix_screeninfo *VAR_3,
        int VAR_4, u32 *VAR_5)
{
 u32 VAR_6;
 int VAR_7;

 if (VAR_1->rotation_type == VAR_0)
  VAR_6 = FUNC_4(VAR_1, VAR_4);
 else
  VAR_6 = FUNC_3(VAR_1);

 if (VAR_1->rotation_type == VAR_0)
  VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4);
 else
  VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4);

 VAR_6 += VAR_7;

 if (VAR_7)
  FUNC_0("offset %d, %d = %d\n",
      VAR_2->xoffset, VAR_2->yoffset, VAR_7);

 FUNC_0("paddr %x\n", VAR_6);

 *VAR_5 = VAR_6;
}
