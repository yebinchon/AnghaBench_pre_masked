
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int vendor; int device; } ;
struct usb_ftdi {int controlreg; int card_ejected; int function; TYPE_2__ platform_data; TYPE_1__* udev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (struct usb_ftdi*,int,int ,int*) ;
 int FUNC_2 (struct usb_ftdi*,int*) ;

__attribute__((used)) static int FUNC_3(struct usb_ftdi *VAR_1)
{
 int VAR_2 = FUNC_2(VAR_1, &VAR_1->controlreg);
 if (VAR_2)
  return VAR_2;
 if (VAR_1->controlreg & 0x00400000) {
  if (VAR_1->card_ejected) {
  } else {
   VAR_1->card_ejected = 1;
   FUNC_0(&VAR_1->udev->dev, "CARD EJECTED - controlreg = %08X\n",
    VAR_1->controlreg);
  }
  return -VAR_0;
 } else {
  u8 VAR_3 = VAR_1->function - 1;
  int VAR_4 = VAR_3 << 8;
  u32 VAR_5;
  u32 VAR_6;
  u32 VAR_7;
  int VAR_8 = 0;
  VAR_2 = FUNC_1(VAR_1, VAR_4 | VAR_8, 0,
         &VAR_5);
  if (VAR_2)
   return VAR_2;
  VAR_6 = VAR_5 & 0xFFFF;
  VAR_7 = (VAR_5 >> 16) & 0xFFFF;
  if (VAR_6 == VAR_1->platform_data.vendor && VAR_7 ==
      VAR_1->platform_data.device) {
   return 0;
  } else {
   FUNC_0(&VAR_1->udev->dev, "vendor=%04X pciVID=%04X device=%04X pciPID=%04X\n",
    VAR_1->platform_data.vendor, VAR_6,
    VAR_1->platform_data.device, VAR_7);
   return -VAR_0;
  }
 }
}
