
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int ocp_base; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtl8169_private*,int,int) ;

__attribute__((used)) static void FUNC_1(struct rtl8169_private *VAR_1, int VAR_2, int VAR_3)
{
 if (VAR_2 == 0x1f) {
  VAR_1->ocp_base = VAR_3 ? VAR_3 << 4 : VAR_0;
  return;
 }

 if (VAR_1->ocp_base != VAR_0)
  VAR_2 -= 0x10;

 FUNC_0(VAR_1, VAR_1->ocp_base + VAR_2 * 2, VAR_3);
}
