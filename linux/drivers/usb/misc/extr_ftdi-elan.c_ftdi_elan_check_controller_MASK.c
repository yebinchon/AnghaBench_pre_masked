
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct usb_ftdi {TYPE_1__* udev; } ;
struct TYPE_4__ {int a; int* portstatus; int status; int b; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
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
 int VAR_20 ;
 int VAR_21 ;

 int VAR_22 ;


 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_1 (int *,char*,...) ;
 scalar_t__ VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_2 (struct usb_ftdi*,int,int*) ;
 int FUNC_3 (struct usb_ftdi*,int,int) ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 TYPE_2__ VAR_39 ;

__attribute__((used)) static int FUNC_6(struct usb_ftdi *VAR_40, int VAR_41)
{
 int VAR_42 = 0;
 int VAR_43;
 u32 VAR_44;
 int VAR_45;
 u32 VAR_46;
 u32 VAR_47 = -1;
 u32 VAR_48;
 u32 VAR_49;
 u32 VAR_50;
 u32 VAR_51;
 u32 VAR_52;
 u32 VAR_53;
 int VAR_54 = VAR_10;
 int VAR_55 = 0;
 int VAR_56 = 30;
 int VAR_57;
 VAR_43 = FUNC_3(VAR_40, VAR_37, VAR_11);
 if (VAR_43)
  return VAR_43;
 VAR_43 = FUNC_2(VAR_40, VAR_46, &VAR_46);
 if (VAR_43)
  return VAR_43;
 VAR_43 = FUNC_2(VAR_40, VAR_39.a, &VAR_47);
 if (VAR_43)
  return VAR_43;
 VAR_45 = VAR_47 & VAR_23;
 VAR_43 = FUNC_2(VAR_40, VAR_49, &VAR_50);
 if (VAR_43)
  return VAR_43;
 VAR_50 &= 0x3fff;
 if (VAR_50 != VAR_1) {
 }
 VAR_50 |= FUNC_0(VAR_50) << 16;
 VAR_43 = FUNC_2(VAR_40, VAR_46, &VAR_44);
 if (VAR_43)
  return VAR_43;
 switch (VAR_44 & VAR_6) {
 case 130:
  VAR_55 = 0;
  break;
 case 128:
 case 129:
  VAR_44 &= VAR_7;
  VAR_44 |= 129;
  VAR_55 = 10;
  break;
 default:
  VAR_44 &= VAR_7;
  VAR_44 |= VAR_22;
  VAR_55 = 50;
  break;
 }
 VAR_43 = FUNC_3(VAR_40, VAR_46, VAR_44);
 if (VAR_43)
  return VAR_43;
 VAR_43 = FUNC_2(VAR_40, VAR_46, &VAR_46);
 if (VAR_43)
  return VAR_43;
 FUNC_5(VAR_55);
 VAR_43 = FUNC_2(VAR_40, VAR_39.a, &VAR_53);
 if (VAR_43)
  return VAR_43;
 if (!(VAR_53 & VAR_25)) {
  for (VAR_57 = 0; VAR_57 < VAR_45; VAR_57++) {
   VAR_43 = FUNC_3(VAR_40,
         VAR_39.portstatus[VAR_57], VAR_32);
   if (VAR_43)
    return VAR_43;
  }
 }
 VAR_43 = FUNC_2(VAR_40, VAR_46, &VAR_46);
 if (VAR_43)
  return VAR_43;
retry:VAR_43 = FUNC_2(VAR_40, VAR_52, &VAR_48);
 if (VAR_43)
  return VAR_43;
 VAR_43 = FUNC_3(VAR_40, VAR_52, VAR_8);
 if (VAR_43)
  return VAR_43;
extra:{
  VAR_43 = FUNC_2(VAR_40, VAR_52, &VAR_48);
  if (VAR_43)
   return VAR_43;
  if (0 != (VAR_48 & VAR_8)) {
   if (--VAR_56 == 0) {
    FUNC_1(&VAR_40->udev->dev, "USB HC reset timed out!\n");
    return -VAR_0;
   } else {
    FUNC_5(5);
    goto extra;
   }
  }
 }
 if (VAR_41 & VAR_20) {
  VAR_43 = FUNC_3(VAR_40, VAR_46, VAR_44);
  if (VAR_43)
   return VAR_43;
  VAR_43 = FUNC_2(VAR_40, VAR_46, &VAR_46);
  if (VAR_43)
   return VAR_43;
 }
 VAR_43 = FUNC_3(VAR_40, VAR_35, 0x00000000);
 if (VAR_43)
  return VAR_43;
 VAR_43 = FUNC_3(VAR_40, VAR_34, 0x11000000);
 if (VAR_43)
  return VAR_43;
 VAR_43 = FUNC_3(VAR_40, VAR_36, 0x00000000);
 if (VAR_43)
  return VAR_43;
 VAR_43 = FUNC_2(VAR_40, VAR_49, &VAR_49);
 if (VAR_43)
  return VAR_43;
 VAR_43 = FUNC_3(VAR_40, VAR_49,
       ((VAR_49 & VAR_2) ^ VAR_2) | VAR_50);
 if (VAR_43)
  return VAR_43;
 VAR_43 = FUNC_3(VAR_40, VAR_51,
       ((9 *VAR_50) / 10) & 0x3fff);
 if (VAR_43)
  return VAR_43;
 VAR_43 = FUNC_2(VAR_40, VAR_49, &VAR_49);
 if (VAR_43)
  return VAR_43;
 VAR_43 = FUNC_2(VAR_40, VAR_51, &VAR_51);
 if (VAR_43)
  return VAR_43;
 if (0 == (VAR_49 & 0x3fff0000) || 0 == VAR_51) {
  if (!(VAR_41 & VAR_20)) {
   VAR_41 |= VAR_20;
   goto retry;
  } else
   FUNC_1(&VAR_40->udev->dev, "init err(%08x %04x)\n",
    VAR_49, VAR_51);
 }
 VAR_44 &= VAR_7;
 VAR_44 |= VAR_4 | VAR_5 | 130;
 VAR_43 = FUNC_3(VAR_40, VAR_46, VAR_44);
 if (VAR_43)
  return VAR_43;
 VAR_43 = FUNC_3(VAR_40, VAR_52, VAR_3);
 if (VAR_43)
  return VAR_43;
 VAR_43 = FUNC_2(VAR_40, VAR_52, &VAR_52);
 if (VAR_43)
  return VAR_43;
 VAR_43 = FUNC_2(VAR_40, VAR_46, &VAR_46);
 if (VAR_43)
  return VAR_43;
 VAR_43 = FUNC_3(VAR_40, VAR_39.status, VAR_30);
 if (VAR_43)
  return VAR_43;
 VAR_43 = FUNC_3(VAR_40, VAR_38, VAR_54);
 if (VAR_43)
  return VAR_43;
 VAR_43 = FUNC_3(VAR_40, VAR_37,
       VAR_11 | VAR_12 | VAR_14 | VAR_9 |
       VAR_17 | VAR_13 | VAR_15 | VAR_18 |
       VAR_16);
 if (VAR_43)
  return VAR_43;
 VAR_43 = FUNC_2(VAR_40, VAR_39.a, &VAR_53);
 if (VAR_43)
  return VAR_43;
 VAR_53 &= ~(VAR_28 | VAR_26);
 if (VAR_41 & VAR_21) {
  VAR_53 |= VAR_24;
  VAR_53 &= ~(VAR_27 | VAR_25);
  VAR_43 = FUNC_3(VAR_40, VAR_39.a, VAR_53);
  if (VAR_43)
   return VAR_43;
 } else if ((VAR_41 & VAR_19) || VAR_33) {
  VAR_53 |= VAR_25;
  VAR_43 = FUNC_3(VAR_40, VAR_39.a, VAR_53);
  if (VAR_43)
   return VAR_43;
 }
 VAR_43 = FUNC_3(VAR_40, VAR_39.status, VAR_31);
 if (VAR_43)
  return VAR_43;
 VAR_43 = FUNC_3(VAR_40, VAR_39.b,
       (VAR_53 & VAR_25) ? 0 : VAR_29);
 if (VAR_43)
  return VAR_43;
 VAR_43 = FUNC_2(VAR_40, VAR_46, &VAR_46);
 if (VAR_43)
  return VAR_43;
 FUNC_4((VAR_53 >> 23) & 0x1fe);
 for (VAR_57 = 0; VAR_57 < VAR_45; VAR_57++) {
  u32 VAR_58;
  VAR_43 = FUNC_2(VAR_40, VAR_39.portstatus[VAR_57],
       &VAR_58);
  if (VAR_43)
   return VAR_43;
  if (1 & VAR_58)
   VAR_42 += 1;
 }
 return VAR_42;
}
