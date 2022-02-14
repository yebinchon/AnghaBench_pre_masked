
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int ocp_base; } ;


 int FUNC_0 (struct rtl8169_private*,int,int) ;

__attribute__((used)) static void FUNC_1(struct rtl8169_private *VAR_0, int VAR_1, int VAR_2)
{
 if (VAR_1 == 0x1f) {
  VAR_0->ocp_base = VAR_2 << 4;
  return;
 }

 FUNC_0(VAR_0, VAR_0->ocp_base + VAR_1, VAR_2);
}
