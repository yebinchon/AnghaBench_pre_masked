
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb4604 {int gpio_reset; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct usb4604 *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0->gpio_reset, VAR_1);


 if (VAR_1)
  FUNC_1(250);
}
