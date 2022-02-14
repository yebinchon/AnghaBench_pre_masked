
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl8169_private {int cp_cmd; } ;
struct net_device {int dummy; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtl8169_private*,int ) ;
 int FUNC_1 (struct rtl8169_private*,int ) ;
 int FUNC_2 (struct rtl8169_private*,int ,int ) ;
 int FUNC_3 (struct rtl8169_private*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct rtl8169_private* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct rtl8169_private*) ;
 int FUNC_6 (struct rtl8169_private*) ;
 int FUNC_7 (struct rtl8169_private*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_10,
    netdev_features_t VAR_11)
{
 struct rtl8169_private *VAR_12 = FUNC_4(VAR_10);
 u32 VAR_13;

 FUNC_6(VAR_12);

 VAR_13 = FUNC_1(VAR_12, VAR_8);
 if (VAR_11 & VAR_4)
  VAR_13 |= (VAR_0 | VAR_1);
 else
  VAR_13 &= ~(VAR_0 | VAR_1);

 if (FUNC_5(VAR_12)) {
  if (VAR_11 & VAR_3)
   VAR_13 |= VAR_6;
  else
   VAR_13 &= ~VAR_6;
 }

 FUNC_3(VAR_12, VAR_8, VAR_13);

 if (VAR_11 & VAR_5)
  VAR_12->cp_cmd |= VAR_7;
 else
  VAR_12->cp_cmd &= ~VAR_7;

 if (!FUNC_5(VAR_12)) {
  if (VAR_11 & VAR_3)
   VAR_12->cp_cmd |= VAR_9;
  else
   VAR_12->cp_cmd &= ~VAR_9;
 }

 FUNC_2(VAR_12, VAR_2, VAR_12->cp_cmd);
 FUNC_0(VAR_12, VAR_2);

 FUNC_7(VAR_12);

 return 0;
}
