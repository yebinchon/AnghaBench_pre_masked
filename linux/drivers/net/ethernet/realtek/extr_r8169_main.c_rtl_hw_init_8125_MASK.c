
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int ocp_base; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct rtl8169_private*,int ) ;
 int FUNC_2 (struct rtl8169_private*,int ) ;
 int FUNC_3 (struct rtl8169_private*,int ,int) ;
 int FUNC_4 (struct rtl8169_private*,int ,int) ;
 int VAR_7 ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct rtl8169_private*,int,int ,int ) ;
 int FUNC_7 (struct rtl8169_private*,int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (struct rtl8169_private*,int *,int,int) ;

__attribute__((used)) static void FUNC_9(struct rtl8169_private *VAR_10)
{
 VAR_10->ocp_base = VAR_6;

 FUNC_3(VAR_10, VAR_4, FUNC_1(VAR_10, VAR_4) | VAR_7);

 if (!FUNC_8(VAR_10, &VAR_9, 100, 42))
  return;

 FUNC_4(VAR_10, VAR_0, FUNC_2(VAR_10, VAR_0) & ~(VAR_2 | VAR_1));
 FUNC_5(1);
 FUNC_4(VAR_10, VAR_3, FUNC_2(VAR_10, VAR_3) & ~VAR_5);

 FUNC_6(VAR_10, 0xe8de, FUNC_0(14), 0);

 if (!FUNC_8(VAR_10, &VAR_8, 100, 42))
  return;

 FUNC_7(VAR_10, 0xc0aa, 0x07d0);
 FUNC_7(VAR_10, 0xc0a6, 0x0150);
 FUNC_7(VAR_10, 0xc01e, 0x5555);

 FUNC_8(VAR_10, &VAR_8, 100, 42);
}
