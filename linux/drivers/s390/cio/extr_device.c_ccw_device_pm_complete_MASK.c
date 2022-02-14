
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct ccw_device {TYPE_1__* drv; scalar_t__ online; } ;
struct TYPE_2__ {int (* complete ) (struct ccw_device*) ;} ;


 int FUNC_0 (struct ccw_device*) ;
 struct ccw_device* FUNC_1 (struct device*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0)
{
 struct ccw_device *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->online && VAR_1->drv && VAR_1->drv->complete)
  VAR_1->drv->complete(VAR_1);
}
