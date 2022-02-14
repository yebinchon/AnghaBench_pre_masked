
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct watchdog_device {TYPE_1__* ops; } ;
struct TYPE_2__ {unsigned int (* get_timeleft ) (struct watchdog_device*) ;} ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_1(struct watchdog_device *VAR_1,
       unsigned int *VAR_2)
{
 *VAR_2 = 0;

 if (!VAR_1->ops->get_timeleft)
  return -VAR_0;

 *VAR_2 = VAR_1->ops->get_timeleft(VAR_1);

 return 0;
}
