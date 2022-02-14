
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct usbnet*) ;
 struct usbnet* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0)
{
 struct usbnet *VAR_1 = FUNC_1(VAR_0);

 switch (FUNC_0(VAR_1)) {
 case 1:
  return 21;
 case 2:
  return 32;
 }
 return 0;
}
