
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl8169_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl8169_private*,int ) ;
 int FUNC_1 (struct rtl8169_private*,int ) ;

__attribute__((used)) static bool FUNC_2(struct rtl8169_private *VAR_3)
{
 u8 VAR_4 = FUNC_0(VAR_3, VAR_0);





 if (!(VAR_4 & VAR_1) || VAR_4 == 0xff)
  return 1;

 return FUNC_1(VAR_3, VAR_2);
}
