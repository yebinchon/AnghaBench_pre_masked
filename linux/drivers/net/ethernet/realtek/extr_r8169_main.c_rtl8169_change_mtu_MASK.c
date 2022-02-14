
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int dummy; } ;
struct net_device {int mtu; } ;


 struct rtl8169_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct rtl8169_private*,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, int VAR_1)
{
 struct rtl8169_private *VAR_2 = FUNC_0(VAR_0);

 FUNC_2(VAR_2, VAR_1);

 VAR_0->mtu = VAR_1;
 FUNC_1(VAR_0);

 return 0;
}
