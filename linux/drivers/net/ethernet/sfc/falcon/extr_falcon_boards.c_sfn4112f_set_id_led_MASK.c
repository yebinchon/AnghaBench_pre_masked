
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_nic {int dummy; } ;
typedef enum ef4_led_mode { ____Placeholder_ef4_led_mode } ef4_led_mode ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ef4_nic*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct ef4_nic *VAR_5, enum ef4_led_mode VAR_6)
{
 int VAR_7;

 switch (VAR_6) {
 case 129:
  VAR_7 = VAR_1;
  break;
 case 128:
  VAR_7 = VAR_2;
  break;
 default:
  VAR_7 = VAR_3 | VAR_0;
  break;
 }

 FUNC_0(VAR_5, VAR_4, VAR_7);
}
