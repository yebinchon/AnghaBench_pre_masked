
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb251xb {TYPE_1__* i2c; int gpio_reset; } ;
struct TYPE_2__ {int adapter; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct usb251xb *VAR_1, int VAR_2)
{
 if (!VAR_1->gpio_reset)
  return;

 FUNC_1(VAR_1->i2c->adapter, VAR_0);

 FUNC_0(VAR_1->gpio_reset, VAR_2);


 if (!VAR_2)
  FUNC_3(500, 750);
 else
  FUNC_3(1, 10);

 FUNC_2(VAR_1->i2c->adapter, VAR_0);
}
