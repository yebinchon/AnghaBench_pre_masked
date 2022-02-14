
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct subchannel {TYPE_1__* driver; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* shutdown ) (struct subchannel*) ;} ;


 int FUNC_0 (struct subchannel*) ;
 struct subchannel* FUNC_1 (struct device*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0)
{
 struct subchannel *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1->driver && VAR_1->driver->shutdown)
  VAR_1->driver->shutdown(VAR_1);
}
