
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ems_usb {int dummy; } ;
typedef enum can_mode { ____Placeholder_can_mode } can_mode ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ems_usb*,int ) ;
 struct ems_usb* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,char*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2, enum can_mode VAR_3)
{
 struct ems_usb *VAR_4 = FUNC_1(VAR_2);

 switch (VAR_3) {
 case 128:
  if (FUNC_0(VAR_4, VAR_1))
   FUNC_2(VAR_2, "couldn't start device");

  if (FUNC_3(VAR_2))
   FUNC_4(VAR_2);
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
