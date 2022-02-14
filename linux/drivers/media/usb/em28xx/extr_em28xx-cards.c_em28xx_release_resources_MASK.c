
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct em28xx {scalar_t__ ts; int lock; int devno; scalar_t__ def_i2c_bus; int intf; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct em28xx*,int) ;
 int FUNC_2 (struct em28xx*) ;
 struct usb_device* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct usb_device*) ;

__attribute__((used)) static void FUNC_7(struct em28xx *VAR_2)
{
 struct usb_device *VAR_3 = FUNC_3(VAR_2->intf);



 FUNC_4(&VAR_2->lock);

 FUNC_2(VAR_2);

 if (VAR_2->def_i2c_bus)
  FUNC_1(VAR_2, 1);
 FUNC_1(VAR_2, 0);

 if (VAR_2->ts == VAR_0)
  FUNC_6(VAR_3);


 FUNC_0(VAR_2->devno, VAR_1);

 FUNC_5(&VAR_2->lock);
}
