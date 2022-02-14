
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcan4x5x_priv {scalar_t__ device_wake_gpio; scalar_t__ device_state_gpio; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct tcan4x5x_priv *VAR_0)
{
 int VAR_1 = 0;

 if (VAR_0->device_state_gpio)
  VAR_1 = FUNC_0(VAR_0->device_state_gpio);

 if (VAR_0->device_wake_gpio && VAR_1) {
  FUNC_1(VAR_0->device_wake_gpio, 0);
  FUNC_2(5, 50);
  FUNC_1(VAR_0->device_wake_gpio, 1);
 }
}
