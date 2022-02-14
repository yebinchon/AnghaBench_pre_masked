
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int* DeviceRemovable; } ;
struct TYPE_4__ {TYPE_1__ hs; } ;
struct usb_hub_descriptor {int bPwrOn2PwrGood; int bNbrPorts; int bDescLength; TYPE_2__ u; int wHubCharacteristics; scalar_t__ bHubContrCurrent; int bDescriptorType; } ;
struct ohci_hcd {int num_ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int,int) ;
 int FUNC_2 (struct ohci_hcd*) ;
 int FUNC_3 (struct ohci_hcd*) ;

__attribute__((used)) static void
FUNC_4 (
 struct ohci_hcd *VAR_13,
 struct usb_hub_descriptor *VAR_14
) {
 u32 VAR_15 = FUNC_2 (VAR_13);
 u16 VAR_16;

 VAR_14->bDescriptorType = VAR_12;
 VAR_14->bPwrOn2PwrGood = (VAR_15 & VAR_9) >> 24;
 VAR_14->bHubContrCurrent = 0;

 VAR_14->bNbrPorts = VAR_13->num_ports;
 VAR_16 = 1 + (VAR_13->num_ports / 8);
 VAR_14->bDescLength = 7 + 2 * VAR_16;

 VAR_16 = VAR_0 | VAR_1;
 if (VAR_15 & VAR_7)
  VAR_16 |= VAR_4;
 if (VAR_15 & VAR_10)
  VAR_16 |= VAR_2;
 if (VAR_15 & VAR_6)
  VAR_16 |= VAR_5;
 else if (VAR_15 & VAR_8)
  VAR_16 |= VAR_3;
 VAR_14->wHubCharacteristics = FUNC_0(VAR_16);


 VAR_15 = FUNC_3 (VAR_13);
 FUNC_1(VAR_14->u.hs.DeviceRemovable, 0xff,
   sizeof(VAR_14->u.hs.DeviceRemovable));
 VAR_14->u.hs.DeviceRemovable[0] = VAR_15 & VAR_11;
 if (VAR_13->num_ports > 7) {
  VAR_14->u.hs.DeviceRemovable[1] = (VAR_15 & VAR_11) >> 8;
  VAR_14->u.hs.DeviceRemovable[2] = 0xff;
 } else
  VAR_14->u.hs.DeviceRemovable[1] = 0xff;
}
