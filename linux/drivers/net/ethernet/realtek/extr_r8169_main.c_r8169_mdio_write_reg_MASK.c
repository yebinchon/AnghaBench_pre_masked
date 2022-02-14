
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rtl8169_private {int dummy; } ;
struct mii_bus {struct rtl8169_private* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtl8169_private*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct mii_bus *VAR_1, int VAR_2,
    int VAR_3, u16 VAR_4)
{
 struct rtl8169_private *VAR_5 = VAR_1->priv;

 if (VAR_2 > 0)
  return -VAR_0;

 FUNC_0(VAR_5, VAR_3, VAR_4);

 return 0;
}
