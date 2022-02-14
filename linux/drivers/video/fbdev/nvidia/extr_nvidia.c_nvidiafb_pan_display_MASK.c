
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nvidia_par {int dummy; } ;
struct fb_var_screeninfo {int yoffset; scalar_t__ xoffset; } ;
struct TYPE_2__ {int line_length; } ;
struct fb_info {TYPE_1__ fix; struct nvidia_par* par; } ;


 int FUNC_0 (struct nvidia_par*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct fb_var_screeninfo *VAR_0,
    struct fb_info *VAR_1)
{
 struct nvidia_par *VAR_2 = VAR_1->par;
 u32 VAR_3;

 VAR_3 = VAR_0->yoffset * VAR_1->fix.line_length + VAR_0->xoffset;

 FUNC_0(VAR_2, VAR_3);

 return 0;
}
