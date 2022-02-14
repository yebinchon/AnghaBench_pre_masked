
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int mii; scalar_t__ data; } ;
struct net_device {int dummy; } ;
struct ethtool_eee {int eee_enabled; } ;
struct ax88179_data {int eee_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (struct usbnet*) ;
 int FUNC_1 (struct usbnet*) ;
 int FUNC_2 (struct usbnet*) ;
 int FUNC_3 (struct usbnet*,struct ethtool_eee*) ;
 int FUNC_4 (int *) ;
 struct usbnet* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct usbnet*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_1, struct ethtool_eee *VAR_2)
{
 struct usbnet *VAR_3 = FUNC_5(VAR_1);
 struct ax88179_data *VAR_4 = (struct ax88179_data *)VAR_3->data;
 int VAR_5 = -VAR_0;

 VAR_4->eee_enabled = VAR_2->eee_enabled;
 if (!VAR_4->eee_enabled) {
  FUNC_1(VAR_3);
 } else {
  VAR_4->eee_enabled = FUNC_0(VAR_3);
  if (!VAR_4->eee_enabled)
   return -VAR_0;

  FUNC_2(VAR_3);
 }

 VAR_5 = FUNC_3(VAR_3, VAR_2);
 if (VAR_5)
  return VAR_5;

 FUNC_4(&VAR_3->mii);

 FUNC_6(VAR_3, 0, 0);

 return VAR_5;
}
