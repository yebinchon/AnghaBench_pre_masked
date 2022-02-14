
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int FUNC_0 (struct rtl8xxxu_priv*) ;
 int FUNC_1 (struct rtl8xxxu_priv*) ;
 int FUNC_2 (struct rtl8xxxu_priv*) ;
 int FUNC_3 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_4 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_5 (struct rtl8xxxu_priv*,int ,int) ;
 int FUNC_6 (struct rtl8xxxu_priv*,int ,int) ;
 int FUNC_7 (struct rtl8xxxu_priv*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct rtl8xxxu_priv *VAR_15)
{
 u16 VAR_16;
 u32 VAR_17;
 int VAR_18;

 VAR_18 = 0;

 VAR_17 = FUNC_4(VAR_15, VAR_13);
 if (VAR_17 & VAR_14) {
  FUNC_7(VAR_15, VAR_12, 0xc3);
 } else {



  VAR_17 = FUNC_4(VAR_15, VAR_10);
  VAR_17 &= 0xff0fffff;
  VAR_17 |= 0x00500000;
  FUNC_6(VAR_15, VAR_10, VAR_17);
  FUNC_7(VAR_15, VAR_12, 0x83);
 }




 FUNC_0(VAR_15);
 FUNC_1(VAR_15);

 VAR_18 = FUNC_2(VAR_15);
 if (VAR_18)
  goto exit;

 FUNC_5(VAR_15, VAR_11, 0x0000);





 VAR_16 = FUNC_3(VAR_15, VAR_11);
 VAR_16 |= (VAR_2 | VAR_1 |
    VAR_9 | VAR_6 |
    VAR_5 | VAR_7 |
    VAR_4 | VAR_3 |
    VAR_8 | VAR_0);
 FUNC_5(VAR_15, VAR_11, VAR_16);

exit:
 return VAR_18;
}
