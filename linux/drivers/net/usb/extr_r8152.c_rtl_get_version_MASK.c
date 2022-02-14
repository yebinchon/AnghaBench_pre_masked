
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct usb_interface {int dev; } ;
struct usb_device {int dummy; } ;
typedef int __le32 ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int) ;
 struct usb_device* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int,int ) ;
 int FUNC_6 (struct usb_device*,int ,int ,int ,int ,int ,int *,int,int) ;
 int FUNC_7 (struct usb_device*,int ) ;

__attribute__((used)) static u8 FUNC_8(struct usb_interface *VAR_16)
{
 struct usb_device *VAR_17 = FUNC_3(VAR_16);
 u32 VAR_18 = 0;
 __le32 *VAR_19;
 u8 VAR_20;
 int VAR_21;

 VAR_19 = FUNC_5(sizeof(*VAR_19), VAR_0);
 if (!VAR_19)
  return 0;

 VAR_21 = FUNC_6(VAR_17, FUNC_7(VAR_17, 0),
         VAR_4, VAR_3,
         VAR_2, VAR_1, VAR_19, sizeof(*VAR_19), 500);
 if (VAR_21 > 0)
  VAR_18 = (FUNC_0(*VAR_19) >> 16) & VAR_15;

 FUNC_4(VAR_19);

 switch (VAR_18) {
 case 0x4c00:
  VAR_20 = VAR_5;
  break;
 case 0x4c10:
  VAR_20 = VAR_6;
  break;
 case 0x5c00:
  VAR_20 = VAR_7;
  break;
 case 0x5c10:
  VAR_20 = VAR_8;
  break;
 case 0x5c20:
  VAR_20 = VAR_9;
  break;
 case 0x5c30:
  VAR_20 = VAR_10;
  break;
 case 0x4800:
  VAR_20 = VAR_11;
  break;
 case 0x6000:
  VAR_20 = VAR_12;
  break;
 case 0x6010:
  VAR_20 = VAR_13;
  break;
 default:
  VAR_20 = VAR_14;
  FUNC_2(&VAR_16->dev, "Unknown version 0x%04x\n", VAR_18);
  break;
 }

 FUNC_1(&VAR_16->dev, "Detected version 0x%04x\n", VAR_20);

 return VAR_20;
}
