
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wusbhc {int ports_max; } ;
struct TYPE_3__ {int * DeviceRemovable; } ;
struct TYPE_4__ {TYPE_1__ hs; } ;
struct usb_hub_descriptor {int bDescLength; int bNbrPorts; TYPE_2__ u; scalar_t__ bHubContrCurrent; scalar_t__ bPwrOn2PwrGood; int wHubCharacteristics; int bDescriptorType; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static int FUNC_2(struct wusbhc *VAR_4, u16 VAR_5,
       u16 VAR_6,
       struct usb_hub_descriptor *VAR_7,
       u16 VAR_8)
{
 u16 VAR_9 = 1 + (VAR_4->ports_max / 8);
 u8 VAR_10 = 7 + 2 * VAR_9;

 if (VAR_8 < VAR_10)
  return -VAR_0;
 VAR_7->bDescLength = 7 + 2 * VAR_9;
 VAR_7->bDescriptorType = VAR_3;
 VAR_7->bNbrPorts = VAR_4->ports_max;
 VAR_7->wHubCharacteristics = FUNC_0(
  VAR_1
  | 0x00
  | VAR_2
  | 0x00
  | 0x00);
 VAR_7->bPwrOn2PwrGood = 0;
 VAR_7->bHubContrCurrent = 0;

 FUNC_1(&VAR_7->u.hs.DeviceRemovable[0], 0, VAR_9);
 FUNC_1(&VAR_7->u.hs.DeviceRemovable[VAR_9], 0xff, VAR_9);
 return 0;
}
