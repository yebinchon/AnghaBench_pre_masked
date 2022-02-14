
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef void* u16 ;
typedef int tmp8 ;
typedef int tmp32 ;
typedef int tmp16 ;
struct usb_device {int dummy; } ;
struct dt9812_private {scalar_t__ device; } ;
struct comedi_device {int class_dev; struct dt9812_private* private; } ;
typedef int __le32 ;
typedef int __le16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct usb_device* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,void*,void*,scalar_t__,int ) ;
 int FUNC_3 (struct comedi_device*,int,int *,int) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct usb_device*) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_3)
{
 struct usb_device *VAR_4 = FUNC_0(VAR_3);
 struct dt9812_private *VAR_5 = VAR_3->private;
 u32 VAR_6;
 u16 VAR_7;
 u16 VAR_8;
 u8 VAR_9;
 __le16 VAR_10;
 __le32 VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_12 = FUNC_3(VAR_3, 0, &VAR_9, sizeof(VAR_9));
 if (VAR_12) {




  FUNC_6(VAR_4);
  for (VAR_13 = 0; VAR_13 < 10; VAR_13++) {
   VAR_12 = FUNC_3(VAR_3, 1, &VAR_9, sizeof(VAR_9));
   if (VAR_12 == 0)
    break;
  }
  if (VAR_12) {
   FUNC_1(VAR_3->class_dev,
    "unable to reset configuration\n");
   return VAR_12;
  }
 }

 VAR_12 = FUNC_3(VAR_3, 1, &VAR_10, sizeof(VAR_10));
 if (VAR_12) {
  FUNC_1(VAR_3->class_dev, "failed to read vendor id\n");
  return VAR_12;
 }
 VAR_7 = FUNC_4(VAR_10);

 VAR_12 = FUNC_3(VAR_3, 3, &VAR_10, sizeof(VAR_10));
 if (VAR_12) {
  FUNC_1(VAR_3->class_dev, "failed to read product id\n");
  return VAR_12;
 }
 VAR_8 = FUNC_4(VAR_10);

 VAR_12 = FUNC_3(VAR_3, 5, &VAR_10, sizeof(VAR_10));
 if (VAR_12) {
  FUNC_1(VAR_3->class_dev, "failed to read device id\n");
  return VAR_12;
 }
 VAR_5->device = FUNC_4(VAR_10);

 VAR_12 = FUNC_3(VAR_3, 7, &VAR_11, sizeof(VAR_11));
 if (VAR_12) {
  FUNC_1(VAR_3->class_dev, "failed to read serial number\n");
  return VAR_12;
 }
 VAR_6 = FUNC_5(VAR_11);


 FUNC_2(VAR_3->class_dev, "USB DT9812 (%4.4x.%4.4x.%4.4x) #0x%8.8x\n",
   VAR_7, VAR_8, VAR_5->device, VAR_6);

 if (VAR_5->device != VAR_0 &&
     VAR_5->device != VAR_1) {
  FUNC_1(VAR_3->class_dev, "Unsupported device!\n");
  return -VAR_2;
 }

 return 0;
}
