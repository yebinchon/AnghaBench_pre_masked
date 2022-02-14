
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
typedef int u32 ;
typedef int u16 ;
struct omapfb_plane_struct {int color_mode; struct omapfb_device* fbdev; } ;
struct omapfb_device {TYPE_1__* ctrl; } ;
struct TYPE_8__ {int length; } ;
struct TYPE_7__ {int offset; int length; } ;
struct TYPE_6__ {int offset; int length; } ;
struct fb_var_screeninfo {TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; } ;
struct fb_info {scalar_t__ pseudo_palette; struct fb_var_screeninfo var; struct omapfb_plane_struct* par; } ;
struct TYPE_5__ {int (* setcolreg ) (int,int,int,int,int,int) ;} ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct fb_info *VAR_1, u_int VAR_2, u_int VAR_3, u_int VAR_4,
   u_int VAR_5, u_int VAR_6, int VAR_7)
{
 struct omapfb_plane_struct *VAR_8 = VAR_1->par;
 struct omapfb_device *VAR_9 = VAR_8->fbdev;
 struct fb_var_screeninfo *VAR_10 = &VAR_1->var;
 int VAR_11 = 0;

 switch (VAR_8->color_mode) {
 case 129:
 case 130:
 case 128:
  VAR_11 = -VAR_0;
  break;
 case 133:
 case 134:
 case 135:
 case 136:
  if (VAR_9->ctrl->setcolreg)
   VAR_11 = VAR_9->ctrl->setcolreg(VAR_2, VAR_3, VAR_4, VAR_5,
       VAR_6, VAR_7);

 case 131:
 case 132:
  if (VAR_11 != 0)
   break;

  if (VAR_2 < 16) {
   u16 VAR_12;
   VAR_12 = ((VAR_3 >> (16 - VAR_10->red.length)) <<
     VAR_10->red.offset) |
         ((VAR_4 >> (16 - VAR_10->green.length)) <<
     VAR_10->green.offset) |
         (VAR_5 >> (16 - VAR_10->blue.length));
   ((u32 *)(VAR_1->pseudo_palette))[VAR_2] = VAR_12;
  }
  break;
 default:
  FUNC_0();
 }
 return VAR_11;
}
