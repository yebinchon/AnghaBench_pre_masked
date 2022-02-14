
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct usb_serial {TYPE_2__* dev; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_4__ {int idProduct; } ;
struct TYPE_5__ {TYPE_1__ descriptor; } ;


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
 int FUNC_0 (int*) ;
 int* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct usb_serial*) ;
 int FUNC_4 (TYPE_2__*,int ,int ,int ,int ,int ,int*,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (struct usb_serial*,void*) ;

__attribute__((used)) static int FUNC_7(struct usb_serial *VAR_11,
    const struct usb_device_id *VAR_12)
{
 u16 VAR_13 = FUNC_2(VAR_11->dev->descriptor.idProduct);
 u8 *VAR_14;
 int VAR_15;

 if (VAR_13 == VAR_5 ||
  VAR_13 == VAR_6 ||
  VAR_13 == VAR_8) {
  VAR_15 = VAR_13;
  goto out;
 }

 VAR_14 = FUNC_1(VAR_10, VAR_1);
 if (!VAR_14)
  return -VAR_0;

 FUNC_4(VAR_11->dev, FUNC_5(VAR_11->dev, 0),
   VAR_3, VAR_4, 0, VAR_2, VAR_14,
   VAR_10, VAR_9);


 if (VAR_14[0] & 0x01)
  VAR_15 = VAR_7;
 else if (FUNC_3(VAR_11))
  VAR_15 = VAR_5;
 else
  VAR_15 = VAR_6;

 FUNC_0(VAR_14);
out:
 FUNC_6(VAR_11, (void *)(unsigned long)VAR_15);

 return 0;
}
