
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct watchdog_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* variant; } ;
struct TYPE_3__ {int (* configure ) (struct watchdog_device*,int) ;} ;


 int FUNC_0 (struct watchdog_device*,int) ;
 TYPE_2__* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_0, bool VAR_1)
{
 return FUNC_1(VAR_0)->variant->configure(VAR_0, VAR_1);
}
