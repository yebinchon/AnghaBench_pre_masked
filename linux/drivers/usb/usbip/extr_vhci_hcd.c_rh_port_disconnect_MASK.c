
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vhci_hcd {int* port_status; struct vhci* vhci; } ;
struct vhci_device {int rhport; } ;
struct vhci {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 struct vhci_hcd* FUNC_4 (struct vhci_device*) ;
 int FUNC_5 (struct vhci_hcd*) ;

__attribute__((used)) static void FUNC_6(struct vhci_device *VAR_2)
{
 struct vhci_hcd *VAR_3 = FUNC_4(VAR_2);
 struct vhci *VAR_4 = VAR_3->vhci;
 int VAR_5 = VAR_2->rhport;
 u32 VAR_6;
 unsigned long VAR_7;

 FUNC_3("rh_port_disconnect %d\n", VAR_5);

 FUNC_0(&VAR_4->lock, VAR_7);

 VAR_6 = VAR_3->port_status[VAR_5];

 VAR_6 &= ~VAR_1;
 VAR_6 |= (1 << VAR_0);

 VAR_3->port_status[VAR_5] = VAR_6;

 FUNC_1(&VAR_4->lock, VAR_7);
 FUNC_2(FUNC_5(VAR_3));
}
