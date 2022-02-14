
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mdio_write; } ;
struct usbnet {TYPE_1__ mii; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 struct usbnet* FUNC_1 (struct net_device*) ;

int FUNC_2(struct net_device *VAR_1)
{
 struct usbnet *VAR_2 = FUNC_1(VAR_1);

 if (!VAR_2->mii.mdio_write)
  return -VAR_0;

 return FUNC_0(&VAR_2->mii);
}
