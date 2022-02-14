
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct usb_hub_descriptor* DeviceRemovable; } ;
struct TYPE_4__ {TYPE_1__ hs; } ;
struct usb_hub_descriptor {int bNbrPorts; TYPE_2__ u; scalar_t__ bDescLength; int wHubCharacteristics; int bDescriptorType; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct usb_hub_descriptor*,int,int) ;

__attribute__((used)) static inline void FUNC_3(struct usb_hub_descriptor *VAR_6)
{
 int VAR_7;

 FUNC_2(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->bDescriptorType = VAR_2;
 VAR_6->wHubCharacteristics = FUNC_1(
  VAR_1 | VAR_0);

 VAR_6->bNbrPorts = VAR_5;
 FUNC_0(VAR_5 > VAR_4);
 VAR_7 = VAR_6->bNbrPorts / 8 + 1;
 VAR_6->bDescLength = VAR_3 + 2 * VAR_7;
 FUNC_2(&VAR_6->u.hs.DeviceRemovable[0], 0, VAR_7);
 FUNC_2(&VAR_6->u.hs.DeviceRemovable[VAR_7], 0xff, VAR_7);
}
