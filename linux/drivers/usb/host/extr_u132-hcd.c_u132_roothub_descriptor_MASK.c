
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int* DeviceRemovable; } ;
struct TYPE_5__ {TYPE_1__ hs; } ;
struct usb_hub_descriptor {int bPwrOn2PwrGood; int bNbrPorts; int bDescLength; TYPE_2__ u; int wHubCharacteristics; scalar_t__ bHubContrCurrent; int bDescriptorType; } ;
struct u132 {int num_ports; } ;
struct TYPE_6__ {int b; int a; } ;


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
 TYPE_3__ VAR_13 ;
 int FUNC_2 (struct u132*,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct u132 *VAR_14,
 struct usb_hub_descriptor *VAR_15)
{
 int VAR_16;
 u16 VAR_17;
 u32 VAR_18 = -1;
 u32 VAR_19 = -1;
 VAR_16 = FUNC_2(VAR_14, VAR_13.a, &VAR_18);
 if (VAR_16)
  return VAR_16;
 VAR_15->bDescriptorType = VAR_12;
 VAR_15->bPwrOn2PwrGood = (VAR_18 & VAR_9) >> 24;
 VAR_15->bHubContrCurrent = 0;
 VAR_15->bNbrPorts = VAR_14->num_ports;
 VAR_17 = 1 + (VAR_14->num_ports / 8);
 VAR_15->bDescLength = 7 + 2 * VAR_17;
 VAR_17 = VAR_0 | VAR_1;
 if (VAR_18 & VAR_7)
  VAR_17 |= VAR_4;
 if (VAR_18 & VAR_10)
  VAR_17 |= VAR_2;
 if (VAR_18 & VAR_6)
  VAR_17 |= VAR_5;
 else if (VAR_18 & VAR_8)
  VAR_17 |= VAR_3;
 VAR_15->wHubCharacteristics = FUNC_0(VAR_17);
 VAR_16 = FUNC_2(VAR_14, VAR_13.b, &VAR_19);
 if (VAR_16)
  return VAR_16;
 FUNC_1(VAR_15->u.hs.DeviceRemovable, 0xff,
   sizeof(VAR_15->u.hs.DeviceRemovable));
 VAR_15->u.hs.DeviceRemovable[0] = VAR_19 & VAR_11;
 if (VAR_14->num_ports > 7) {
  VAR_15->u.hs.DeviceRemovable[1] = (VAR_19 & VAR_11) >> 8;
  VAR_15->u.hs.DeviceRemovable[2] = 0xff;
 } else
  VAR_15->u.hs.DeviceRemovable[1] = 0xff;
 return 0;
}
