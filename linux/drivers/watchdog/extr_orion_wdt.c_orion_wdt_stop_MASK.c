
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct watchdog_device {int dummy; } ;
struct orion_watchdog {TYPE_1__* data; } ;
struct TYPE_2__ {int (* stop ) (struct watchdog_device*) ;} ;


 int FUNC_0 (struct watchdog_device*) ;
 struct orion_watchdog* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_0)
{
 struct orion_watchdog *VAR_1 = FUNC_1(VAR_0);

 return VAR_1->data->stop(VAR_0);
}
