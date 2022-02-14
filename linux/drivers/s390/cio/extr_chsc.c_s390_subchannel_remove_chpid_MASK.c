
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct subchannel {int schid; int lock; scalar_t__ lpm; TYPE_1__* driver; } ;
struct TYPE_2__ {scalar_t__ (* chp_event ) (struct subchannel*,void*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct subchannel*,void*,int ) ;

__attribute__((used)) static int FUNC_4(struct subchannel *VAR_1, void *VAR_2)
{
 FUNC_1(VAR_1->lock);
 if (VAR_1->driver && VAR_1->driver->chp_event)
  if (VAR_1->driver->chp_event(VAR_1, VAR_2, VAR_0) != 0)
   goto out_unreg;
 FUNC_2(VAR_1->lock);
 return 0;

out_unreg:
 VAR_1->lpm = 0;
 FUNC_2(VAR_1->lock);
 FUNC_0(VAR_1->schid);
 return 0;
}
