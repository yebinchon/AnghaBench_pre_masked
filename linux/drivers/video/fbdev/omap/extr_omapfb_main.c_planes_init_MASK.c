
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int out_height; int out_width; int mirror; } ;
struct omapfb_plane_struct {int idx; TYPE_2__ info; struct omapfb_device* fbdev; } ;
struct TYPE_4__ {int region_cnt; } ;
struct omapfb_device {struct fb_info** fb_info; int dev; TYPE_1__ mem_desc; } ;
struct TYPE_6__ {int yres; int xres; } ;
struct fb_info {TYPE_3__ var; struct omapfb_plane_struct* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct omapfb_device*,struct fb_info*) ;
 struct fb_info* FUNC_1 (int,int ) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (struct omapfb_device*) ;

__attribute__((used)) static int FUNC_4(struct omapfb_device *VAR_2)
{
 struct fb_info *VAR_3;
 int VAR_4;
 int VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2->mem_desc.region_cnt; VAR_4++) {
  struct omapfb_plane_struct *VAR_6;
  VAR_3 = FUNC_1(sizeof(struct omapfb_plane_struct),
     VAR_2->dev);
  if (VAR_3 == ((void*)0)) {
   FUNC_3(VAR_2);
   return -VAR_0;
  }
  VAR_6 = VAR_3->par;
  VAR_6->idx = VAR_4;
  VAR_6->fbdev = VAR_2;
  VAR_6->info.mirror = VAR_1;
  VAR_2->fb_info[VAR_4] = VAR_3;

  if ((VAR_5 = FUNC_0(VAR_2, VAR_3)) < 0) {
   FUNC_2(VAR_3);
   FUNC_3(VAR_2);
   return VAR_5;
  }
  VAR_6->info.out_width = VAR_3->var.xres;
  VAR_6->info.out_height = VAR_3->var.yres;
 }
 return 0;
}
