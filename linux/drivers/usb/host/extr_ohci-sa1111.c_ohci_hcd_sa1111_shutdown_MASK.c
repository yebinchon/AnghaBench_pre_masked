
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {TYPE_1__* driver; int flags; } ;
struct sa1111_dev {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* shutdown ) (struct usb_hcd*) ;} ;


 int VAR_0 ;
 struct usb_hcd* FUNC_0 (struct sa1111_dev*) ;
 int FUNC_1 (struct sa1111_dev*) ;
 int FUNC_2 (struct usb_hcd*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 struct sa1111_dev* FUNC_4 (struct device*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_1)
{
 struct sa1111_dev *VAR_2 = FUNC_4(VAR_1);
 struct usb_hcd *VAR_3 = FUNC_0(VAR_2);

 if (FUNC_3(VAR_0, &VAR_3->flags)) {
  VAR_3->driver->shutdown(VAR_3);
  FUNC_1(VAR_2);
 }
}
