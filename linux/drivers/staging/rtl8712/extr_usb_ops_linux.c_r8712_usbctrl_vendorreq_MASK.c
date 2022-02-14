
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct usb_device {int dummy; } ;
struct intf_priv {scalar_t__ intf_dev; } ;
struct dvobj_priv {struct usb_device* pusbdev; } ;
typedef scalar_t__ palloc_buf ;
typedef int addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (void*,int*,int) ;
 int FUNC_3 (struct usb_device*,unsigned int,int,int,scalar_t__,scalar_t__,int*,scalar_t__,int) ;
 unsigned int FUNC_4 (struct usb_device*,int ) ;
 unsigned int FUNC_5 (struct usb_device*,int ) ;

int FUNC_6(struct intf_priv *VAR_5, u8 VAR_6, u16 VAR_7,
        u16 VAR_8, void *VAR_9, u16 VAR_10, u8 VAR_11)
{
 unsigned int VAR_12;
 int VAR_13;
 u8 VAR_14;
 struct dvobj_priv *VAR_15 = (struct dvobj_priv *)
      VAR_5->intf_dev;
 struct usb_device *VAR_16 = VAR_15->pusbdev;



 u8 *VAR_17, *VAR_18;

 VAR_17 = FUNC_1((u32)VAR_10 + 16, VAR_1);
 if (!VAR_17)
  return -VAR_0;
 VAR_18 = VAR_17 + 16 - ((addr_t)(VAR_17) & 0x0f);
 if (VAR_11 == 0x01) {
  VAR_12 = FUNC_4(VAR_16, 0);
  VAR_14 = VAR_3;
 } else {
  VAR_12 = FUNC_5(VAR_16, 0);
  VAR_14 = VAR_4;
  FUNC_2(VAR_18, VAR_9, VAR_10);
 }
 VAR_13 = FUNC_3(VAR_16, VAR_12, VAR_6, VAR_14, VAR_7, VAR_8,
     VAR_18, VAR_10, VAR_2 / 2);
 if (VAR_13 > 0) {
  if (VAR_11 == 0x01) {



   FUNC_2(VAR_9, VAR_18, VAR_13);
  }
 }
 FUNC_0(VAR_17);
 return VAR_13;
}
