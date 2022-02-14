
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int dummy; } ;
struct net_device {int dev_addr; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct net_device*,void*) ;
 struct rtl8169_private* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct rtl8169_private*,int ) ;
 struct device* FUNC_6 (struct rtl8169_private*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_0, void *VAR_1)
{
 struct rtl8169_private *VAR_2 = FUNC_1(VAR_0);
 struct device *VAR_3 = FUNC_6(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1);
 if (VAR_4)
  return VAR_4;

 FUNC_3(VAR_3);

 if (FUNC_2(VAR_3))
  FUNC_5(VAR_2, VAR_0->dev_addr);

 FUNC_4(VAR_3);

 return 0;
}
