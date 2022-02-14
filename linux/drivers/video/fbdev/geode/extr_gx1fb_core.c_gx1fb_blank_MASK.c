
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct geodefb_par {TYPE_1__* vid_ops; } ;
struct fb_info {struct geodefb_par* par; } ;
struct TYPE_2__ {int (* blank_display ) (struct fb_info*,int) ;} ;


 int FUNC_0 (struct fb_info*,int) ;

__attribute__((used)) static int FUNC_1(int VAR_0, struct fb_info *VAR_1)
{
 struct geodefb_par *VAR_2 = VAR_1->par;

 return VAR_2->vid_ops->blank_display(VAR_1, VAR_0);
}
