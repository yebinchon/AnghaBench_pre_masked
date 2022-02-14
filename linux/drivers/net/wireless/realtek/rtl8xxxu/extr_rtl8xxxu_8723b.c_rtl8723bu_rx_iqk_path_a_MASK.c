
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl8xxxu_priv {int rf_paths; } ;


 int FUNC_0 (int) ;
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
 int FUNC_1 (int) ;
 int FUNC_2 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_3 (struct rtl8xxxu_priv*,int ,int ) ;
 int FUNC_4 (struct rtl8xxxu_priv*,int ,int) ;
 int FUNC_5 (struct rtl8xxxu_priv*,int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct rtl8xxxu_priv *VAR_26)
{
 u32 VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32;
 int VAR_33 = 0;

 VAR_31 = FUNC_2(VAR_26, VAR_11);




 VAR_32 = FUNC_2(VAR_26, VAR_1);
 VAR_32 &= 0x000000ff;
 FUNC_4(VAR_26, VAR_1, VAR_32);




 VAR_32 = FUNC_3(VAR_26, VAR_25, VAR_24);
 VAR_32 |= 0x80000;
 FUNC_5(VAR_26, VAR_25, VAR_24, VAR_32);
 FUNC_5(VAR_26, VAR_25, VAR_19, 0x30000);
 FUNC_5(VAR_26, VAR_25, VAR_20, 0x0001f);
 FUNC_5(VAR_26, VAR_25, VAR_21, 0xf7fb7);




 FUNC_4(VAR_26, VAR_12, 0x01007c00);
 FUNC_4(VAR_26, VAR_4, 0x01004800);


 FUNC_4(VAR_26, VAR_15, 0x18008c1c);
 FUNC_4(VAR_26, VAR_7, 0x38008c1c);
 FUNC_4(VAR_26, VAR_16, 0x38008c1c);
 FUNC_4(VAR_26, VAR_8, 0x38008c1c);

 FUNC_4(VAR_26, VAR_13, 0x82160ff0);
 FUNC_4(VAR_26, VAR_5, 0x28110000);
 FUNC_4(VAR_26, VAR_14, 0x82110000);
 FUNC_4(VAR_26, VAR_6, 0x28110000);


 FUNC_4(VAR_26, VAR_3, 0x0046a911);




 VAR_32 = FUNC_2(VAR_26, VAR_1);
 VAR_32 &= 0x000000ff;
 VAR_32 |= 0x80800000;
 FUNC_4(VAR_26, VAR_1, VAR_32);





 if (VAR_26->rf_paths > 1)
  FUNC_4(VAR_26, VAR_11, 0x00000000);
 else
  FUNC_4(VAR_26, VAR_11, 0x00000280);





 FUNC_4(VAR_26, VAR_0, 0x00000800);


 FUNC_4(VAR_26, VAR_2, 0xf9000000);
 FUNC_4(VAR_26, VAR_2, 0xf8000000);

 FUNC_1(1);


 FUNC_4(VAR_26, VAR_11, VAR_31);
 VAR_32 = FUNC_2(VAR_26, VAR_1);
 VAR_32 &= 0x000000ff;
 FUNC_4(VAR_26, VAR_1, VAR_32);


 VAR_28 = FUNC_2(VAR_26, VAR_9);
 VAR_29 = FUNC_2(VAR_26, VAR_18);
 VAR_30 = FUNC_2(VAR_26, VAR_17);

 VAR_32 = (VAR_30 >> 16) & 0x3ff;
 if (VAR_32 & 0x200)
  VAR_32 = 0x400 - VAR_32;

 if (!(VAR_28 & FUNC_0(28)) &&
     ((VAR_29 & 0x03ff0000) != 0x01420000) &&
     ((VAR_30 & 0x03ff0000) != 0x00420000) &&
     ((VAR_29 & 0x03ff0000) < 0x01100000) &&
     ((VAR_29 & 0x03ff0000) > 0x00f00000) &&
     VAR_32 < 0xf)
  VAR_33 |= 0x01;
 else
  goto out;

 VAR_32 = 0x80007c00 | (VAR_29 &0x3ff0000) |
  ((VAR_30 & 0x3ff0000) >> 16);
 FUNC_4(VAR_26, VAR_12, VAR_32);




 VAR_32 = FUNC_2(VAR_26, VAR_1);
 VAR_32 &= 0x000000ff;
 FUNC_4(VAR_26, VAR_1, VAR_32);
 VAR_32 = FUNC_3(VAR_26, VAR_25, VAR_24);
 VAR_32 |= 0x80000;
 FUNC_5(VAR_26, VAR_25, VAR_24, VAR_32);
 FUNC_5(VAR_26, VAR_25, VAR_19, 0x30000);
 FUNC_5(VAR_26, VAR_25, VAR_20, 0x0001f);
 FUNC_5(VAR_26, VAR_25, VAR_21, 0xf7d77);




 FUNC_5(VAR_26, VAR_25, VAR_23, 0xf80);
 FUNC_5(VAR_26, VAR_25, VAR_22, 0x4021f);




 FUNC_4(VAR_26, VAR_4, 0x01004800);


 FUNC_4(VAR_26, VAR_15, 0x38008c1c);
 FUNC_4(VAR_26, VAR_7, 0x18008c1c);
 FUNC_4(VAR_26, VAR_16, 0x38008c1c);
 FUNC_4(VAR_26, VAR_8, 0x38008c1c);

 FUNC_4(VAR_26, VAR_13, 0x82110000);
 FUNC_4(VAR_26, VAR_5, 0x2816001f);
 FUNC_4(VAR_26, VAR_14, 0x82110000);
 FUNC_4(VAR_26, VAR_6, 0x28110000);


 FUNC_4(VAR_26, VAR_3, 0x0046a8d1);




 VAR_32 = FUNC_2(VAR_26, VAR_1);
 VAR_32 &= 0x000000ff;
 VAR_32 |= 0x80800000;
 FUNC_4(VAR_26, VAR_1, VAR_32);

 if (VAR_26->rf_paths > 1)
  FUNC_4(VAR_26, VAR_11, 0x00000000);
 else
  FUNC_4(VAR_26, VAR_11, 0x00000280);




 FUNC_4(VAR_26, VAR_0, 0x00000800);


 FUNC_4(VAR_26, VAR_2, 0xf9000000);
 FUNC_4(VAR_26, VAR_2, 0xf8000000);

 FUNC_1(1);


 FUNC_4(VAR_26, VAR_11, VAR_31);
 VAR_32 = FUNC_2(VAR_26, VAR_1);
 VAR_32 &= 0x000000ff;
 FUNC_4(VAR_26, VAR_1, VAR_32);


 VAR_28 = FUNC_2(VAR_26, VAR_9);
 VAR_27 = FUNC_2(VAR_26, VAR_10);

 FUNC_5(VAR_26, VAR_25, VAR_23, 0x780);

 VAR_32 = (VAR_28 >> 16) & 0x3ff;
 if (VAR_32 & 0x200)
  VAR_32 = 0x400 - VAR_32;

 if (!(VAR_28 & FUNC_0(27)) &&
     ((VAR_27 & 0x03ff0000) != 0x01320000) &&
     ((VAR_28 & 0x03ff0000) != 0x00360000) &&
     ((VAR_27 & 0x03ff0000) < 0x01100000) &&
     ((VAR_27 & 0x03ff0000) > 0x00f00000) &&
     VAR_32 < 0xf)
  VAR_33 |= 0x02;
 else
  goto out;
out:
 return VAR_33;
}
