
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omapfb_device {TYPE_1__* ctrl; } ;
struct TYPE_2__ {int (* cleanup ) () ;} ;


 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct omapfb_device *VAR_0)
{
 VAR_0->ctrl->cleanup();
}
