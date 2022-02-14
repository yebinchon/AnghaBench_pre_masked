
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_6__ {int* DeviceRemovable; } ;
struct TYPE_7__ {TYPE_1__ hs; } ;
struct usb_hub_descriptor {int bDescLength; int bNbrPorts; int bPwrOn2PwrGood; TYPE_2__ u; int bHubContrCurrent; int wHubCharacteristics; int bDescriptorType; } ;
struct TYPE_8__ {int dma_desc_enable; int power_down; int dma_desc_fs_enable; } ;
struct TYPE_9__ {int port_connect_status; int port_over_current_change; int port_reset_change; int port_l1_change; int port_suspend_change; int port_enable_change; int port_connect_status_change; } ;
struct TYPE_10__ {TYPE_4__ b; int d32; } ;
struct dwc2_hsotg {int new_connection; int otg_port; int dev; int lx_state; int hibernated; TYPE_3__ params; TYPE_5__ flags; int bus_suspended; } ;
typedef int __le32 ;






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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;


 int VAR_22 ;
 int VAR_23 ;




 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,int,...) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct dwc2_hsotg*,int) ;
 int FUNC_8 (struct dwc2_hsotg*,int ,int,int) ;
 int FUNC_9 (struct dwc2_hsotg*) ;
 int FUNC_10 (struct dwc2_hsotg*) ;
 int FUNC_11 (struct dwc2_hsotg*,int) ;
 int FUNC_12 (struct dwc2_hsotg*) ;
 int FUNC_13 (struct dwc2_hsotg*,int ) ;
 int FUNC_14 (struct dwc2_hsotg*) ;
 int FUNC_15 (struct dwc2_hsotg*) ;
 int FUNC_16 (struct dwc2_hsotg*,int,int ) ;
 int FUNC_17 (char*,int ,int) ;
 int FUNC_18 (int) ;

__attribute__((used)) static int FUNC_19(struct dwc2_hsotg *VAR_39, u16 VAR_40,
    u16 VAR_41, u16 VAR_42, char *VAR_43, u16 VAR_44)
{
 struct usb_hub_descriptor *VAR_45;
 int VAR_46 = 0;
 u32 VAR_47;
 u32 VAR_48;
 u32 VAR_49;
 u32 VAR_50;
 u32 VAR_51;

 switch (VAR_40) {
 case 146:
  FUNC_2(VAR_39->dev, "ClearHubFeature %1xh\n", VAR_41);

  switch (VAR_41) {
  case 148:
  case 147:

   break;

  default:
   VAR_46 = -VAR_1;
   FUNC_3(VAR_39->dev,
    "ClearHubFeature request %1xh unknown\n",
    VAR_41);
  }
  break;

 case 145:
  if (VAR_41 != VAR_23)
   if (!VAR_42 || VAR_42 > 1)
    goto error;
  switch (VAR_41) {
  case 133:
   FUNC_2(VAR_39->dev,
    "ClearPortFeature USB_PORT_FEAT_ENABLE\n");
   VAR_47 = FUNC_12(VAR_39);
   VAR_47 |= VAR_6;
   FUNC_16(VAR_39, VAR_47, VAR_4);
   break;

  case 129:
   FUNC_2(VAR_39->dev,
    "ClearPortFeature USB_PORT_FEAT_SUSPEND\n");

   if (VAR_39->bus_suspended) {
    if (VAR_39->hibernated)
     FUNC_8(VAR_39, 0, 0, 1);
    else
     FUNC_10(VAR_39);
   }
   break;

  case 131:
   FUNC_2(VAR_39->dev,
    "ClearPortFeature USB_PORT_FEAT_POWER\n");
   VAR_47 = FUNC_12(VAR_39);
   VAR_51 = VAR_47 & VAR_8;
   VAR_47 &= ~VAR_8;
   FUNC_16(VAR_39, VAR_47, VAR_4);
   if (VAR_51)
    FUNC_14(VAR_39);
   break;

  case 132:
   FUNC_2(VAR_39->dev,
    "ClearPortFeature USB_PORT_FEAT_INDICATOR\n");

   break;

  case 139:



   FUNC_2(VAR_39->dev,
    "ClearPortFeature USB_PORT_FEAT_C_CONNECTION\n");
   VAR_39->flags.b.port_connect_status_change = 0;
   break;

  case 135:

   FUNC_2(VAR_39->dev,
    "ClearPortFeature USB_PORT_FEAT_C_RESET\n");
   VAR_39->flags.b.port_reset_change = 0;
   break;

  case 138:




   FUNC_2(VAR_39->dev,
    "ClearPortFeature USB_PORT_FEAT_C_ENABLE\n");
   VAR_39->flags.b.port_enable_change = 0;
   break;

  case 134:





   FUNC_2(VAR_39->dev,
    "ClearPortFeature USB_PORT_FEAT_C_SUSPEND\n");
   VAR_39->flags.b.port_suspend_change = 0;
   break;

  case 136:
   FUNC_2(VAR_39->dev,
    "ClearPortFeature USB_PORT_FEAT_C_PORT_L1\n");
   VAR_39->flags.b.port_l1_change = 0;
   break;

  case 137:
   FUNC_2(VAR_39->dev,
    "ClearPortFeature USB_PORT_FEAT_C_OVER_CURRENT\n");
   VAR_39->flags.b.port_over_current_change = 0;
   break;

  default:
   VAR_46 = -VAR_1;
   FUNC_3(VAR_39->dev,
    "ClearPortFeature request %1xh unknown or unsupported\n",
    VAR_41);
  }
  break;

 case 144:
  FUNC_2(VAR_39->dev, "GetHubDescriptor\n");
  VAR_45 = (struct usb_hub_descriptor *)VAR_43;
  VAR_45->bDescLength = 9;
  VAR_45->bDescriptorType = VAR_22;
  VAR_45->bNbrPorts = 1;
  VAR_45->wHubCharacteristics =
   FUNC_0(VAR_17 |
        VAR_18);
  VAR_45->bPwrOn2PwrGood = 1;
  VAR_45->bHubContrCurrent = 0;
  VAR_45->u.hs.DeviceRemovable[0] = 0;
  VAR_45->u.hs.DeviceRemovable[1] = 0xff;
  break;

 case 143:
  FUNC_2(VAR_39->dev, "GetHubStatus\n");
  FUNC_17(VAR_43, 0, 4);
  break;

 case 142:
  FUNC_5(VAR_39->dev,
    "GetPortStatus wIndex=0x%04x flags=0x%08x\n", VAR_42,
    VAR_39->flags.d32);
  if (!VAR_42 || VAR_42 > 1)
   goto error;

  VAR_48 = 0;
  if (VAR_39->flags.b.port_connect_status_change)
   VAR_48 |= VAR_25 << 16;
  if (VAR_39->flags.b.port_enable_change)
   VAR_48 |= VAR_26 << 16;
  if (VAR_39->flags.b.port_suspend_change)
   VAR_48 |= VAR_30 << 16;
  if (VAR_39->flags.b.port_l1_change)
   VAR_48 |= VAR_27 << 16;
  if (VAR_39->flags.b.port_reset_change)
   VAR_48 |= VAR_29 << 16;
  if (VAR_39->flags.b.port_over_current_change) {
   FUNC_6(VAR_39->dev, "Overcurrent change detected\n");
   VAR_48 |= VAR_28 << 16;
  }

  if (!VAR_39->flags.b.port_connect_status) {







   *(__le32 *)VAR_43 = FUNC_1(VAR_48);
   break;
  }

  VAR_47 = FUNC_13(VAR_39, VAR_4);
  FUNC_5(VAR_39->dev, "  HPRT0: 0x%08x\n", VAR_47);

  if (VAR_47 & VAR_5)
   VAR_48 |= VAR_24;
  if (VAR_47 & VAR_6)
   VAR_48 |= VAR_31;
  if (VAR_47 & VAR_14)
   VAR_48 |= VAR_37;
  if (VAR_47 & VAR_7)
   VAR_48 |= VAR_34;
  if (VAR_47 & VAR_9)
   VAR_48 |= VAR_36;
  if (VAR_47 & VAR_8)
   VAR_48 |= VAR_35;

  VAR_49 = (VAR_47 & VAR_12) >> VAR_13;
  if (VAR_49 == VAR_10)
   VAR_48 |= VAR_32;
  else if (VAR_49 == VAR_11)
   VAR_48 |= VAR_33;

  if (VAR_47 & VAR_15)
   VAR_48 |= VAR_38;


  if (VAR_39->params.dma_desc_fs_enable) {




   if (VAR_39->new_connection &&
       ((VAR_48 &
         (VAR_24 |
          VAR_32 |
          VAR_33)) ==
          VAR_24)) {
    u32 VAR_52;

    FUNC_4(VAR_39->dev, "Enabling descriptor DMA mode\n");
    VAR_39->params.dma_desc_enable = 1;
    VAR_52 = FUNC_13(VAR_39, VAR_2);
    VAR_52 |= VAR_3;
    FUNC_16(VAR_39, VAR_52, VAR_2);
    VAR_39->new_connection = 0;
   }
  }

  FUNC_5(VAR_39->dev, "port_status=%08x\n", VAR_48);
  *(__le32 *)VAR_43 = FUNC_1(VAR_48);
  break;

 case 141:
  FUNC_2(VAR_39->dev, "SetHubFeature\n");

  break;

 case 140:
  FUNC_2(VAR_39->dev, "SetPortFeature\n");
  if (VAR_41 != 128 && (!VAR_42 || VAR_42 > 1))
   goto error;

  if (!VAR_39->flags.b.port_connect_status) {







   break;
  }

  switch (VAR_41) {
  case 129:
   FUNC_2(VAR_39->dev,
    "SetPortFeature - USB_PORT_FEAT_SUSPEND\n");
   if (VAR_42 != VAR_39->otg_port)
    goto error;
   if (VAR_39->params.power_down == 2)
    FUNC_7(VAR_39, 1);
   else
    FUNC_11(VAR_39, VAR_42);
   break;

  case 131:
   FUNC_2(VAR_39->dev,
    "SetPortFeature - USB_PORT_FEAT_POWER\n");
   VAR_47 = FUNC_12(VAR_39);
   VAR_51 = VAR_47 & VAR_8;
   VAR_47 |= VAR_8;
   FUNC_16(VAR_39, VAR_47, VAR_4);
   if (!VAR_51)
    FUNC_15(VAR_39);
   break;

  case 130:
   if (VAR_39->params.power_down == 2 &&
       VAR_39->hibernated)
    FUNC_8(VAR_39, 0, 1, 1);
   VAR_47 = FUNC_12(VAR_39);
   FUNC_2(VAR_39->dev,
    "SetPortFeature - USB_PORT_FEAT_RESET\n");
   VAR_50 = FUNC_13(VAR_39, VAR_19);
   VAR_50 &= ~(VAR_20 | VAR_21);
   FUNC_16(VAR_39, VAR_50, VAR_19);

   FUNC_16(VAR_39, 0, VAR_19);

   VAR_47 = FUNC_12(VAR_39);
   VAR_51 = VAR_47 & VAR_8;

   VAR_47 &= ~VAR_14;






   if (!FUNC_9(VAR_39)) {
    VAR_47 |= VAR_8 | VAR_9;
    FUNC_2(VAR_39->dev,
     "In host mode, hprt0=%08x\n", VAR_47);
    FUNC_16(VAR_39, VAR_47, VAR_4);
    if (!VAR_51)
     FUNC_15(VAR_39);
   }


   FUNC_18(50);
   VAR_47 &= ~VAR_9;
   FUNC_16(VAR_39, VAR_47, VAR_4);
   VAR_39->lx_state = VAR_0;
   break;

  case 132:
   FUNC_2(VAR_39->dev,
    "SetPortFeature - USB_PORT_FEAT_INDICATOR\n");

   break;

  case 128:
   VAR_47 = FUNC_12(VAR_39);
   FUNC_2(VAR_39->dev,
    "SetPortFeature - USB_PORT_FEAT_TEST\n");
   VAR_47 &= ~VAR_15;
   VAR_47 |= (VAR_42 >> 8) << VAR_16;
   FUNC_16(VAR_39, VAR_47, VAR_4);
   break;

  default:
   VAR_46 = -VAR_1;
   FUNC_3(VAR_39->dev,
    "SetPortFeature %1xh unknown or unsupported\n",
    VAR_41);
   break;
  }
  break;

 default:
error:
  VAR_46 = -VAR_1;
  FUNC_2(VAR_39->dev,
   "Unknown hub control request: %1xh wIndex: %1xh wValue: %1xh\n",
   VAR_40, VAR_42, VAR_41);
  break;
 }

 return VAR_46;
}
