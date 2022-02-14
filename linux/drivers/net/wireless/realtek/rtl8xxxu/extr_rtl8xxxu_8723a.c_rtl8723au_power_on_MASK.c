
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl8xxxu_priv {int dummy; } ;


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
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (struct rtl8xxxu_priv*) ;
 int FUNC_2 (struct rtl8xxxu_priv*) ;
 int FUNC_3 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_4 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_5 (struct rtl8xxxu_priv*,scalar_t__) ;
 int FUNC_6 (struct rtl8xxxu_priv*,int ,int) ;
 int FUNC_7 (struct rtl8xxxu_priv*,int ,int) ;
 int FUNC_8 (struct rtl8xxxu_priv*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_9(struct rtl8xxxu_priv *VAR_14)
{
 u8 VAR_15;
 u16 VAR_16;
 u32 VAR_17;
 int VAR_18;




 FUNC_8(VAR_14, VAR_13, 0x0);

 FUNC_2(VAR_14);

 VAR_18 = FUNC_1(VAR_14);
 if (VAR_18)
  goto exit;




 VAR_15 = FUNC_5(VAR_14, VAR_10 + 2);
 VAR_15 |= FUNC_0(3);
 FUNC_8(VAR_14, VAR_10 + 2, VAR_15);





 VAR_16 = FUNC_3(VAR_14, VAR_11);
 VAR_16 |= (VAR_2 | VAR_1 |
    VAR_9 | VAR_6 |
    VAR_5 | VAR_7 |
    VAR_4 | VAR_3 |
    VAR_8 | VAR_0);
 FUNC_6(VAR_14, VAR_11, VAR_16);


 VAR_17 = FUNC_4(VAR_14, VAR_12);
 VAR_17 &= ~(FUNC_0(28) | FUNC_0(29) | FUNC_0(30));
 VAR_17 |= (0x06 << 28);
 FUNC_7(VAR_14, VAR_12, VAR_17);
exit:
 return VAR_18;
}
