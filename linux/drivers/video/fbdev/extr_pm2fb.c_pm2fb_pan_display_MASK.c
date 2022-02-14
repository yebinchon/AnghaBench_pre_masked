
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pm2fb_par {int dummy; } ;
struct fb_var_screeninfo {int yoffset; scalar_t__ xoffset; } ;
struct TYPE_2__ {int bits_per_pixel; int xres; } ;
struct fb_info {TYPE_1__ var; struct pm2fb_par* par; } ;


 int VAR_0 ;
 int FUNC_0 (struct pm2fb_par*,int) ;
 int FUNC_1 (struct pm2fb_par*,int ,int) ;
 int FUNC_2 (scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_3(struct fb_var_screeninfo *VAR_1,
        struct fb_info *VAR_2)
{
 struct pm2fb_par *VAR_3 = VAR_2->par;
 u32 VAR_4;
 u32 VAR_5 = (VAR_2->var.bits_per_pixel + 7) & ~7;
 u32 VAR_6 = (VAR_2->var.xres + 31) & ~31;

 VAR_5 = (VAR_5 > 32) ? 32 : VAR_5;
 VAR_4 = FUNC_2(VAR_1->yoffset * VAR_6 + VAR_1->xoffset, VAR_5, 1);
 FUNC_0(VAR_3, 1);
 FUNC_1(VAR_3, VAR_0, VAR_4);
 return 0;
}
