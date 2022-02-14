
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
typedef int u32 ;
struct TYPE_6__ {int length; } ;
struct TYPE_5__ {int offset; int length; } ;
struct TYPE_4__ {int offset; int length; } ;
struct fb_var_screeninfo {TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;
struct fb_info {scalar_t__ pseudo_palette; struct fb_var_screeninfo var; } ;
typedef enum omapfb_color_format { ____Placeholder_omapfb_color_format } omapfb_color_format ;


 int FUNC_0 () ;
 int VAR_0 ;
__attribute__((used)) static int FUNC_1(struct fb_info *VAR_1, u_int VAR_2, u_int VAR_3, u_int VAR_4,
  u_int VAR_5, u_int VAR_6, int VAR_7)
{


 struct fb_var_screeninfo *VAR_8 = &VAR_1->var;
 int VAR_9 = 0;

 enum omapfb_color_format VAR_10 = 133;


 switch (VAR_10) {
 case 129:
 case 130:
 case 128:
  VAR_9 = -VAR_0;
  break;
 case 135:
 case 136:
 case 137:
 case 138:






  VAR_9 = -VAR_0;
  break;
 case 131:
 case 132:
 case 134:
 case 133:
  if (VAR_9 != 0)
   break;

  if (VAR_2 < 16) {
   u32 VAR_11;
   VAR_11 = ((VAR_3 >> (16 - VAR_8->red.length)) <<
     VAR_8->red.offset) |
    ((VAR_4 >> (16 - VAR_8->green.length)) <<
     VAR_8->green.offset) |
    (VAR_5 >> (16 - VAR_8->blue.length));
   ((u32 *)(VAR_1->pseudo_palette))[VAR_2] = VAR_11;
  }
  break;
 default:
  FUNC_0();
 }
 return VAR_9;
}
