
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct octeon_hcd {int lock; } ;


 int FUNC_0 (struct octeon_hcd*) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct usb_hcd* FUNC_2 (struct device*) ;
 struct octeon_hcd* FUNC_3 (struct usb_hcd*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct usb_hcd*) ;
 int FUNC_7 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 int VAR_1;
 struct device *VAR_2 = &VAR_0->dev;
 struct usb_hcd *VAR_3 = FUNC_2(VAR_2);
 struct octeon_hcd *VAR_4 = FUNC_3(VAR_3);
 unsigned long VAR_5;

 FUNC_7(VAR_3);
 FUNC_4(&VAR_4->lock, VAR_5);
 VAR_1 = FUNC_0(VAR_4);
 FUNC_5(&VAR_4->lock, VAR_5);
 if (VAR_1)
  FUNC_1(VAR_2, "USB shutdown failed with %d\n", VAR_1);

 FUNC_6(VAR_3);

 return 0;
}
