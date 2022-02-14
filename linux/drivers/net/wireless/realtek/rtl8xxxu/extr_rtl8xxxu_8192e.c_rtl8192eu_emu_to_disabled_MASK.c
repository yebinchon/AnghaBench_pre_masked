
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl8xxxu_priv {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct rtl8xxxu_priv*,scalar_t__) ;
 int FUNC_2 (struct rtl8xxxu_priv*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_3(struct rtl8xxxu_priv *VAR_1)
{
 u8 VAR_2;


 VAR_2 = FUNC_1(VAR_1, VAR_0 + 1);
 VAR_2 &= ~(FUNC_0(3) | FUNC_0(4));
 VAR_2 |= FUNC_0(3);
 FUNC_2(VAR_1, VAR_0 + 1, VAR_2);

 return 0;
}
