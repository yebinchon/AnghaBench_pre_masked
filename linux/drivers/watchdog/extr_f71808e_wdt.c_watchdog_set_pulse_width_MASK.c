
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; int pulse_val; unsigned int pulse_mode; int lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_3)
{
 int VAR_4 = 0;
 unsigned int VAR_5 = 25, VAR_6 = 125, VAR_7 = 5000;

 if (VAR_2.type == VAR_1) {
  VAR_5 = 30;
  VAR_6 = 150;
  VAR_7 = 6000;
 }

 FUNC_0(&VAR_2.lock);

 if (VAR_3 <= 1) {
  VAR_2.pulse_val = 0;
 } else if (VAR_3 <= VAR_5) {
  VAR_2.pulse_val = 1;
 } else if (VAR_3 <= VAR_6) {
  VAR_2.pulse_val = 2;
 } else if (VAR_3 <= VAR_7) {
  VAR_2.pulse_val = 3;
 } else {
  FUNC_2("pulse width out of range\n");
  VAR_4 = -VAR_0;
  goto exit_unlock;
 }

 VAR_2.pulse_mode = VAR_3;

exit_unlock:
 FUNC_1(&VAR_2.lock);
 return VAR_4;
}
