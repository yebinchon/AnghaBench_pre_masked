
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i810fb_par {int depth; } ;
struct fb_var_screeninfo {int xoffset; int yoffset; } ;
struct TYPE_2__ {int line_length; } ;
struct fb_info {TYPE_1__ fix; struct i810fb_par* par; } ;


 int FUNC_0 (int,struct fb_info*) ;

__attribute__((used)) static int FUNC_1(struct fb_var_screeninfo *VAR_0,
         struct fb_info *VAR_1)
{
 struct i810fb_par *VAR_2 = VAR_1->par;
 u32 VAR_3;

 VAR_3 = VAR_0->xoffset * VAR_2->depth +
  VAR_0->yoffset * VAR_1->fix.line_length;
 FUNC_0(VAR_3, VAR_1);

 return 0;
}
