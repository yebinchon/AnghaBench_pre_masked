
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct xhci_port {int addr; } ;
struct xhci_hub {struct xhci_port** ports; } ;
struct xhci_hcd {int lock; } ;
struct TYPE_2__ {int root_hub; int busnum; } ;
struct usb_hcd {TYPE_1__ self; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,size_t) ;
 int FUNC_4 (int ,size_t,int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct xhci_hcd*,char*,int ,size_t,char*,int) ;
 struct xhci_hub* FUNC_7 (struct usb_hcd*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct xhci_hcd *VAR_1, struct usb_hcd *VAR_2,
    u16 VAR_3, bool VAR_4, unsigned long *VAR_5)
{
 struct xhci_hub *VAR_6;
 struct xhci_port *VAR_7;
 u32 VAR_8;

 VAR_6 = FUNC_7(VAR_2);
 VAR_7 = VAR_6->ports[VAR_3];
 VAR_8 = FUNC_0(VAR_7->addr);

 FUNC_6(VAR_1, "set port power %d-%d %s, portsc: 0x%x\n",
   VAR_2->self.busnum, VAR_3 + 1, VAR_4 ? "ON" : "OFF", VAR_8);

 VAR_8 = FUNC_8(VAR_8);

 if (VAR_4) {

  FUNC_5(VAR_8 | VAR_0, VAR_7->addr);
  FUNC_0(VAR_7->addr);
 } else {

  FUNC_5(VAR_8 & ~VAR_0, VAR_7->addr);
 }

 FUNC_2(&VAR_1->lock, *VAR_5);
 VAR_8 = FUNC_3(VAR_2->self.root_hub,
     VAR_3);
 if (VAR_8)
  FUNC_4(VAR_2->self.root_hub,
   VAR_3, VAR_4);
 FUNC_1(&VAR_1->lock, *VAR_5);
}
