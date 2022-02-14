
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int state; } ;
struct kvaser_usb_net_priv {TYPE_1__ can; struct kvaser_usb* dev; } ;
struct kvaser_usb {TYPE_2__* ops; } ;
struct TYPE_4__ {int (* dev_set_opt_mode ) (struct kvaser_usb_net_priv*) ;int (* dev_start_chip ) (struct kvaser_usb_net_priv*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct kvaser_usb*) ;
 struct kvaser_usb_net_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,char*,int) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct kvaser_usb_net_priv*) ;
 int FUNC_6 (struct kvaser_usb_net_priv*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_1)
{
 struct kvaser_usb_net_priv *VAR_2 = FUNC_2(VAR_1);
 struct kvaser_usb *VAR_3 = VAR_2->dev;
 int VAR_4;

 VAR_4 = FUNC_4(VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  goto error;

 VAR_4 = VAR_3->ops->dev_set_opt_mode(VAR_2);
 if (VAR_4)
  goto error;

 VAR_4 = VAR_3->ops->dev_start_chip(VAR_2);
 if (VAR_4) {
  FUNC_3(VAR_1, "Cannot start device, error %d\n", VAR_4);
  goto error;
 }

 VAR_2->can.state = VAR_0;

 return 0;

error:
 FUNC_0(VAR_1);
 return VAR_4;
}
