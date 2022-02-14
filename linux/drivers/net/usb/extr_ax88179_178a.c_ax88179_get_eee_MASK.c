
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {scalar_t__ data; } ;
struct net_device {int dummy; } ;
struct ethtool_eee {int eee_active; int eee_enabled; } ;
struct ax88179_data {int eee_active; int eee_enabled; } ;


 int FUNC_0 (struct usbnet*,struct ethtool_eee*) ;
 struct usbnet* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, struct ethtool_eee *VAR_1)
{
 struct usbnet *VAR_2 = FUNC_1(VAR_0);
 struct ax88179_data *VAR_3 = (struct ax88179_data *)VAR_2->data;

 VAR_1->eee_enabled = VAR_3->eee_enabled;
 VAR_1->eee_active = VAR_3->eee_active;

 return FUNC_0(VAR_2, VAR_1);
}
