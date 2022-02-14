
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cypress {int* port; TYPE_1__* udev; } ;
typedef int ssize_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char*,char*,int) ;
 struct usb_interface* FUNC_2 (struct device*) ;
 struct cypress* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (struct cypress*,int ,int,int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1, struct device_attribute *VAR_2,
    char *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6 = 0;

 struct usb_interface *VAR_7 = FUNC_2(VAR_1);
 struct cypress *VAR_8 = FUNC_3(VAR_7);

 FUNC_0(&VAR_8->udev->dev, "READ_PORT%d called\n", VAR_4);

 VAR_6 = FUNC_4(VAR_8, VAR_0, VAR_5, 0);

 FUNC_0(&VAR_8->udev->dev, "Result of vendor_command: %d\n\n", VAR_6);

 return FUNC_1(VAR_3, "%d", VAR_8->port[VAR_4]);
}
