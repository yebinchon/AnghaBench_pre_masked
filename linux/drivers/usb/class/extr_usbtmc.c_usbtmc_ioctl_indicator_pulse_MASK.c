
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usbtmc_device_data {int usb_dev; TYPE_1__* intf; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,int ,int,int ,int ,int*,int,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct usbtmc_device_data *VAR_9)
{
 struct device *VAR_10;
 u8 *VAR_11;
 int VAR_12;

 VAR_10 = &VAR_9->intf->dev;

 VAR_11 = FUNC_3(2, VAR_2);
 if (!VAR_11)
  return -VAR_0;

 VAR_12 = FUNC_4(VAR_9->usb_dev,
        FUNC_5(VAR_9->usb_dev, 0),
        VAR_3,
        VAR_6 | VAR_8 | VAR_7,
        0, 0, VAR_11, 0x01, VAR_5);

 if (VAR_12 < 0) {
  FUNC_1(VAR_10, "usb_control_msg returned %d\n", VAR_12);
  goto exit;
 }

 FUNC_0(VAR_10, "INDICATOR_PULSE returned %x\n", VAR_11[0]);

 if (VAR_11[0] != VAR_4) {
  FUNC_1(VAR_10, "INDICATOR_PULSE returned %x\n", VAR_11[0]);
  VAR_12 = -VAR_1;
  goto exit;
 }
 VAR_12 = 0;

exit:
 FUNC_2(VAR_11);
 return VAR_12;
}
