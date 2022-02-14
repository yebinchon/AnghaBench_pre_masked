
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int dummy; } ;
struct mii_bus {struct rtl8169_private* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtl8169_private*,int) ;

__attribute__((used)) static int FUNC_1(struct mii_bus *VAR_1, int VAR_2, int VAR_3)
{
 struct rtl8169_private *VAR_4 = VAR_1->priv;

 if (VAR_2 > 0)
  return -VAR_0;

 return FUNC_0(VAR_4, VAR_3);
}
