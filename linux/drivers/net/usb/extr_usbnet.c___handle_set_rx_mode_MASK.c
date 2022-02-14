
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbnet {int flags; TYPE_1__* driver_info; } ;
struct TYPE_2__ {int (* set_rx_mode ) (struct usbnet*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct usbnet*) ;

__attribute__((used)) static void FUNC_2(struct usbnet *VAR_1)
{
 if (VAR_1->driver_info->set_rx_mode)
  (VAR_1->driver_info->set_rx_mode)(VAR_1);

 FUNC_0(VAR_0, &VAR_1->flags);
}
