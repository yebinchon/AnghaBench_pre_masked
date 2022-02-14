
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ ip_summed; scalar_t__ len; } ;
struct rtl8169_private {int mac_version; } ;
struct net_device {int dummy; } ;
typedef int netdev_features_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 struct rtl8169_private* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct rtl8169_private*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int ) ;

__attribute__((used)) static netdev_features_t FUNC_5(struct sk_buff *VAR_6,
      struct net_device *VAR_7,
      netdev_features_t VAR_8)
{
 int VAR_9 = FUNC_3(VAR_6);
 struct rtl8169_private *VAR_10 = FUNC_0(VAR_7);

 if (FUNC_2(VAR_6)) {
  if (VAR_9 > VAR_2 &&
      FUNC_1(VAR_10))
   VAR_8 &= ~VAR_3;
 } else if (VAR_6->ip_summed == VAR_0) {
  if (VAR_6->len < VAR_1) {
   switch (VAR_10->mac_version) {
   case 131:
   case 130:
   case 129:
   case 128:
    VAR_8 &= ~VAR_4;
    break;
   default:
    break;
   }
  }

  if (VAR_9 > VAR_5 &&
      FUNC_1(VAR_10))
   VAR_8 &= ~VAR_4;
 }

 return FUNC_4(VAR_6, VAR_8);
}
