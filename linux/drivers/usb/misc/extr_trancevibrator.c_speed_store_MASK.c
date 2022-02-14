
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct trancevibrator {int speed; TYPE_1__* udev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char const*,int,int*) ;
 struct usb_interface* FUNC_2 (struct device*) ;
 int FUNC_3 (TYPE_1__*,int ,int,int,int,int ,int *,int ,int ) ;
 struct trancevibrator* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_4, struct device_attribute *VAR_5,
    const char *VAR_6, size_t VAR_7)
{
 struct usb_interface *VAR_8 = FUNC_2(VAR_4);
 struct trancevibrator *VAR_9 = FUNC_4(VAR_8);
 int VAR_10, VAR_11, VAR_12;

 VAR_11 = FUNC_1(VAR_6, 10, &VAR_10);
 if (VAR_11)
  return VAR_11;
 if (VAR_10 > 255)
  VAR_10 = 255;
 else if (VAR_10 < 0)
  VAR_10 = 0;
 VAR_12 = VAR_9->speed;
 VAR_9->speed = VAR_10;

 FUNC_0(&VAR_9->udev->dev, "speed = %d\n", VAR_9->speed);


 VAR_11 = FUNC_3(VAR_9->udev, FUNC_5(VAR_9->udev, 0),
     0x01,
     VAR_1 | VAR_3 | VAR_2,
     VAR_9->speed,
     0, ((void*)0), 0, VAR_0);
 if (VAR_11) {
  VAR_9->speed = VAR_12;
  FUNC_0(&VAR_9->udev->dev, "retval = %d\n", VAR_11);
  return VAR_11;
 }
 return VAR_7;
}
