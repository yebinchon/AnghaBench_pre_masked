
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct uhci_qh {int load; int phase; int period; int type; TYPE_4__* hep; TYPE_2__* udev; scalar_t__ bandwidth_reserved; } ;
struct uhci_hcd {int* load; int total_load; } ;
struct TYPE_6__ {int bandwidth_allocated; int bandwidth_isoc_reqs; int bandwidth_int_reqs; } ;
struct TYPE_10__ {TYPE_1__ self; } ;
struct TYPE_8__ {int bEndpointAddress; } ;
struct TYPE_9__ {TYPE_3__ desc; } ;
struct TYPE_7__ {int devnum; } ;


 int VAR_0 ;


 int FUNC_0 (int ,char*,char*,int ,int ,char*,int,int,int) ;
 int FUNC_1 (struct uhci_hcd*) ;
 TYPE_5__* FUNC_2 (struct uhci_hcd*) ;

__attribute__((used)) static void FUNC_3(struct uhci_hcd *VAR_1, struct uhci_qh *VAR_2)
{
 int VAR_3;
 int VAR_4 = VAR_2->load;
 char *VAR_5 = "??";

 for (VAR_3 = VAR_2->phase; VAR_3 < VAR_0; VAR_3 += VAR_2->period) {
  VAR_1->load[VAR_3] -= VAR_4;
  VAR_1->total_load -= VAR_4;
 }
 FUNC_2(VAR_1)->self.bandwidth_allocated =
   VAR_1->total_load / VAR_0;
 switch (VAR_2->type) {
 case 129:
  --FUNC_2(VAR_1)->self.bandwidth_int_reqs;
  VAR_5 = "INT";
  break;
 case 128:
  --FUNC_2(VAR_1)->self.bandwidth_isoc_reqs;
  VAR_5 = "ISO";
  break;
 }
 VAR_2->bandwidth_reserved = 0;
 FUNC_0(FUNC_1(VAR_1),
   "%s dev %d ep%02x-%s, period %d, phase %d, %d us\n",
   "release", VAR_2->udev->devnum,
   VAR_2->hep->desc.bEndpointAddress, VAR_5,
   VAR_2->period, VAR_2->phase, VAR_4);
}
