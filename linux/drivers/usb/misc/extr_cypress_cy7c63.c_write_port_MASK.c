
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cypress {TYPE_1__* udev; } ;
typedef int ssize_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char const*,char*,int*) ;
 struct usb_interface* FUNC_2 (struct device*) ;
 struct cypress* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (struct cypress*,int ,int,unsigned char) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2, struct device_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5,
     int VAR_6, int VAR_7)
{
 int VAR_8 = -1;
 int VAR_9 = 0;

 struct usb_interface *VAR_10 = FUNC_2(VAR_2);
 struct cypress *VAR_11 = FUNC_3(VAR_10);

 FUNC_0(&VAR_11->udev->dev, "WRITE_PORT%d called\n", VAR_6);


 if (FUNC_1(VAR_4, "%d", &VAR_8) < 1) {
  VAR_9 = -VAR_1;
  goto error;
 }
 if (VAR_8 < 0 || VAR_8 > 255) {
  VAR_9 = -VAR_1;
  goto error;
 }

 VAR_9 = FUNC_4(VAR_11, VAR_0, VAR_7,
    (unsigned char)VAR_8);

 FUNC_0(&VAR_11->udev->dev, "Result of vendor_command: %d\n\n", VAR_9);
error:
 return VAR_9 < 0 ? VAR_9 : VAR_5;
}
