
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usbtmc_device_data {int bulk_out; int usb_dev; TYPE_1__* intf; } ;
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
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ,int,int,int ,int*,int,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct usbtmc_device_data *VAR_12,
        u8 VAR_13)
{
 struct device *VAR_14;
 u8 *VAR_15;
 int VAR_16;
 int VAR_17;

 VAR_14 = &VAR_12->intf->dev;

 VAR_15 = FUNC_3(8, VAR_2);
 if (!VAR_15)
  return -VAR_0;

 VAR_16 = FUNC_6(VAR_12->usb_dev,
        FUNC_7(VAR_12->usb_dev, 0),
        VAR_5,
        VAR_9 | VAR_11 | VAR_10,
        VAR_13, VAR_12->bulk_out,
        VAR_15, 2, VAR_8);

 if (VAR_16 < 0) {
  FUNC_1(VAR_14, "usb_control_msg returned %d\n", VAR_16);
  goto exit;
 }

 FUNC_0(VAR_14, "INITIATE_ABORT_BULK_OUT returned %x\n", VAR_15[0]);

 if (VAR_15[0] != VAR_7) {
  FUNC_1(VAR_14, "INITIATE_ABORT_BULK_OUT returned %x\n",
   VAR_15[0]);
  VAR_16 = -VAR_1;
  goto exit;
 }

 VAR_17 = 0;

usbtmc_abort_bulk_out_check_status:

 FUNC_4(50);
 VAR_16 = FUNC_6(VAR_12->usb_dev,
        FUNC_7(VAR_12->usb_dev, 0),
        VAR_4,
        VAR_9 | VAR_11 | VAR_10,
        0, VAR_12->bulk_out, VAR_15, 0x08,
        VAR_8);
 VAR_17++;
 if (VAR_16 < 0) {
  FUNC_1(VAR_14, "usb_control_msg returned %d\n", VAR_16);
  goto exit;
 }

 FUNC_0(VAR_14, "CHECK_ABORT_BULK_OUT returned %x\n", VAR_15[0]);

 if (VAR_15[0] == VAR_7)
  goto usbtmc_abort_bulk_out_clear_halt;

 if ((VAR_15[0] == VAR_6) &&
     (VAR_17 < VAR_3))
  goto usbtmc_abort_bulk_out_check_status;

 VAR_16 = -VAR_1;
 goto exit;

usbtmc_abort_bulk_out_clear_halt:
 VAR_16 = FUNC_5(VAR_12->usb_dev,
       FUNC_8(VAR_12->usb_dev, VAR_12->bulk_out));

 if (VAR_16 < 0) {
  FUNC_1(VAR_14, "usb_control_msg returned %d\n", VAR_16);
  goto exit;
 }
 VAR_16 = 0;

exit:
 FUNC_2(VAR_15);
 return VAR_16;
}
