
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vhci_hcd {int* port_status; struct vhci* vhci; } ;
struct vhci_device {int rhport; } ;
struct vhci {int lock; } ;
typedef enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 struct vhci_hcd* FUNC_4 (struct vhci_device*) ;
 int FUNC_5 (struct vhci_hcd*) ;

void FUNC_6(struct vhci_device *VAR_4, enum usb_device_speed VAR_5)
{
 struct vhci_hcd *VAR_6 = FUNC_4(VAR_4);
 struct vhci *VAR_7 = VAR_6->vhci;
 int VAR_8 = VAR_4->rhport;
 u32 VAR_9;
 unsigned long VAR_10;

 FUNC_3("rh_port_connect %d\n", VAR_8);

 FUNC_0(&VAR_7->lock, VAR_10);

 VAR_9 = VAR_6->port_status[VAR_8];

 VAR_9 |= VAR_1 | (1 << VAR_0);

 switch (VAR_5) {
 case 129:
  VAR_9 |= VAR_2;
  break;
 case 128:
  VAR_9 |= VAR_3;
  break;
 default:
  break;
 }

 VAR_6->port_status[VAR_8] = VAR_9;

 FUNC_1(&VAR_7->lock, VAR_10);

 FUNC_2(FUNC_5(VAR_6));
}
