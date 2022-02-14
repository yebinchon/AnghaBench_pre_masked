
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl8xxxu_priv {int dummy; } ;


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
 int FUNC_0 (struct rtl8xxxu_priv*) ;
 int FUNC_1 (struct rtl8xxxu_priv*) ;
 int FUNC_2 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_3 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_4 (struct rtl8xxxu_priv*,int) ;
 int FUNC_5 (struct rtl8xxxu_priv*,int ,int) ;
 int FUNC_6 (struct rtl8xxxu_priv*,int ,int) ;
 int FUNC_7 (struct rtl8xxxu_priv*,int,int) ;

__attribute__((used)) static int FUNC_8(struct rtl8xxxu_priv *VAR_23)
{
 u8 VAR_24;
 u16 VAR_25;
 u32 VAR_26;
 int VAR_27;

 FUNC_1(VAR_23);

 VAR_27 = FUNC_0(VAR_23);
 if (VAR_27)
  goto exit;





 VAR_25 = FUNC_2(VAR_23, VAR_14);
 VAR_25 |= (VAR_2 | VAR_1 |
    VAR_9 | VAR_6 |
    VAR_5 | VAR_7 |
    VAR_4 | VAR_3 |
    VAR_8 | VAR_0);
 FUNC_5(VAR_23, VAR_14, VAR_25);





 FUNC_7(VAR_23, VAR_16 + 3, 0x20);

 VAR_25 = FUNC_2(VAR_23, VAR_19);
 VAR_25 |= VAR_21 | VAR_22;
 FUNC_5(VAR_23, VAR_19, VAR_25);

 FUNC_7(VAR_23, VAR_13 + 1, 0x18);
 FUNC_7(VAR_23, VAR_20, 0x04);
 FUNC_6(VAR_23, VAR_18, 0x00);

 FUNC_7(VAR_23, 0xfe08, 0x01);

 VAR_25 = FUNC_2(VAR_23, VAR_17);
 VAR_25 |= VAR_12;
 FUNC_5(VAR_23, VAR_17, VAR_25);

 VAR_26 = FUNC_3(VAR_23, VAR_15);
 VAR_26 |= VAR_10;
 FUNC_6(VAR_23, VAR_15, VAR_26);

 VAR_24 = FUNC_4(VAR_23, VAR_16);
 VAR_24 &= ~VAR_11;
 FUNC_7(VAR_23, VAR_16, VAR_24);
exit:
 return VAR_27;
}
