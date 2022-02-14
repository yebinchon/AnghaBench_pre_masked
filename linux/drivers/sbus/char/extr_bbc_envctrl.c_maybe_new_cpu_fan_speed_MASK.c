
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bbc_fan_control {int cpu_fan_speed; int system_fan_speed; } ;
typedef enum fan_action { ____Placeholder_fan_action } fan_action ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct bbc_fan_control *VAR_6)
{
 enum fan_action VAR_7 = FUNC_0(VAR_0);
 int VAR_8;

 if (VAR_7 == VAR_3)
  return 0;

 VAR_8 = 1;
 if (VAR_7 == VAR_2) {
  if (VAR_6->cpu_fan_speed >= VAR_4)
   VAR_8 = 0;
  else
   VAR_6->cpu_fan_speed = VAR_4;
 } else {
  if (VAR_7 == VAR_1) {
   if (VAR_6->cpu_fan_speed >= VAR_4)
    VAR_8 = 0;
   else {
    VAR_6->cpu_fan_speed += 2;
    if (VAR_6->system_fan_speed <
        (VAR_6->cpu_fan_speed - 3))
     VAR_6->system_fan_speed =
      VAR_6->cpu_fan_speed - 3;
   }
  } else {
   if (VAR_6->cpu_fan_speed <= VAR_5)
    VAR_8 = 0;
   else
    VAR_6->cpu_fan_speed -= 1;
  }
 }

 return VAR_8;
}
