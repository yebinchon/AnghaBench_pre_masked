
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usbtmc_device_data {int bulk_out; int usb_dev; int bulk_in; TYPE_1__* intf; } ;
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int ,int,int,int*,int,int) ;
 int FUNC_6 (int ,int ,int*,int,int*,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ,int,int ,int ,int*,int,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static int FUNC_12(struct usbtmc_device_data *VAR_14)
{
 struct device *VAR_15;
 u8 *VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19 = 0;

 VAR_15 = &VAR_14->intf->dev;

 FUNC_0(VAR_15, "Sending INITIATE_CLEAR request\n");

 VAR_16 = FUNC_3(VAR_4, VAR_3);
 if (!VAR_16)
  return -VAR_1;

 VAR_17 = FUNC_8(VAR_14->usb_dev,
        FUNC_10(VAR_14->usb_dev, 0),
        VAR_7,
        VAR_11 | VAR_13 | VAR_12,
        0, 0, VAR_16, 1, VAR_10);
 if (VAR_17 < 0) {
  FUNC_1(VAR_15, "usb_control_msg returned %d\n", VAR_17);
  goto exit;
 }

 FUNC_0(VAR_15, "INITIATE_CLEAR returned %x\n", VAR_16[0]);

 if (VAR_16[0] != VAR_9) {
  FUNC_1(VAR_15, "INITIATE_CLEAR returned %x\n", VAR_16[0]);
  VAR_17 = -VAR_2;
  goto exit;
 }

 VAR_18 = 0;

usbtmc_clear_check_status:

 FUNC_0(VAR_15, "Sending CHECK_CLEAR_STATUS request\n");

 VAR_17 = FUNC_8(VAR_14->usb_dev,
        FUNC_10(VAR_14->usb_dev, 0),
        VAR_6,
        VAR_11 | VAR_13 | VAR_12,
        0, 0, VAR_16, 2, VAR_10);
 if (VAR_17 < 0) {
  FUNC_1(VAR_15, "usb_control_msg returned %d\n", VAR_17);
  goto exit;
 }

 FUNC_0(VAR_15, "CHECK_CLEAR_STATUS returned %x\n", VAR_16[0]);

 if (VAR_16[0] == VAR_9)
  goto usbtmc_clear_bulk_out_halt;

 if (VAR_16[0] != VAR_8) {
  FUNC_1(VAR_15, "CHECK_CLEAR_STATUS returned %x\n", VAR_16[0]);
  VAR_17 = -VAR_2;
  goto exit;
 }

 if ((VAR_16[1] & 1) != 0) {
  do {
   FUNC_0(VAR_15, "Reading from bulk in EP\n");

   VAR_19 = 0;
   VAR_17 = FUNC_6(VAR_14->usb_dev,
       FUNC_9(VAR_14->usb_dev,
         VAR_14->bulk_in),
       VAR_16, VAR_4,
       &VAR_19, VAR_10);

   FUNC_5("usbtmc ", VAR_0,
          16, 1, VAR_16, VAR_19, 1);

   VAR_18++;

   if (VAR_17 < 0) {
    FUNC_1(VAR_15, "usb_control_msg returned %d\n",
     VAR_17);
    goto exit;
   }
  } while ((VAR_19 == VAR_4) &&
     (VAR_18 < VAR_5));
 } else {

  FUNC_4(50);
  VAR_18++;
 }

 if (VAR_18 >= VAR_5) {
  FUNC_1(VAR_15, "Couldn't clear device buffer within %d cycles\n",
   VAR_5);
  VAR_17 = -VAR_2;
  goto exit;
 }

 goto usbtmc_clear_check_status;

usbtmc_clear_bulk_out_halt:

 VAR_17 = FUNC_7(VAR_14->usb_dev,
       FUNC_11(VAR_14->usb_dev, VAR_14->bulk_out));
 if (VAR_17 < 0) {
  FUNC_1(VAR_15, "usb_clear_halt returned %d\n", VAR_17);
  goto exit;
 }
 VAR_17 = 0;

exit:
 FUNC_2(VAR_16);
 return VAR_17;
}
