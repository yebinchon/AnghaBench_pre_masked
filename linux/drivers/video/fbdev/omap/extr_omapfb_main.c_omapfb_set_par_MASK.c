
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb_plane_struct {struct omapfb_device* fbdev; } ;
struct omapfb_device {int dummy; } ;
struct fb_info {struct omapfb_plane_struct* par; } ;


 int FUNC_0 (struct fb_info*) ;
 int FUNC_1 (struct omapfb_device*) ;
 int FUNC_2 (struct omapfb_device*) ;
 int FUNC_3 (struct fb_info*,int ) ;

__attribute__((used)) static int FUNC_4(struct fb_info *VAR_0)
{
 struct omapfb_plane_struct *VAR_1 = VAR_0->par;
 struct omapfb_device *VAR_2 = VAR_1->fbdev;
 int VAR_3 = 0;

 FUNC_1(VAR_2);
 FUNC_3(VAR_0, 0);
 VAR_3 = FUNC_0(VAR_0);
 FUNC_2(VAR_2);

 return VAR_3;
}
