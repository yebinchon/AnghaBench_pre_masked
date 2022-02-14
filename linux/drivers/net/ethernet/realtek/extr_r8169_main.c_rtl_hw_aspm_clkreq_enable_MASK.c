
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {scalar_t__ aspm_manageable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtl8169_private*,int ) ;
 int FUNC_1 (struct rtl8169_private*,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct rtl8169_private *VAR_4, bool VAR_5)
{

 if (VAR_5 && VAR_4->aspm_manageable) {
  FUNC_1(VAR_4, VAR_3, FUNC_0(VAR_4, VAR_3) | VAR_0);
  FUNC_1(VAR_4, VAR_2, FUNC_0(VAR_4, VAR_2) | VAR_1);
 } else {
  FUNC_1(VAR_4, VAR_2, FUNC_0(VAR_4, VAR_2) & ~VAR_1);
  FUNC_1(VAR_4, VAR_3, FUNC_0(VAR_4, VAR_3) & ~VAR_0);
 }

 FUNC_2(10);
}
