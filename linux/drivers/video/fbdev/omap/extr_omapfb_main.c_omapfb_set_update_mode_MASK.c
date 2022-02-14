
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omapfb_device {TYPE_1__* ctrl; } ;
typedef enum omapfb_update_mode { ____Placeholder_omapfb_update_mode } omapfb_update_mode ;
struct TYPE_2__ {int (* set_update_mode ) (int) ;} ;


 int FUNC_0 (struct omapfb_device*) ;
 int FUNC_1 (struct omapfb_device*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct omapfb_device *VAR_0,
       enum omapfb_update_mode VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0);
 VAR_2 = VAR_0->ctrl->set_update_mode(VAR_1);
 FUNC_1(VAR_0);

 return VAR_2;
}
