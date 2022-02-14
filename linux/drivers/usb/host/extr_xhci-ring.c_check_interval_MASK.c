
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_hcd {int dummy; } ;
struct xhci_ep_ctx {int ep_info; } ;
struct urb {int interval; TYPE_1__* dev; } ;
struct TYPE_2__ {scalar_t__ speed; int dev; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,char*,int,char*,int,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct xhci_hcd *VAR_2, struct urb *VAR_3,
      struct xhci_ep_ctx *VAR_4)
{
 int VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(FUNC_2(VAR_4->ep_info));
 VAR_6 = VAR_3->interval;


 if (VAR_3->dev->speed == VAR_1 ||
   VAR_3->dev->speed == VAR_0)
  VAR_6 *= 8;




 if (VAR_5 != VAR_6) {
  FUNC_1(&VAR_3->dev->dev,
    "Driver uses different interval (%d microframe%s) than xHCI (%d microframe%s)\n",
    VAR_6, VAR_6 == 1 ? "" : "s",
    VAR_5, VAR_5 == 1 ? "" : "s");
  VAR_3->interval = VAR_5;

  if (VAR_3->dev->speed == VAR_1 ||
    VAR_3->dev->speed == VAR_0)
   VAR_3->interval /= 8;
 }
}
