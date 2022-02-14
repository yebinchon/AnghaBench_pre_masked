
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ehci_per_sched {int bw_phase; int cs_mask; int c_usecs; int usecs; int period; scalar_t__ phase_uf; int phase; int bw_uperiod; TYPE_3__* ep; TYPE_1__* udev; } ;
struct ehci_hcd {int dummy; } ;
struct TYPE_5__ {int bEndpointAddress; } ;
struct TYPE_6__ {TYPE_2__ desc; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *,char*,int ,char*,char*,scalar_t__,int ,int ,scalar_t__,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ehci_hcd *VAR_0, int VAR_1, char *VAR_2,
  struct ehci_per_sched *VAR_3)
{
 FUNC_0(&VAR_3->udev->dev,
   "ep %02x: %s %s @ %u+%u (%u.%u+%u) [%u/%u us] mask %04x\n",
   VAR_3->ep->desc.bEndpointAddress,
   (VAR_1 >= 0 ? "reserve" : "release"), VAR_2,
   (VAR_3->bw_phase << 3) + VAR_3->phase_uf, VAR_3->bw_uperiod,
   VAR_3->phase, VAR_3->phase_uf, VAR_3->period,
   VAR_3->usecs, VAR_3->c_usecs, VAR_3->cs_mask);
}
