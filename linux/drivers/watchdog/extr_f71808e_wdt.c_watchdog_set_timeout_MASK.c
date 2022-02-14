
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timeout; int timer_val; int minutes_mode; int lock; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_4(int VAR_3)
{
 if (VAR_3 <= 0
  || VAR_3 > VAR_1) {
  FUNC_3("watchdog timeout out of range\n");
  return -VAR_0;
 }

 FUNC_1(&VAR_2.lock);

 VAR_2.timeout = VAR_3;
 if (VAR_3 > 0xff) {
  VAR_2.timer_val = FUNC_0(VAR_3, 60);
  VAR_2.minutes_mode = 1;
 } else {
  VAR_2.timer_val = VAR_3;
  VAR_2.minutes_mode = 0;
 }

 FUNC_2(&VAR_2.lock);

 return 0;
}
