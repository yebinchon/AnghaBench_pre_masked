
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at91_usbh_data {int * vbus_pin; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct at91_usbh_data *VAR_1, int VAR_2)
{
 if (!FUNC_1(VAR_2))
  return -VAR_0;

 return FUNC_0(VAR_1->vbus_pin[VAR_2]);
}
