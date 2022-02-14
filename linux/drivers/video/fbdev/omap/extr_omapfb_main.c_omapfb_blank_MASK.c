
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct omapfb_plane_struct {struct omapfb_device* fbdev; } ;
struct omapfb_device {int state; TYPE_1__* ctrl; TYPE_2__* panel; } ;
struct fb_info {struct omapfb_plane_struct* par; } ;
struct TYPE_5__ {int (* disable ) (TYPE_2__*) ;int (* enable ) (TYPE_2__*) ;} ;
struct TYPE_4__ {int (* suspend ) () ;int (* get_update_mode ) () ;int (* resume ) () ;} ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct omapfb_device*) ;
 int FUNC_1 (struct omapfb_device*) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(int VAR_4, struct fb_info *VAR_5)
{
 struct omapfb_plane_struct *VAR_6 = VAR_5->par;
 struct omapfb_device *VAR_7 = VAR_6->fbdev;
 int VAR_8 = 0;
 int VAR_9 = 0;

 FUNC_0(VAR_7);
 switch (VAR_4) {
 case 128:
  if (VAR_7->state == VAR_3) {
   if (VAR_7->ctrl->resume)
    VAR_7->ctrl->resume();
   if (VAR_7->panel->enable)
    VAR_7->panel->enable(VAR_7->panel);
   VAR_7->state = VAR_1;
   if (VAR_7->ctrl->get_update_mode() ==
     VAR_2)
    VAR_8 = 1;
  }
  break;
 case 129:
  if (VAR_7->state == VAR_1) {
   if (VAR_7->panel->disable)
    VAR_7->panel->disable(VAR_7->panel);
   if (VAR_7->ctrl->suspend)
    VAR_7->ctrl->suspend();
   VAR_7->state = VAR_3;
  }
  break;
 default:
  VAR_9 = -VAR_0;
 }
 FUNC_1(VAR_7);

 if (VAR_9 == 0 && VAR_8)
  VAR_9 = FUNC_2(VAR_5);

 return VAR_9;
}
