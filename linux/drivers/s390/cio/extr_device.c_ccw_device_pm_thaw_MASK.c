
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct subchannel {int lock; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int parent; } ;
struct ccw_device {TYPE_2__* drv; TYPE_1__* private; int online; TYPE_3__ dev; } ;
typedef scalar_t__ addr_t ;
struct TYPE_5__ {int (* thaw ) (struct ccw_device*) ;} ;
struct TYPE_4__ {int * cmb; } ;


 int FUNC_0 (struct ccw_device*,int) ;
 int FUNC_1 (struct subchannel*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ccw_device*) ;
 struct ccw_device* FUNC_5 (struct device*) ;
 struct subchannel* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_0)
{
 struct ccw_device *VAR_1 = FUNC_5(VAR_0);
 struct subchannel *VAR_2 = FUNC_6(VAR_1->dev.parent);
 int VAR_3, VAR_4;

 if (!VAR_1->online)
  return 0;

 FUNC_2(VAR_2->lock);

 VAR_3 = FUNC_1(VAR_2, (u32)(addr_t)VAR_2);
 VAR_4 = VAR_1->private->cmb != ((void*)0);
 FUNC_3(VAR_2->lock);
 if (VAR_3)
  return VAR_3;

 if (VAR_4) {
  VAR_3 = FUNC_0(VAR_1, 1);
  if (VAR_3)
   return VAR_3;
 }

 if (VAR_1->drv && VAR_1->drv->thaw)
  VAR_3 = VAR_1->drv->thaw(VAR_1);

 return VAR_3;
}
