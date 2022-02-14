
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mirror; } ;
struct omapfb_plane_struct {TYPE_1__ info; struct omapfb_device* fbdev; } ;
struct omapfb_device {int dummy; } ;
struct fb_info {struct omapfb_plane_struct* par; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (struct omapfb_device*) ;
 int FUNC_3 (struct omapfb_device*) ;

__attribute__((used)) static int FUNC_4(struct fb_info *VAR_1, int VAR_2)
{
 struct omapfb_plane_struct *VAR_3 = VAR_1->par;
 struct omapfb_device *VAR_4 = VAR_3->fbdev;
 int VAR_5 = 0;

 FUNC_2(VAR_4);
 VAR_2 = VAR_2 ? 1 : 0;
 if (FUNC_0())
  VAR_5 = -VAR_0;
 else if (VAR_2 != VAR_3->info.mirror) {
  VAR_3->info.mirror = VAR_2;
  VAR_5 = FUNC_1(VAR_1);
 }
 FUNC_3(VAR_4);

 return VAR_5;
}
