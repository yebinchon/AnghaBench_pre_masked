
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
struct usb_hub_descriptor {int bDescLength; int bNbrPorts; int bPwrOn2PwrGood; TYPE_2__ u; int bHubContrCurrent; int wHubCharacteristics; int bDescriptorType; } ;
struct TYPE_6__ {int is_b_host; } ;
struct usb_hcd {TYPE_3__ self; } ;
struct musb {int port1_status; int lock; int mregs; } ;
typedef int __le32 ;






 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct usb_hcd*) ;
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
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 struct musb* FUNC_3 (struct usb_hcd*) ;
 int FUNC_4 (struct musb*) ;
 int FUNC_5 (struct musb*,char*,int) ;
 int FUNC_6 (struct musb*) ;
 int FUNC_7 (struct musb*) ;
 int FUNC_8 (struct musb*,int ) ;
 int FUNC_9 (struct musb*,int) ;
 int FUNC_10 (struct musb*,int) ;
 int FUNC_11 (struct musb*) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;
 scalar_t__ FUNC_17 (int) ;

int FUNC_18(
 struct usb_hcd *VAR_16,
 u16 VAR_17,
 u16 VAR_18,
 u16 VAR_19,
 char *VAR_20,
 u16 VAR_21)
{
 struct musb *VAR_22 = FUNC_3(VAR_16);
 u32 VAR_23;
 int VAR_24 = 0;
 unsigned long VAR_25;
 bool VAR_26 = 0;

 FUNC_15(&VAR_22->lock, VAR_25);

 if (FUNC_17(!FUNC_0(VAR_16))) {
  FUNC_16(&VAR_22->lock, VAR_25);
  return -VAR_1;
 }





 switch (VAR_17) {
 case 144:
 case 139:
  switch (VAR_18) {
  case 145:
  case 146:
   break;
  default:
   goto error;
  }
  break;
 case 143:
  if ((VAR_19 & 0xff) != 1)
   goto error;

  switch (VAR_18) {
  case 132:
   break;
  case 129:
   FUNC_10(VAR_22, 0);
   break;
  case 131:
   if (!VAR_16->self.is_b_host)
    FUNC_8(VAR_22, 0);
   break;
  case 137:
  case 136:
  case 135:
  case 134:
  case 133:
   break;
  default:
   goto error;
  }
  FUNC_5(VAR_22, "clear feature %d", VAR_18);
  VAR_22->port1_status &= ~(1 << VAR_18);
  break;
 case 142:
  {
  struct usb_hub_descriptor *VAR_27 = (void *)VAR_20;

  VAR_27->bDescLength = 9;
  VAR_27->bDescriptorType = VAR_15;
  VAR_27->bNbrPorts = 1;
  VAR_27->wHubCharacteristics = FUNC_1(
   VAR_2
   | VAR_3
   );
  VAR_27->bPwrOn2PwrGood = 5;
  VAR_27->bHubContrCurrent = 0;


  VAR_27->u.hs.DeviceRemovable[0] = 0x02;
  VAR_27->u.hs.DeviceRemovable[1] = 0xff;
  }
  break;
 case 141:
  VAR_23 = 0;
  *(__le32 *) VAR_20 = FUNC_2(VAR_23);
  break;
 case 140:
  if (VAR_19 != 1)
   goto error;

  FUNC_14(FUNC_2(VAR_22->port1_status
     & ~VAR_6),
    (__le32 *) VAR_20);


  FUNC_5(VAR_22, "port status %08x", VAR_22->port1_status);
  break;
 case 138:
  if ((VAR_19 & 0xff) != 1)
   goto error;

  switch (VAR_18) {
  case 131:
   if (!VAR_16->self.is_b_host && FUNC_6(VAR_22))
    VAR_26 = 1;
   break;
  case 130:
   FUNC_9(VAR_22, 1);
   break;
  case 129:
   FUNC_10(VAR_22, 1);
   break;
  case 128:
   if (FUNC_17(FUNC_4(VAR_22)))
    goto error;

   VAR_19 >>= 8;
   switch (VAR_19) {
   case 1:
    FUNC_13("TEST_J\n");
    VAR_23 = VAR_11;
    break;
   case 2:
    FUNC_13("TEST_K\n");
    VAR_23 = VAR_12;
    break;
   case 3:
    FUNC_13("TEST_SE0_NAK\n");
    VAR_23 = VAR_14;
    break;
   case 4:
    FUNC_13("TEST_PACKET\n");
    VAR_23 = VAR_13;
    FUNC_7(VAR_22);
    break;
   case 5:
    FUNC_13("TEST_FORCE_ENABLE\n");
    VAR_23 = VAR_9
     | VAR_10;

    FUNC_12(VAR_22->mregs, VAR_4,
      VAR_5);
    break;
   case 6:
    FUNC_13("TEST_FIFO_ACCESS\n");
    VAR_23 = VAR_8;
    break;
   default:
    goto error;
   }
   FUNC_12(VAR_22->mregs, VAR_7, VAR_23);
   break;
  default:
   goto error;
  }
  FUNC_5(VAR_22, "set feature %d", VAR_18);
  VAR_22->port1_status |= 1 << VAR_18;
  break;

 default:
error:

  VAR_24 = -VAR_0;
 }
 FUNC_16(&VAR_22->lock, VAR_25);

 if (VAR_26)
  FUNC_11(VAR_22);

 return VAR_24;
}
