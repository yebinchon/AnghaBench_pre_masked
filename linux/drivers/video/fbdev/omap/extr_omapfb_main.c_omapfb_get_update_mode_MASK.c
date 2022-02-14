
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omapfb_device {TYPE_1__* ctrl; } ;
typedef enum omapfb_update_mode { ____Placeholder_omapfb_update_mode } omapfb_update_mode ;
struct TYPE_2__ {int (* get_update_mode ) () ;} ;


 int FUNC_0 (struct omapfb_device*) ;
 int FUNC_1 (struct omapfb_device*) ;
 int FUNC_2 () ;

__attribute__((used)) static enum omapfb_update_mode FUNC_3(struct omapfb_device *VAR_0)
{
 int VAR_1;

 FUNC_0(VAR_0);
 VAR_1 = VAR_0->ctrl->get_update_mode();
 FUNC_1(VAR_0);

 return VAR_1;
}
