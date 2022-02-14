
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb3503 {int gpio_reset; int gpio_connect; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct usb3503 *VAR_0, int VAR_1)
{
 if (!VAR_1 && FUNC_0(VAR_0->gpio_connect))
  FUNC_1(VAR_0->gpio_connect, 0);

 if (FUNC_0(VAR_0->gpio_reset))
  FUNC_1(VAR_0->gpio_reset, VAR_1);


 if (VAR_1)
  FUNC_2(4000, 10000);

 return 0;
}
