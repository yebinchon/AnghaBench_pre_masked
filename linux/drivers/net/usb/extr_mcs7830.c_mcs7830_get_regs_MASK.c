
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_regs {int len; int version; } ;


 int FUNC_0 (struct usbnet*,int ,int ,void*) ;
 int FUNC_1 (struct usbnet*) ;
 struct usbnet* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0, struct ethtool_regs *VAR_1, void *VAR_2)
{
 struct usbnet *VAR_3 = FUNC_2(VAR_0);

 VAR_1->version = FUNC_1(VAR_3);
 FUNC_0(VAR_3, 0, VAR_1->len, VAR_2);
}
