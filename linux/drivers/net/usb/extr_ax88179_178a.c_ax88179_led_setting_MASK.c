
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usbnet {int dummy; } ;


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
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int FUNC_0 (struct usbnet*) ;
 int FUNC_1 (struct usbnet*,int*) ;
 int FUNC_2 (struct usbnet*,int*) ;
 int FUNC_3 (struct usbnet*,int ,int ,int,int,int*) ;
 scalar_t__ FUNC_4 (struct usbnet*,int ,int ,int,int,int*) ;
 int VAR_57 ;
 scalar_t__ FUNC_5 (int,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct usbnet *VAR_58)
{
 u8 VAR_59, VAR_60 = 0;
 u16 VAR_61, VAR_62, VAR_63, VAR_64 = 0, VAR_65 = VAR_37 / 10;
 unsigned long VAR_66;


 FUNC_3(VAR_58, VAR_1, VAR_16, 1, 1, &VAR_60);

 if (!(VAR_60 & VAR_8)) {
  VAR_60 = VAR_6 | VAR_5 |
   VAR_4;
  if (FUNC_4(VAR_58, VAR_1, VAR_3,
          1, 1, &VAR_60) < 0)
   return -VAR_15;
 }


 if (!FUNC_0(VAR_58)) {
  VAR_60 = 0x42;
  if (FUNC_4(VAR_58, VAR_1, VAR_9,
          1, 1, &VAR_60) < 0)
   return -VAR_15;

  VAR_60 = VAR_14;
  if (FUNC_4(VAR_58, VAR_1, VAR_10,
          1, 1, &VAR_60) < 0)
   return -VAR_15;

  VAR_66 = VAR_57 + VAR_65;
  do {
   FUNC_3(VAR_58, VAR_1, VAR_10,
      1, 1, &VAR_60);

   if (FUNC_5(VAR_57, VAR_66))
    return -VAR_15;

  } while (VAR_60 & VAR_13);

  FUNC_3(VAR_58, VAR_1, VAR_11,
     1, 1, &VAR_60);
  VAR_64 = (VAR_60 << 8);

  FUNC_3(VAR_58, VAR_1, VAR_12,
     1, 1, &VAR_60);
  VAR_64 |= VAR_60;


  if ((VAR_64 == 0xFFFF) || ((VAR_64 & VAR_56) == 0))
   FUNC_2(VAR_58, &VAR_64);

 } else if (!FUNC_1(VAR_58, &VAR_64)) {
  if ((VAR_64 == 0xFFFF) || ((VAR_64 & VAR_56) == 0))
   FUNC_2(VAR_58, &VAR_64);
 } else {
  FUNC_2(VAR_58, &VAR_64);
 }

 VAR_61 = VAR_35;
 FUNC_4(VAR_58, VAR_2, VAR_0,
     VAR_34, 2, &VAR_61);

 VAR_61 = 0x2c;
 FUNC_4(VAR_58, VAR_2, VAR_0,
     VAR_33, 2, &VAR_61);

 FUNC_3(VAR_58, VAR_2, VAR_0,
    VAR_29, 2, &VAR_62);

 FUNC_3(VAR_58, VAR_2, VAR_0,
    VAR_31, 2, &VAR_63);

 VAR_62 &= VAR_30;
 VAR_63 &= VAR_32;

 if (VAR_64 & VAR_38)
  VAR_62 |= VAR_17;

 if (VAR_64 & VAR_44)
  VAR_62 |= VAR_21;

 if (VAR_64 & VAR_50)
  VAR_62 |= VAR_25;

 if (VAR_64 & VAR_40)
  VAR_63 |= VAR_18;

 if (VAR_64 & VAR_46)
  VAR_63 |= VAR_22;

 if (VAR_64 & VAR_52)
  VAR_63 |= VAR_26;

 if (VAR_64 & VAR_41)
  VAR_63 |= VAR_19;

 if (VAR_64 & VAR_47)
  VAR_63 |= VAR_23;

 if (VAR_64 & VAR_53)
  VAR_63 |= VAR_27;

 if (VAR_64 & VAR_42)
  VAR_63 |= VAR_20;

 if (VAR_64 & VAR_48)
  VAR_63 |= VAR_24;

 if (VAR_64 & VAR_54)
  VAR_63 |= VAR_28;

 VAR_61 = VAR_62;
 FUNC_4(VAR_58, VAR_2, VAR_0,
     VAR_29, 2, &VAR_61);

 VAR_61 = VAR_63;
 FUNC_4(VAR_58, VAR_2, VAR_0,
     VAR_31, 2, &VAR_61);

 VAR_61 = VAR_36;
 FUNC_4(VAR_58, VAR_2, VAR_0,
     VAR_34, 2, &VAR_61);


 VAR_59 = 0;
 if (VAR_64 & VAR_39)
  VAR_59 |= 0x01;
 else if ((VAR_64 & VAR_43) == 0)
  VAR_59 |= 0x02;

 if (VAR_64 & VAR_45)
  VAR_59 |= 0x04;
 else if ((VAR_64 & VAR_49) == 0)
  VAR_59 |= 0x08;

 if (VAR_64 & VAR_51)
  VAR_59 |= 0x10;
 else if ((VAR_64 & VAR_55) == 0)
  VAR_59 |= 0x20;

 FUNC_4(VAR_58, VAR_1, VAR_7, 1, 1, &VAR_59);

 return 0;
}
