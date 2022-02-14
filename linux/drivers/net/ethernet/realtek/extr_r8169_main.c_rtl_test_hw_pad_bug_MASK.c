
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; } ;
struct rtl8169_private {scalar_t__ mac_version; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct rtl8169_private *VAR_2, struct sk_buff *VAR_3)
{
 return VAR_3->len < VAR_0 && VAR_2->mac_version == VAR_1;
}
