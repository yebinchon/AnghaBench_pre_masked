
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct twl4030_bci {scalar_t__ usb_mode; int usb_enabled; scalar_t__ usb_cur; TYPE_1__* transceiver; int dev; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
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
 int VAR_19 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct twl4030_bci*) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int ,int,int ) ;

__attribute__((used)) static int FUNC_9(struct twl4030_bci *VAR_20, bool VAR_21)
{
 int VAR_22;
 u32 VAR_23;

 if (VAR_20->usb_mode == VAR_2)
  VAR_21 = 0;
 if (VAR_21 && !FUNC_0(VAR_20->transceiver)) {

  FUNC_5(VAR_20);


  if (!VAR_20->usb_enabled) {
   FUNC_2(VAR_20->transceiver->dev);
   VAR_20->usb_enabled = 1;
  }

  if (VAR_20->usb_mode == VAR_0) {

   VAR_23 = ~(u32)(VAR_13 | VAR_12 |
     VAR_17 | VAR_16 |
     VAR_3);
   VAR_22 = FUNC_8(VAR_15, VAR_23,
           VAR_14);
   if (VAR_22 < 0) {
    FUNC_1(VAR_20->dev,
     "failed to unmask interrupts: %d\n",
     VAR_22);
    return VAR_22;
   }

   VAR_22 = FUNC_7(0, VAR_5);
  }


  VAR_22 = FUNC_6(VAR_19, 0,
   VAR_18, VAR_9);
  if (VAR_20->usb_mode == VAR_1) {

   VAR_23 = ~(u32)(VAR_13 | VAR_17 |
     VAR_16 | VAR_3);
   VAR_22 = FUNC_8(VAR_15, VAR_23,
           VAR_14);
   if (VAR_22 < 0) {
    FUNC_1(VAR_20->dev,
     "failed to unmask interrupts: %d\n",
     VAR_22);
    return VAR_22;
   }
   FUNC_7(VAR_4|VAR_11, 0);

   VAR_22 = FUNC_8(VAR_19, 0x33,
            VAR_10);

   VAR_22 = FUNC_8(VAR_19, 0x2a,
            VAR_6);

   VAR_22 = FUNC_8(VAR_19, 0x26,
            VAR_6);

   VAR_22 = FUNC_8(VAR_19, 0xf3,
            VAR_10);

   VAR_22 = FUNC_8(VAR_19, 0x9c,
            VAR_8);





   VAR_22 = FUNC_8(VAR_19, 0xf0,
            VAR_7);
  }
 } else {
  VAR_22 = FUNC_7(VAR_5, 0);
  VAR_22 |= FUNC_8(VAR_19, 0x2a,
     VAR_6);
  if (VAR_20->usb_enabled) {
   FUNC_3(VAR_20->transceiver->dev);
   FUNC_4(VAR_20->transceiver->dev);
   VAR_20->usb_enabled = 0;
  }
  VAR_20->usb_cur = 0;
 }

 return VAR_22;
}
