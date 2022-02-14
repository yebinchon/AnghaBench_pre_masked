
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int speed; } ;
struct usb_ep {int desc; } ;
struct dwc3_trb {int ctrl; int size; int bph; int bpl; } ;
struct dwc3_ep {scalar_t__ stream_capable; struct usb_ep endpoint; struct dwc3* dwc; } ;
struct dwc3 {int dev; struct usb_gadget gadget; } ;
typedef enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;




 int VAR_9 ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct dwc3_ep*) ;
 int FUNC_5 (struct dwc3_ep*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct dwc3_ep*,struct dwc3_trb*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 unsigned int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(struct dwc3_ep *VAR_10, struct dwc3_trb *VAR_11,
  dma_addr_t VAR_12, unsigned VAR_13, unsigned VAR_14, unsigned VAR_15,
  unsigned VAR_16, unsigned VAR_17, unsigned VAR_18)
{
 struct dwc3 *VAR_19 = VAR_10->dwc;
 struct usb_gadget *VAR_20 = &VAR_19->gadget;
 enum usb_device_speed VAR_21 = VAR_20->speed;

 VAR_11->size = FUNC_1(VAR_13);
 VAR_11->bpl = FUNC_6(VAR_12);
 VAR_11->bph = FUNC_8(VAR_12);

 switch (FUNC_11(VAR_10->endpoint.desc)) {
 case 130:
  VAR_11->ctrl = VAR_0;
  break;

 case 128:
  if (!VAR_15) {
   VAR_11->ctrl = VAR_2;
   if (VAR_21 == VAR_9) {
    struct usb_ep *VAR_22 = &VAR_10->endpoint;
    unsigned int VAR_23 = 2;
    unsigned int VAR_24 = FUNC_10(VAR_22->desc);

    if (VAR_13 <= (2 * VAR_24))
     VAR_23--;

    if (VAR_13 <= VAR_24)
     VAR_23--;

    VAR_11->size |= FUNC_2(VAR_23);
   }
  } else {
   VAR_11->ctrl = VAR_1;
  }


  VAR_11->ctrl |= VAR_8;
  break;

 case 131:
 case 129:
  VAR_11->ctrl = VAR_3;
  break;
 default:




  FUNC_3(VAR_19->dev, "Unknown endpoint type %d\n",
    FUNC_11(VAR_10->endpoint.desc));
 }





 if (FUNC_9(VAR_10->endpoint.desc)) {
  if (!VAR_10->stream_capable)
   VAR_11->ctrl |= VAR_5;

  if (VAR_17)
   VAR_11->ctrl |= VAR_8;
 }

 if ((!VAR_18 && !VAR_14) ||
   (FUNC_4(VAR_10) == 1))
  VAR_11->ctrl |= VAR_7;

 if (VAR_14)
  VAR_11->ctrl |= VAR_4;

 if (FUNC_12(VAR_10->endpoint.desc) && VAR_10->stream_capable)
  VAR_11->ctrl |= FUNC_0(VAR_16);

 VAR_11->ctrl |= VAR_6;

 FUNC_5(VAR_10);

 FUNC_7(VAR_10, VAR_11);
}
