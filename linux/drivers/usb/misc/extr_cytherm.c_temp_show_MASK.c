
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_cytherm {TYPE_1__* udev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,char*,char,int,int) ;
 struct usb_interface* FUNC_4 (struct device*) ;
 struct usb_cytherm* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int ,unsigned char*,int) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_4, struct device_attribute *VAR_5, char *VAR_6)
{

 struct usb_interface *VAR_7 = FUNC_4(VAR_4);
 struct usb_cytherm *VAR_8 = FUNC_5(VAR_7);

 int VAR_9;
 unsigned char *VAR_10;

 int VAR_11, VAR_12;

 VAR_10 = FUNC_2(8, VAR_0);
 if (!VAR_10)
  return 0;


 VAR_9 = FUNC_6(VAR_8->udev, VAR_1, VAR_3, 0, VAR_10, 8);
 if (VAR_9)
  FUNC_0(&VAR_8->udev->dev, "retval = %d\n", VAR_9);
 VAR_11 = VAR_10[1];


 VAR_9 = FUNC_6(VAR_8->udev, VAR_1, VAR_2, 0, VAR_10, 8);
 if (VAR_9)
  FUNC_0(&VAR_8->udev->dev, "retval = %d\n", VAR_9);
 VAR_12 = VAR_10[1];

 FUNC_1(VAR_10);

 return FUNC_3(VAR_6, "%c%i.%i", VAR_12 ? '-' : '+', VAR_11 >> 1,
         5*(VAR_11 - ((VAR_11 >> 1) << 1)));
}
