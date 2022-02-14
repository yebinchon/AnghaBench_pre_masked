
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ntxq; int nrxq; } ;
struct brcmf_usbdev_info {TYPE_2__* rx_reqs; TYPE_1__ bus_pub; TYPE_3__* tx_reqs; scalar_t__ bulk_urb; scalar_t__ ctl_urb; } ;
struct TYPE_6__ {scalar_t__ urb; } ;
struct TYPE_5__ {scalar_t__ urb; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct brcmf_usbdev_info *VAR_0)
{
 int VAR_1;

 if (VAR_0->ctl_urb)
  FUNC_0(VAR_0->ctl_urb);
 if (VAR_0->bulk_urb)
  FUNC_0(VAR_0->bulk_urb);
 if (VAR_0->tx_reqs)
  for (VAR_1 = 0; VAR_1 < VAR_0->bus_pub.ntxq; VAR_1++)
   FUNC_0(VAR_0->tx_reqs[VAR_1].urb);
 if (VAR_0->rx_reqs)
  for (VAR_1 = 0; VAR_1 < VAR_0->bus_pub.nrxq; VAR_1++)
   FUNC_0(VAR_0->rx_reqs[VAR_1].urb);
}
