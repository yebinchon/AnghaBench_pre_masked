
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_gadget {int dev; } ;
struct sockaddr {int sa_data; int sa_family; } ;
struct TYPE_2__ {int parent; } ;
struct net_device {int type; TYPE_1__ dev; } ;
struct eth_dev {int dev_mac; int host_mac; struct usb_gadget* gadget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct eth_dev*,char*,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct net_device*,struct sockaddr*,int *) ;
 int FUNC_3 (int ,int ,int ) ;
 struct eth_dev* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

int FUNC_10(struct net_device *VAR_2)
{
 struct eth_dev *VAR_3;
 struct usb_gadget *VAR_4;
 struct sockaddr VAR_5;
 int VAR_6;

 if (!VAR_2->dev.parent)
  return -VAR_0;
 VAR_3 = FUNC_4(VAR_2);
 VAR_4 = VAR_3->gadget;
 VAR_6 = FUNC_7(VAR_2);
 if (VAR_6 < 0) {
  FUNC_1(&VAR_4->dev, "register_netdev failed, %d\n", VAR_6);
  return VAR_6;
 } else {
  FUNC_0(VAR_3, "HOST MAC %pM\n", VAR_3->host_mac);





  FUNC_5(VAR_2);
 }
 VAR_5.sa_family = VAR_2->type;
 FUNC_3(VAR_5.sa_data, VAR_3->dev_mac, VAR_1);
 FUNC_8();
 VAR_6 = FUNC_2(VAR_2, &VAR_5, ((void*)0));
 FUNC_9();
 if (VAR_6)
  FUNC_6("cannot set self ethernet address: %d\n", VAR_6);
 else
  FUNC_0(VAR_3, "MAC %pM\n", VAR_3->dev_mac);

 return VAR_6;
}
