
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct watchdog_device {TYPE_1__* gov; } ;
struct TYPE_2__ {int (* pretimeout ) (struct watchdog_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct watchdog_device*) ;

void FUNC_3(struct watchdog_device *VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(&VAR_0, VAR_2);
 if (!VAR_1->gov) {
  FUNC_1(&VAR_0, VAR_2);
  return;
 }

 VAR_1->gov->pretimeout(VAR_1);
 FUNC_1(&VAR_0, VAR_2);
}
