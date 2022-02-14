
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct watchdog_device {unsigned int timeout; } ;
struct ts4800_wdt {int feed_val; } ;
struct TYPE_2__ {unsigned int timeout; int regval; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 struct ts4800_wdt* FUNC_0 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_1(struct watchdog_device *VAR_2,
      unsigned int VAR_3)
{
 struct ts4800_wdt *VAR_4 = FUNC_0(VAR_2);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_1[VAR_5].timeout >= VAR_3)
   break;
 }

 VAR_2->timeout = VAR_1[VAR_5].timeout;
 VAR_4->feed_val = VAR_1[VAR_5].regval;

 return 0;
}
