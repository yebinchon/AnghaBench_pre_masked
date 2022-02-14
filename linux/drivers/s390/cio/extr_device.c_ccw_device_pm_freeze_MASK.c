
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct subchannel {int lock; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int parent; } ;
struct ccw_device {TYPE_3__* private; TYPE_2__* drv; int online; TYPE_1__ dev; } ;
struct TYPE_6__ {int * cmb; } ;
struct TYPE_5__ {int (* freeze ) (struct ccw_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ccw_device*,int ) ;
 int FUNC_1 (struct subchannel*) ;
 int FUNC_2 (struct ccw_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ccw_device*) ;
 struct ccw_device* FUNC_6 (struct device*) ;
 struct subchannel* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_1)
{
 struct ccw_device *VAR_2 = FUNC_6(VAR_1);
 struct subchannel *VAR_3 = FUNC_7(VAR_2->dev.parent);
 int VAR_4, VAR_5;


 if (!FUNC_2(VAR_2))
  return -VAR_0;
 if (!VAR_2->online)
  return 0;
 if (VAR_2->drv && VAR_2->drv->freeze) {
  VAR_4 = VAR_2->drv->freeze(VAR_2);
  if (VAR_4)
   return VAR_4;
 }

 FUNC_3(VAR_3->lock);
 VAR_5 = VAR_2->private->cmb != ((void*)0);
 FUNC_4(VAR_3->lock);
 if (VAR_5) {

  VAR_4 = FUNC_0(VAR_2, 0);
  if (VAR_4)
   return VAR_4;
 }

 FUNC_3(VAR_3->lock);
 VAR_4 = FUNC_1(VAR_3);
 FUNC_4(VAR_3->lock);

 return VAR_4;
}
