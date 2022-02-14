
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
struct isp1760_hcd {int hcs_params; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int,int) ;

__attribute__((used)) static void FUNC_4(struct isp1760_hcd *VAR_4,
  struct usb_hub_descriptor *VAR_5)
{
 int VAR_6 = FUNC_0(VAR_4->hcs_params);
 u16 VAR_7;

 VAR_5->bDescriptorType = VAR_3;

 VAR_5->bPwrOn2PwrGood = 10;
 VAR_5->bHubContrCurrent = 0;

 VAR_5->bNbrPorts = VAR_6;
 VAR_7 = 1 + (VAR_6 / 8);
 VAR_5->bDescLength = 7 + 2 * VAR_7;


 FUNC_3(&VAR_5->u.hs.DeviceRemovable[0], 0, VAR_7);
 FUNC_3(&VAR_5->u.hs.DeviceRemovable[VAR_7], 0xff, VAR_7);


 VAR_7 = VAR_1;
 if (FUNC_1(VAR_4->hcs_params))

  VAR_7 |= VAR_0;
 else

  VAR_7 |= VAR_2;
 VAR_5->wHubCharacteristics = FUNC_2(VAR_7);
}
