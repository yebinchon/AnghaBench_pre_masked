
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rxerr; int txerr; } ;
struct usb_8dev_priv {TYPE_1__ bec; } ;
struct net_device {int dummy; } ;
struct can_berr_counter {int rxerr; int txerr; } ;


 struct usb_8dev_priv* FUNC_0 (struct net_device const*) ;

__attribute__((used)) static int FUNC_1(const struct net_device *VAR_0,
         struct can_berr_counter *VAR_1)
{
 struct usb_8dev_priv *VAR_2 = FUNC_0(VAR_0);

 VAR_1->txerr = VAR_2->bec.txerr;
 VAR_1->rxerr = VAR_2->bec.rxerr;

 return 0;
}
