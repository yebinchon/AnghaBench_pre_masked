
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct twl6030_usb {int asleep; int linkstat; int dev; int usb3v3; } ;
typedef int irqreturn_t ;
typedef enum musb_vbus_id_status { ____Placeholder_musb_vbus_id_status } musb_vbus_id_status ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct twl6030_usb*,int ,int ) ;
 int FUNC_4 (struct twl6030_usb*,int ,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_10, void *VAR_11)
{
 struct twl6030_usb *VAR_12 = VAR_11;
 enum musb_vbus_id_status VAR_13 = VAR_2;
 u8 VAR_14;
 int VAR_15;

 VAR_14 = FUNC_3(VAR_12, VAR_5, VAR_3);

 if (VAR_14 & VAR_4) {
  VAR_15 = FUNC_2(VAR_12->usb3v3);
  if (VAR_15)
   FUNC_0(VAR_12->dev, "Failed to enable usb3v3\n");

  VAR_12->asleep = 1;
  FUNC_4(VAR_12, VAR_6, 0x1, VAR_7);
  FUNC_4(VAR_12, VAR_6, 0x10, VAR_8);
  VAR_13 = VAR_1;
  VAR_12->linkstat = VAR_13;
  VAR_15 = FUNC_1(VAR_13);
  if (VAR_15)
   VAR_12->linkstat = VAR_2;
 } else {
  FUNC_4(VAR_12, VAR_6, 0x10, VAR_7);
  FUNC_4(VAR_12, VAR_6, 0x1, VAR_8);
 }
 FUNC_4(VAR_12, VAR_6, VAR_13, VAR_9);

 return VAR_0;
}
