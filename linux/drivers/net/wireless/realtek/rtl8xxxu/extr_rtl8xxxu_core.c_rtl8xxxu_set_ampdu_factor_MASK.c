
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl8xxxu_priv {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rtl8xxxu_priv*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_1(struct rtl8xxxu_priv *VAR_1, u8 VAR_2)
{
 u8 VAR_3[4] = { 0x41, 0xa8, 0x72, 0xb9 };
 u8 VAR_4 = 0xf;
 int VAR_5;

 VAR_2 = 1 << (VAR_2 + 2);
 if (VAR_2 > VAR_4)
  VAR_2 = VAR_4;

 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  if ((VAR_3[VAR_5] & 0xf0) > (VAR_2 << 4))
   VAR_3[VAR_5] = (VAR_3[VAR_5] & 0x0f) | (VAR_2 << 4);

  if ((VAR_3[VAR_5] & 0x0f) > VAR_2)
   VAR_3[VAR_5] = (VAR_3[VAR_5] & 0xf0) | VAR_2;

  FUNC_0(VAR_1, VAR_0 + VAR_5, VAR_3[VAR_5]);
 }
}
