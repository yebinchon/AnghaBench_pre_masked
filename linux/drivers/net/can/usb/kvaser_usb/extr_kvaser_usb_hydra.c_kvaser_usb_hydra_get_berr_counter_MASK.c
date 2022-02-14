
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct can_berr_counter {int dummy; } ;
struct kvaser_usb_net_priv {struct can_berr_counter bec; int channel; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 struct kvaser_usb_net_priv* FUNC_1 (struct net_device const*) ;

__attribute__((used)) static int FUNC_2(const struct net_device *VAR_1,
          struct can_berr_counter *VAR_2)
{
 struct kvaser_usb_net_priv *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3->dev,
            VAR_0,
            VAR_3->channel);
 if (VAR_4)
  return VAR_4;

 *VAR_2 = VAR_3->bec;

 return 0;
}
