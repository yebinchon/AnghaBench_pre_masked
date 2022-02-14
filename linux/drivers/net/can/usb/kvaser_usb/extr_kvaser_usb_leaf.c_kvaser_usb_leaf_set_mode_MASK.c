
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct kvaser_usb_net_priv {int dummy; } ;
typedef enum can_mode { ____Placeholder_can_mode } can_mode ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvaser_usb_net_priv*,int ) ;
 struct kvaser_usb_net_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2,
        enum can_mode VAR_3)
{
 struct kvaser_usb_net_priv *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;

 switch (VAR_3) {
 case 128:
  VAR_5 = FUNC_0(VAR_4, VAR_0);
  if (VAR_5)
   return VAR_5;
  break;
 default:
  return -VAR_1;
 }

 return 0;
}
