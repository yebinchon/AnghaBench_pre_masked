
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {scalar_t__ mac_version; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct rtl8169_private*,int ) ;

__attribute__((used)) static bool FUNC_1(struct rtl8169_private *VAR_2)
{




 if (VAR_2->mac_version < VAR_1)
  return 1;

 return FUNC_0(VAR_2, VAR_0);
}
