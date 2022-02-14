
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
 int FUNC_1 (int) ;
 int FUNC_2 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_3 (struct rtl8xxxu_priv*,int ,int ) ;
 int FUNC_4 (struct rtl8xxxu_priv*,int ,int) ;
 int FUNC_5 (struct rtl8xxxu_priv*,int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct rtl8xxxu_priv *VAR_23)
{
 u32 VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
 int VAR_29 = 0;

 VAR_27 = FUNC_2(VAR_23, VAR_10);




 VAR_28 = FUNC_2(VAR_23, VAR_1);
 VAR_28 &= 0x000000ff;
 FUNC_4(VAR_23, VAR_1, VAR_28);




 VAR_28 = FUNC_3(VAR_23, VAR_22, VAR_21);
 VAR_28 |= 0x80000;
 FUNC_5(VAR_23, VAR_22, VAR_21, VAR_28);
 FUNC_5(VAR_23, VAR_22, VAR_18, 0x20000);
 FUNC_5(VAR_23, VAR_22, VAR_19, 0x0003f);
 FUNC_5(VAR_23, VAR_22, VAR_20, 0xc7f87);




 FUNC_4(VAR_23, VAR_11, 0x01007c00);
 FUNC_4(VAR_23, VAR_4, 0x01004800);


 FUNC_4(VAR_23, VAR_14, 0x18008c1c);
 FUNC_4(VAR_23, VAR_7, 0x38008c1c);
 FUNC_4(VAR_23, VAR_15, 0x38008c1c);
 FUNC_4(VAR_23, VAR_8, 0x38008c1c);

 FUNC_4(VAR_23, VAR_12, 0x821403ea);
 FUNC_4(VAR_23, VAR_5, 0x28110000);
 FUNC_4(VAR_23, VAR_13, 0x82110000);
 FUNC_4(VAR_23, VAR_6, 0x28110000);


 FUNC_4(VAR_23, VAR_3, 0x00462911);




 VAR_28 = FUNC_2(VAR_23, VAR_1);
 VAR_28 &= 0x000000ff;
 VAR_28 |= 0x80800000;
 FUNC_4(VAR_23, VAR_1, VAR_28);





 if (VAR_23->rf_paths > 1)
  FUNC_4(VAR_23, VAR_10, 0x00000000);
 else
  FUNC_4(VAR_23, VAR_10, 0x00000280);





 FUNC_4(VAR_23, VAR_0, 0x00000800);


 FUNC_4(VAR_23, VAR_2, 0xf9000000);
 FUNC_4(VAR_23, VAR_2, 0xf8000000);

 FUNC_1(1);


 FUNC_4(VAR_23, VAR_10, VAR_27);
 VAR_28 = FUNC_2(VAR_23, VAR_1);
 VAR_28 &= 0x000000ff;
 FUNC_4(VAR_23, VAR_1, VAR_28);


 VAR_24 = FUNC_2(VAR_23, VAR_9);
 VAR_25 = FUNC_2(VAR_23, VAR_17);
 VAR_26 = FUNC_2(VAR_23, VAR_16);

 VAR_28 = (VAR_26 >> 16) & 0x3ff;
 if (VAR_28 & 0x200)
  VAR_28 = 0x400 - VAR_28;

 if (!(VAR_24 & FUNC_0(28)) &&
     ((VAR_25 & 0x03ff0000) != 0x01420000) &&
     ((VAR_26 & 0x03ff0000) != 0x00420000) &&
     ((VAR_25 & 0x03ff0000) < 0x01100000) &&
     ((VAR_25 & 0x03ff0000) > 0x00f00000) &&
     VAR_28 < 0xf)
  VAR_29 |= 0x01;
 else
  goto out;

out:
 return VAR_29;
}
