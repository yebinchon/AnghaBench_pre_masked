
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbport_trig_data {scalar_t__ count; struct led_classdev* led_cdev; } ;
struct led_classdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct led_classdev*,int ) ;
 int FUNC_1 (struct usbport_trig_data*,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct usbport_trig_data *VAR_3)
{
 struct led_classdev *VAR_4 = VAR_3->led_cdev;

 VAR_3->count = 0;
 FUNC_1(VAR_3, VAR_2);
 FUNC_0(VAR_4, VAR_3->count ? VAR_0 : VAR_1);
}
