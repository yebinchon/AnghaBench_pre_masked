
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct subchannel {int lock; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* chp_event ) (struct subchannel*,void*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct subchannel*,void*,int ) ;

__attribute__((used)) static int FUNC_3(struct subchannel *VAR_1, void *VAR_2)
{
 FUNC_0(VAR_1->lock);
 if (VAR_1->driver && VAR_1->driver->chp_event)
  VAR_1->driver->chp_event(VAR_1, VAR_2, VAR_0);
 FUNC_1(VAR_1->lock);

 return 0;
}
