
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fb_var_screeninfo {int dummy; } ;
struct fb_info {TYPE_1__* fbops; } ;
struct fb_blit_caps {int flags; int x; int y; scalar_t__ len; } ;
typedef int fbcaps ;
typedef int caps ;
struct TYPE_2__ {int (* fb_get_caps ) (struct fb_info*,struct fb_blit_caps*,struct fb_var_screeninfo*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fb_info*,struct fb_blit_caps*) ;
 int FUNC_1 (struct fb_blit_caps*,int ,int) ;
 int FUNC_2 (struct fb_info*,struct fb_blit_caps*,struct fb_var_screeninfo*) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_2, struct fb_var_screeninfo *VAR_3,
    u32 VAR_4)
{
 struct fb_blit_caps VAR_5, VAR_6;
 int VAR_7 = 0;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_5.flags = (VAR_4 & VAR_1) ? 1 : 0;
 FUNC_0(VAR_2, &VAR_5);
 VAR_2->fbops->fb_get_caps(VAR_2, &VAR_6, VAR_3);

 if (((VAR_6.x ^ VAR_5.x) & VAR_5.x) ||
     ((VAR_6.y ^ VAR_5.y) & VAR_5.y) ||
     (VAR_6.len < VAR_5.len))
  VAR_7 = -VAR_0;

 return VAR_7;
}
