
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usbtmc_device_data {int bulk_in; int usb_dev; TYPE_1__* intf; } ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int ,int,int,int*,int,int) ;
 int FUNC_5 (int ,int ,int*,int,int*,int) ;
 int FUNC_6 (int ,int ,int ,int,int,int ,int*,int,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct usbtmc_device_data *VAR_19,
       u8 VAR_20)
{
 u8 *VAR_21;
 struct device *VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25;

 VAR_22 = &VAR_19->intf->dev;
 VAR_21 = FUNC_3(VAR_7, VAR_6);
 if (!VAR_21)
  return -VAR_2;

 VAR_23 = FUNC_6(VAR_19->usb_dev,
        FUNC_8(VAR_19->usb_dev, 0),
        VAR_10,
        VAR_16 | VAR_18 | VAR_17,
        VAR_20, VAR_19->bulk_in,
        VAR_21, 2, VAR_15);

 if (VAR_23 < 0) {
  FUNC_1(VAR_22, "usb_control_msg returned %d\n", VAR_23);
  goto exit;
 }

 FUNC_0(VAR_22, "INITIATE_ABORT_BULK_IN returned %x with tag %02x\n",
  VAR_21[0], VAR_21[1]);

 if (VAR_21[0] == VAR_11) {

  VAR_23 = 0;
  goto exit;
 }

 if (VAR_21[0] == VAR_14) {






  VAR_23 = -VAR_3;
  goto exit;
 }

 if (VAR_21[0] != VAR_13) {
  FUNC_1(VAR_22, "INITIATE_ABORT_BULK_IN returned %x\n",
   VAR_21[0]);
  VAR_23 = -VAR_4;
  goto exit;
 }

 VAR_24 = 0;

usbtmc_abort_bulk_in_status:
 FUNC_0(VAR_22, "Reading from bulk in EP\n");


 VAR_25 = 0;
 VAR_23 = FUNC_5(VAR_19->usb_dev,
     FUNC_7(VAR_19->usb_dev,
       VAR_19->bulk_in),
     VAR_21, VAR_7,
     &VAR_25, 300);

 FUNC_4("usbtmc ", VAR_0, 16, 1,
        VAR_21, VAR_25, 1);

 VAR_24++;

 if (VAR_23 < 0) {
  FUNC_1(VAR_22, "usb_bulk_msg returned %d\n", VAR_23);
  if (VAR_23 != -VAR_5)
   goto exit;
 }

 if (VAR_25 == VAR_7)
  goto usbtmc_abort_bulk_in_status;

 if (VAR_24 >= VAR_8) {
  FUNC_1(VAR_22, "Couldn't clear device buffer within %d cycles\n",
   VAR_8);
  VAR_23 = -VAR_4;
  goto exit;
 }

 VAR_23 = FUNC_6(VAR_19->usb_dev,
        FUNC_8(VAR_19->usb_dev, 0),
        VAR_9,
        VAR_16 | VAR_18 | VAR_17,
        0, VAR_19->bulk_in, VAR_21, 0x08,
        VAR_15);

 if (VAR_23 < 0) {
  FUNC_1(VAR_22, "usb_control_msg returned %d\n", VAR_23);
  goto exit;
 }

 FUNC_0(VAR_22, "CHECK_ABORT_BULK_IN returned %x\n", VAR_21[0]);

 if (VAR_21[0] == VAR_13) {
  VAR_23 = 0;
  goto exit;
 }

 if (VAR_21[0] != VAR_12) {
  FUNC_1(VAR_22, "CHECK_ABORT_BULK_IN returned %x\n", VAR_21[0]);
  VAR_23 = -VAR_4;
  goto exit;
 }

 if ((VAR_21[1] & 1) > 0) {

  goto usbtmc_abort_bulk_in_status;
 }


 VAR_23 = -VAR_1;
exit:
 FUNC_2(VAR_21);
 return VAR_23;
}
