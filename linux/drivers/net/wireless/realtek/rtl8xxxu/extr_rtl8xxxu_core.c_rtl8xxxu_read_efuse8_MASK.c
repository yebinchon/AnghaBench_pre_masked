
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
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct rtl8xxxu_priv*,scalar_t__) ;
 int FUNC_2 (struct rtl8xxxu_priv*,scalar_t__) ;
 int FUNC_3 (struct rtl8xxxu_priv*,scalar_t__,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct rtl8xxxu_priv *VAR_3, u16 VAR_4, u8 *VAR_5)
{
 int VAR_6;
 u8 VAR_7;
 u32 VAR_8;


 FUNC_3(VAR_3, VAR_1 + 1, VAR_4 & 0xff);
 VAR_7 = FUNC_2(VAR_3, VAR_1 + 2);
 VAR_7 &= 0xfc;
 VAR_7 |= (VAR_4 >> 8) & 0x03;
 FUNC_3(VAR_3, VAR_1 + 2, VAR_7);

 VAR_7 = FUNC_2(VAR_3, VAR_1 + 3);
 FUNC_3(VAR_3, VAR_1 + 3, VAR_7 & 0x7f);


 VAR_8 = FUNC_1(VAR_3, VAR_1);
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_8 = FUNC_1(VAR_3, VAR_1);
  if (VAR_8 & FUNC_0(31))
   break;
 }

 if (VAR_6 == VAR_2)
  return -VAR_0;

 FUNC_4(50);
 VAR_8 = FUNC_1(VAR_3, VAR_1);

 *VAR_5 = VAR_8 & 0xff;
 return 0;
}
