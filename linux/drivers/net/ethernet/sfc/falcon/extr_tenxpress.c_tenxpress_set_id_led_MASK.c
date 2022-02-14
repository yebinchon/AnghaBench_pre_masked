
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ef4_nic*,int ,int ,int) ;

void FUNC_1(struct ef4_nic *VAR_8, enum ef4_led_mode VAR_9)
{
 int VAR_10;

 switch (VAR_9) {
 case 129:
  VAR_10 = (VAR_2 << VAR_6) |
   (VAR_2 << VAR_5) |
   (VAR_2 << VAR_1);
  break;
 case 128:
  VAR_10 = (VAR_3 << VAR_6) |
   (VAR_3 << VAR_5) |
   (VAR_3 << VAR_1);
  break;
 default:
  VAR_10 = VAR_7;
  break;
 }

 FUNC_0(VAR_8, VAR_0, VAR_4, VAR_10);
}
