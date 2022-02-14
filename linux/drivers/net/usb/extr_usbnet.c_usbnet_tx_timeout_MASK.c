
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbnet {TYPE_1__* driver_info; int bh; int txq; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int (* recover ) (struct usbnet*) ;} ;


 struct usbnet* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct usbnet*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct usbnet*,int *) ;

void FUNC_4 (struct net_device *VAR_0)
{
 struct usbnet *VAR_1 = FUNC_0(VAR_0);

 FUNC_3 (VAR_1, &VAR_1->txq);
 FUNC_2 (&VAR_1->bh);




 if (VAR_1->driver_info->recover)
  (VAR_1->driver_info->recover)(VAR_1);
}
