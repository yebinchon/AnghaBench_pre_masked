
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct peak_usb_device {int dummy; } ;
struct net_device {int dummy; } ;
typedef enum can_mode { ____Placeholder_can_mode } can_mode ;



 int VAR_0 ;
 int FUNC_0 (struct net_device*,char*,int) ;
 struct peak_usb_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct peak_usb_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, enum can_mode VAR_2)
{
 struct peak_usb_device *VAR_3 = FUNC_1(VAR_1);
 int VAR_4 = 0;

 switch (VAR_2) {
 case 128:
  VAR_4 = FUNC_2(VAR_3);
  if (VAR_4)
   FUNC_0(VAR_1, "couldn't start device (err %d)\n",
       VAR_4);
  break;

 default:
  return -VAR_0;
 }

 return VAR_4;
}
