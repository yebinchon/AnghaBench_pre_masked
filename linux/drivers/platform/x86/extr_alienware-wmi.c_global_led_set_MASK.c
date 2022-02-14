
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_3(struct led_classdev *VAR_4,
      enum led_brightness VAR_5)
{
 int VAR_6;
 VAR_1 = VAR_5;
 if (VAR_2 == VAR_0)
  VAR_6 = FUNC_2(VAR_5);
 else
  VAR_6 = FUNC_0(&VAR_3[0]);
 if (VAR_6)
  FUNC_1("LED brightness update failed\n");
}
