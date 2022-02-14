
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;
struct comedi_device {int class_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 struct usb_device* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int,int ) ;
 int* FUNC_4 (int const*,size_t,int ) ;
 int FUNC_5 (struct usb_device*,int ,int ,int ,int ,int,int*,int,int ) ;
 int FUNC_6 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_7,
      const u8 *VAR_8, size_t VAR_9,
      unsigned long VAR_10)
{
 struct usb_device *VAR_11 = FUNC_0(VAR_7);
 u8 *VAR_12;
 u8 *VAR_13;
 int VAR_14;

 if (!VAR_8)
  return 0;

 if (VAR_9 > VAR_5) {
  FUNC_1(VAR_7->class_dev,
   "usbdux firmware binary it too large for FX2.\n");
  return -VAR_1;
 }


 VAR_12 = FUNC_4(VAR_8, VAR_9, VAR_2);
 if (!VAR_12)
  return -VAR_1;


 VAR_13 = FUNC_3(1, VAR_2);
 if (!VAR_13) {
  FUNC_2(VAR_12);
  return -VAR_1;
 }


 *VAR_13 = 1;
 VAR_14 = FUNC_5(VAR_11, FUNC_6(VAR_11, 0),
         VAR_4,
         VAR_6,
         VAR_3, 0x0000,
         VAR_13, 1,
         VAR_0);
 if (VAR_14 < 0) {
  FUNC_1(VAR_7->class_dev, "can not stop firmware\n");
  goto done;
 }


 VAR_14 = FUNC_5(VAR_11, FUNC_6(VAR_11, 0),
         VAR_4,
         VAR_6,
         0, 0x0000,
         VAR_12, VAR_9,
         VAR_0);
 if (VAR_14 < 0) {
  FUNC_1(VAR_7->class_dev, "firmware upload failed\n");
  goto done;
 }


 *VAR_13 = 0;
 VAR_14 = FUNC_5(VAR_11, FUNC_6(VAR_11, 0),
         VAR_4,
         VAR_6,
         VAR_3, 0x0000,
         VAR_13, 1,
         VAR_0);
 if (VAR_14 < 0)
  FUNC_1(VAR_7->class_dev, "can not start firmware\n");

done:
 FUNC_2(VAR_13);
 FUNC_2(VAR_12);
 return VAR_14;
}
