
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct lan78xx_priv {int set_vlan; int set_multicast; } ;
struct lan78xx_net {scalar_t__* data; int net; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct lan78xx_priv*) ;
 int FUNC_2 (struct lan78xx_net*) ;
 int FUNC_3 (struct lan78xx_net*) ;
 int FUNC_4 (struct lan78xx_net*,int ,int ,char*) ;

__attribute__((used)) static void FUNC_5(struct lan78xx_net *VAR_1, struct usb_interface *VAR_2)
{
 struct lan78xx_priv *VAR_3 = (struct lan78xx_priv *)(VAR_1->data[0]);

 FUNC_2(VAR_1);

 FUNC_3(VAR_1);

 if (VAR_3) {
  FUNC_0(&VAR_3->set_multicast);
  FUNC_0(&VAR_3->set_vlan);
  FUNC_4(VAR_1, VAR_0, VAR_1->net, "free pdata");
  FUNC_1(VAR_3);
  VAR_3 = ((void*)0);
  VAR_1->data[0] = 0;
 }
}
