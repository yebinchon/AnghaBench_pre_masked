
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl8169_private {struct net_device* dev; } ;
struct net_device {int * dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct rtl8169_private*,int *) ;
 int FUNC_5 (struct rtl8169_private*,int *) ;
 int FUNC_6 (struct rtl8169_private*,int *,int ) ;
 int FUNC_7 (struct rtl8169_private*) ;

__attribute__((used)) static void FUNC_8(struct rtl8169_private *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->dev;
 u8 *VAR_3 = VAR_2->dev_addr;
 int VAR_4;

 VAR_4 = FUNC_2(FUNC_7(VAR_1), VAR_3);
 if (!VAR_4)
  goto done;

 FUNC_5(VAR_1, VAR_3);
 if (FUNC_3(VAR_3))
  goto done;

 FUNC_6(VAR_1, VAR_3, VAR_0);
 if (FUNC_3(VAR_3))
  goto done;

 FUNC_1(VAR_2);
 FUNC_0(FUNC_7(VAR_1), "can't read MAC address, setting random one\n");
done:
 FUNC_4(VAR_1, VAR_3);
}
