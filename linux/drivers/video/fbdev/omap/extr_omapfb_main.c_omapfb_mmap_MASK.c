
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct omapfb_plane_struct {struct omapfb_device* fbdev; } ;
struct omapfb_device {TYPE_1__* ctrl; } ;
struct fb_info {struct omapfb_plane_struct* par; } ;
struct TYPE_2__ {int (* mmap ) (struct fb_info*,struct vm_area_struct*) ;} ;


 int FUNC_0 (struct omapfb_device*) ;
 int FUNC_1 (struct omapfb_device*) ;
 int FUNC_2 (struct fb_info*,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_0, struct vm_area_struct *VAR_1)
{
 struct omapfb_plane_struct *VAR_2 = VAR_0->par;
 struct omapfb_device *VAR_3 = VAR_2->fbdev;
 int VAR_4;

 FUNC_0(VAR_3);
 VAR_4 = VAR_3->ctrl->mmap(VAR_0, VAR_1);
 FUNC_1(VAR_3);

 return VAR_4;
}
