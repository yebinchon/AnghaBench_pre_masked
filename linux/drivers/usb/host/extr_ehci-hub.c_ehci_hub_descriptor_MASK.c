
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int * DeviceRemovable; } ;
struct TYPE_4__ {TYPE_1__ hs; } ;
struct usb_hub_descriptor {int bPwrOn2PwrGood; int bNbrPorts; int bDescLength; int wHubCharacteristics; TYPE_2__ u; scalar_t__ bHubContrCurrent; int bDescriptorType; } ;
struct ehci_hcd {int hcs_params; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int,int) ;

__attribute__((used)) static void
FUNC_5 (
 struct ehci_hcd *VAR_5,
 struct usb_hub_descriptor *VAR_6
) {
 int VAR_7 = FUNC_1 (VAR_5->hcs_params);
 u16 VAR_8;

 VAR_6->bDescriptorType = VAR_4;
 VAR_6->bPwrOn2PwrGood = 10;
 VAR_6->bHubContrCurrent = 0;

 VAR_6->bNbrPorts = VAR_7;
 VAR_8 = 1 + (VAR_7 / 8);
 VAR_6->bDescLength = 7 + 2 * VAR_8;


 FUNC_4(&VAR_6->u.hs.DeviceRemovable[0], 0, VAR_8);
 FUNC_4(&VAR_6->u.hs.DeviceRemovable[VAR_8], 0xff, VAR_8);

 VAR_8 = VAR_1;
 if (FUNC_2 (VAR_5->hcs_params))
  VAR_8 |= VAR_0;
 else
  VAR_8 |= VAR_2;





 VAR_6->wHubCharacteristics = FUNC_3(VAR_8);
}
