
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bHubHdrDecLat; int DeviceRemovable; } ;
struct TYPE_4__ {TYPE_1__ ss; } ;
struct usb_hub_descriptor {int bDescLength; TYPE_2__ u; int bNbrPorts; int wHubCharacteristics; int bDescriptorType; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct usb_hub_descriptor*,int ,int) ;

__attribute__((used)) static inline void
FUNC_2(struct usb_hub_descriptor *VAR_4)
{
 FUNC_1(VAR_4, 0, sizeof *VAR_4);
 VAR_4->bDescriptorType = VAR_2;
 VAR_4->bDescLength = 12;
 VAR_4->wHubCharacteristics = FUNC_0(
  VAR_1 | VAR_0);
 VAR_4->bNbrPorts = VAR_3;
 VAR_4->u.ss.bHubHdrDecLat = 0x04;
 VAR_4->u.ss.DeviceRemovable = 0xffff;
}
