
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl8169_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtl8169_private*,int ) ;
 int FUNC_1 (struct rtl8169_private*,int ,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct rtl8169_private*,int *,int,int) ;

__attribute__((used)) static u8 FUNC_3(struct rtl8169_private *VAR_5, int VAR_6)
{
 FUNC_1(VAR_5, VAR_0, (VAR_6 & VAR_2) << VAR_3);

 return FUNC_2(VAR_5, &VAR_4, 100, 300) ?
  FUNC_0(VAR_5, VAR_0) & VAR_1 : ~0;
}
