
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
struct fotg210_hcd {int hcs_params; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int,int) ;

__attribute__((used)) static void FUNC_3(struct fotg210_hcd *VAR_3,
  struct usb_hub_descriptor *VAR_4)
{
 int VAR_5 = FUNC_0(VAR_3->hcs_params);
 u16 VAR_6;

 VAR_4->bDescriptorType = VAR_2;
 VAR_4->bPwrOn2PwrGood = 10;
 VAR_4->bHubContrCurrent = 0;

 VAR_4->bNbrPorts = VAR_5;
 VAR_6 = 1 + (VAR_5 / 8);
 VAR_4->bDescLength = 7 + 2 * VAR_6;


 FUNC_2(&VAR_4->u.hs.DeviceRemovable[0], 0, VAR_6);
 FUNC_2(&VAR_4->u.hs.DeviceRemovable[VAR_6], 0xff, VAR_6);

 VAR_6 = VAR_0;
 VAR_6 |= VAR_1;
 VAR_4->wHubCharacteristics = FUNC_1(VAR_6);
}
