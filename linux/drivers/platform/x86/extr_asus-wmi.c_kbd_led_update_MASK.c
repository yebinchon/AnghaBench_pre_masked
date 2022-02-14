
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asus_wmi {int kbd_led_wk; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int *) ;

__attribute__((used)) static void FUNC_1(struct asus_wmi *VAR_1)
{
 int VAR_2 = 0;





 if (VAR_1->kbd_led_wk > 0)
  VAR_2 = 0x80 | (VAR_1->kbd_led_wk & 0x7F);

 FUNC_0(VAR_0, VAR_2, ((void*)0));
}
