
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rtl8169_private {int dummy; } ;
struct ephy_info {int mask; int bits; int offset; } ;


 int FUNC_0 (struct rtl8169_private*,int ) ;
 int FUNC_1 (struct rtl8169_private*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct rtl8169_private *VAR_0,
       const struct ephy_info *VAR_1, int VAR_2)
{
 u16 VAR_3;

 while (VAR_2-- > 0) {
  VAR_3 = (FUNC_0(VAR_0, VAR_1->offset) & ~VAR_1->mask) | VAR_1->bits;
  FUNC_1(VAR_0, VAR_1->offset, VAR_3);
  VAR_1++;
 }
}
