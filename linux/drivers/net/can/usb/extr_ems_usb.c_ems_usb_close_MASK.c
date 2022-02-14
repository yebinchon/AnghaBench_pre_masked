
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ems_usb {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct ems_usb*,int ) ;
 struct ems_usb* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,char*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct ems_usb*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1)
{
 struct ems_usb *VAR_2 = FUNC_2(VAR_1);


 FUNC_5(VAR_2);

 FUNC_4(VAR_1);


 if (FUNC_1(VAR_2, VAR_0))
  FUNC_3(VAR_1, "couldn't stop device");

 FUNC_0(VAR_1);

 return 0;
}
