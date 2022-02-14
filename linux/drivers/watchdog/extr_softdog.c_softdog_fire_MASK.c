
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hrtimer {int dummy; } ;
typedef enum hrtimer_restart { ____Placeholder_hrtimer_restart } hrtimer_restart ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static enum hrtimer_restart FUNC_4(struct hrtimer *VAR_4)
{
 FUNC_1(VAR_1);
 if (VAR_2) {
  FUNC_3("Triggered - Reboot ignored\n");
 } else if (VAR_3) {
  FUNC_3("Initiating panic\n");
  FUNC_2("Software Watchdog Timer expired");
 } else {
  FUNC_3("Initiating system reboot\n");
  FUNC_0();
  FUNC_3("Reboot didn't ?????\n");
 }

 return VAR_0;
}
