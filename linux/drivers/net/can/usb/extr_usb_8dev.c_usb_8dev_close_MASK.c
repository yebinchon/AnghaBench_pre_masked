
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct usb_8dev_priv {TYPE_1__ can; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*) ;
 struct usb_8dev_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,char*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct usb_8dev_priv*) ;
 int FUNC_6 (struct usb_8dev_priv*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_2)
{
 struct usb_8dev_priv *VAR_3 = FUNC_2(VAR_2);
 int VAR_4 = 0;


 VAR_4 = FUNC_6(VAR_3);
 if (VAR_4)
  FUNC_3(VAR_2, "couldn't stop device");

 VAR_3->can.state = VAR_1;

 FUNC_4(VAR_2);


 FUNC_5(VAR_3);

 FUNC_1(VAR_2);

 FUNC_0(VAR_2, VAR_0);

 return VAR_4;
}
