
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct usb_interface {TYPE_2__* cur_altsetting; } ;
struct usb_device {int dummy; } ;
typedef int s32 ;
struct TYPE_3__ {int bInterfaceNumber; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


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
 struct usb_device* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int,int ) ;
 int FUNC_3 (struct usb_device*,int ,int,int,int ,int ,int*,int,int ) ;
 int FUNC_4 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct usb_interface *VAR_18)
{
 struct usb_device *VAR_19 = FUNC_0(VAR_18);
 u8 *VAR_20 = FUNC_2(17, VAR_3);
 u32 VAR_21 = VAR_18->cur_altsetting->desc.bInterfaceNumber;
 s32 VAR_22;

 if (!VAR_20)
  return -VAR_2;
 if (FUNC_3(VAR_19, FUNC_4(VAR_19, 0),
       0x86, 0xC0, 0, 0, VAR_20, 17,
       VAR_17) != 0x11) {
  FUNC_1(VAR_20);
  return -VAR_1;
 }


 if (VAR_21 > 16) {
  FUNC_1(VAR_20);
  return -VAR_0;
 }

 switch (VAR_20[VAR_21]) {
 case 0x0:
  VAR_22 = 0;
  break;
 case 0x1:
  VAR_22 = VAR_9;
  break;
 case 0x2:
  VAR_22 = VAR_10;
  break;
 case 0x3:
  VAR_22 = VAR_11;
  break;
 case 0x4:
  VAR_22 = VAR_6;
  break;
 case 0x5:
  VAR_22 = VAR_7;
  break;
 case 0x6:
  VAR_22 = VAR_8;
  break;
 case 0x7:
  VAR_22 = VAR_14;
  break;
 case 0x8:
  VAR_22 = VAR_12;
  break;
 case 0x9:
  VAR_22 = VAR_13;
  break;
 case 0xa:
  VAR_22 = VAR_15;
  break;
 case 0xb:
  VAR_22 = VAR_16;
  break;
 default:
  VAR_22 = 0;
 }

 if (VAR_22)
  VAR_22 |= VAR_5;

 if (VAR_20[16] & 0x1)
  VAR_22 |= VAR_4;

 FUNC_1(VAR_20);
 return VAR_22;
}
