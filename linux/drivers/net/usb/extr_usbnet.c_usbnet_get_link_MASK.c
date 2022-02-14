
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ mdio_read; } ;
struct usbnet {TYPE_2__ mii; TYPE_1__* driver_info; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ (* check_connect ) (struct usbnet*) ;} ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (TYPE_2__*) ;
 struct usbnet* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct usbnet*) ;

u32 FUNC_4 (struct net_device *VAR_0)
{
 struct usbnet *VAR_1 = FUNC_2(VAR_0);


 if (VAR_1->driver_info->check_connect)
  return VAR_1->driver_info->check_connect (VAR_1) == 0;


 if (VAR_1->mii.mdio_read)
  return FUNC_1(&VAR_1->mii);


 return FUNC_0(VAR_0);
}
