
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtl8xxxu_priv {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct rtl8xxxu_priv*) ;
 int FUNC_2 (struct rtl8xxxu_priv*) ;
 int FUNC_3 (struct rtl8xxxu_priv*) ;
 int FUNC_4 (struct rtl8xxxu_priv*) ;
 int FUNC_5 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_6 (struct rtl8xxxu_priv*,scalar_t__) ;
 int FUNC_7 (struct rtl8xxxu_priv*,int ,int ) ;
 int FUNC_8 (struct rtl8xxxu_priv*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_9(struct rtl8xxxu_priv *VAR_9)
{
 u8 VAR_10;
 u16 VAR_11;

 FUNC_4(VAR_9);




 VAR_10 = FUNC_6(VAR_9, VAR_6);
 VAR_10 &= ~VAR_8;
 FUNC_8(VAR_9, VAR_6, VAR_10);

 FUNC_8(VAR_9, VAR_2, 0x0000);

 FUNC_2(VAR_9);


 if (FUNC_6(VAR_9, VAR_4) & VAR_0)
  FUNC_3(VAR_9);


 VAR_11 = FUNC_5(VAR_9, VAR_5);
 VAR_11 &= ~VAR_7;
 FUNC_7(VAR_9, VAR_5, VAR_11);


 FUNC_8(VAR_9, VAR_4, 0x00);

 FUNC_1(VAR_9);

 VAR_10 = FUNC_6(VAR_9, VAR_1 + 1);
 VAR_10 |= FUNC_0(3);
 FUNC_8(VAR_9, VAR_1 + 1, VAR_10);


 VAR_10 = FUNC_6(VAR_9, VAR_3 + 2);
 VAR_10 |= FUNC_0(0);
 FUNC_8(VAR_9, VAR_3 + 2, VAR_10);
}
