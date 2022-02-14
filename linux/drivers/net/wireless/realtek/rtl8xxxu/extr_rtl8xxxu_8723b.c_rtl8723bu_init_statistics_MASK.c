
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl8xxxu_priv {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct rtl8xxxu_priv*,scalar_t__) ;
 int FUNC_2 (struct rtl8xxxu_priv*,scalar_t__,int) ;
 int FUNC_3 (struct rtl8xxxu_priv*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(struct rtl8xxxu_priv *VAR_6)
{
 u32 VAR_7;


 FUNC_2(VAR_6, VAR_4 + 2, 0x2710);
 FUNC_2(VAR_6, VAR_3 + 2, 0xffff);
 FUNC_3(VAR_6, VAR_1, 0xffffff52);
 FUNC_3(VAR_6, VAR_2, 0xffffffff);

 VAR_7 = FUNC_1(VAR_6, VAR_0);
 VAR_7 |= 0xff;
 FUNC_3(VAR_6, VAR_0, VAR_7);

 VAR_7 = FUNC_1(VAR_6, VAR_3);
 VAR_7 |= FUNC_0(8) | FUNC_0(9) | FUNC_0(10);
 FUNC_3(VAR_6, VAR_3, VAR_7);

 VAR_7 = FUNC_1(VAR_6, VAR_5);
 VAR_7 |= FUNC_0(7);
 FUNC_3(VAR_6, VAR_5, VAR_7);
}
