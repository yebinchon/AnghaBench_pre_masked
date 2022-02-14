
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
typedef int tx_data ;
struct usb_ctrlrequest {int bRequestType; int wIndex; } ;
struct renesas_usb3_ep {int halt; } ;
struct TYPE_2__ {int speed; int is_selfpowered; } ;
struct renesas_usb3 {int ep0_req; TYPE_1__ gadget; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct renesas_usb3*) ;
 struct renesas_usb3_ep* FUNC_4 (struct renesas_usb3*,int) ;
 int VAR_5 ;
 int FUNC_5 (struct renesas_usb3*,int *,int,int ) ;
 int FUNC_6 (struct renesas_usb3*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static bool FUNC_8(struct renesas_usb3 *VAR_6,
        struct usb_ctrlrequest *VAR_7)
{
 bool VAR_8 = 0;
 struct renesas_usb3_ep *VAR_9;
 int VAR_10;
 u16 VAR_11 = 0;
 __le16 VAR_12;

 switch (VAR_7->bRequestType & VAR_3) {
 case 130:
  if (VAR_6->gadget.is_selfpowered)
   VAR_11 |= 1 << VAR_0;
  if (VAR_6->gadget.speed == VAR_4)
   VAR_11 |= FUNC_3(VAR_6);
  break;
 case 128:
  break;
 case 129:
  VAR_10 = FUNC_2(VAR_7->wIndex) & VAR_2;
  VAR_9 = FUNC_4(VAR_6, VAR_10);
  if (VAR_9->halt)
   VAR_11 |= 1 << VAR_1;
  break;
 default:
  VAR_8 = 1;
  break;
 }

 if (!VAR_8) {
  VAR_12 = FUNC_0(VAR_11);
  FUNC_1(FUNC_6(VAR_6), "get_status: req = %p\n",
   FUNC_7(VAR_6->ep0_req));
  FUNC_5(VAR_6, &VAR_12, sizeof(VAR_12),
      VAR_5);
 }

 return VAR_8;
}
