
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int dummy; } ;
struct net_device {int mtu; } ;


 scalar_t__ FUNC_0 (struct usbnet*) ;
 int FUNC_1 (struct usbnet*,scalar_t__) ;
 struct usbnet* FUNC_2 (struct net_device*) ;

int FUNC_3(struct net_device *VAR_0, int VAR_1)
{
 struct usbnet *VAR_2 = FUNC_2(VAR_0);

 VAR_0->mtu = VAR_1;
 FUNC_1(VAR_2, VAR_1 + FUNC_0(VAR_2));

 return 0;
}
