
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_ep {unsigned int maxpacket; int name; int comp_desc; } ;
struct usb_endpoint_descriptor {scalar_t__ bDescriptorType; int bEndpointAddress; } ;
struct dummy_hcd {int dummy; } ;
struct TYPE_3__ {int name; } ;
struct dummy_ep {int stream_en; scalar_t__ wedged; scalar_t__ halted; struct usb_endpoint_descriptor const* desc; TYPE_1__ ep; } ;
struct TYPE_4__ {int speed; } ;
struct dummy {TYPE_2__ gadget; int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;






 int FUNC_0 (int ,char*,int ,int,char*,int ,unsigned int,char*) ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_4 ;
 struct dummy* FUNC_2 (struct dummy_ep*) ;
 struct dummy_hcd* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct dummy_hcd*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct dummy*) ;
 unsigned int FUNC_7 (struct usb_endpoint_descriptor const*) ;
 int FUNC_8 (struct usb_endpoint_descriptor const*) ;
 int FUNC_9 (struct usb_endpoint_descriptor const*) ;
 struct dummy_ep* FUNC_10 (struct usb_ep*) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct usb_ep *VAR_5,
  const struct usb_endpoint_descriptor *VAR_6)
{
 struct dummy *VAR_7;
 struct dummy_hcd *VAR_8;
 struct dummy_ep *VAR_9;
 unsigned VAR_10;
 int VAR_11;

 VAR_9 = FUNC_10(VAR_5);
 if (!VAR_5 || !VAR_6 || VAR_9->desc || VAR_5->name == VAR_4
   || VAR_6->bDescriptorType != VAR_3)
  return -VAR_0;
 VAR_7 = FUNC_2(VAR_9);
 if (!VAR_7->driver)
  return -VAR_1;

 VAR_8 = FUNC_3(&VAR_7->gadget);
 if (!FUNC_4(VAR_8))
  return -VAR_1;






 VAR_10 = FUNC_7(VAR_6);
 VAR_11 = -VAR_0;
 switch (FUNC_8(VAR_6)) {
 case 133:
  if (FUNC_5(VAR_9->ep.name, "-iso")
    || FUNC_5(VAR_9->ep.name, "-int")) {
   goto done;
  }
  switch (VAR_7->gadget.speed) {
  case 128:
   if (VAR_10 == 1024)
    break;
   goto done;
  case 129:
   if (VAR_10 == 512)
    break;
   goto done;
  case 130:
   if (VAR_10 == 8 || VAR_10 == 16 || VAR_10 == 32 || VAR_10 == 64)

    break;

  default:
   goto done;
  }
  break;
 case 132:
  if (FUNC_5(VAR_9->ep.name, "-iso"))
   goto done;

  switch (VAR_7->gadget.speed) {
  case 128:
  case 129:
   if (VAR_10 <= 1024)
    break;


  case 130:
   if (VAR_10 <= 64)
    break;


  default:
   if (VAR_10 <= 8)
    break;
   goto done;
  }
  break;
 case 131:
  if (FUNC_5(VAR_9->ep.name, "-bulk")
    || FUNC_5(VAR_9->ep.name, "-int"))
   goto done;

  switch (VAR_7->gadget.speed) {
  case 128:
  case 129:
   if (VAR_10 <= 1024)
    break;


  case 130:
   if (VAR_10 <= 1023)
    break;

  default:
   goto done;
  }
  break;
 default:

  goto done;
 }

 VAR_5->maxpacket = VAR_10;
 if (FUNC_12(VAR_5->comp_desc)) {
  if (!FUNC_9(VAR_6)) {
   FUNC_1(FUNC_6(VAR_7), "Can't enable stream support on "
     "non-bulk ep %s\n", VAR_5->name);
   return -VAR_0;
  }
  VAR_9->stream_en = 1;
 }
 VAR_9->desc = VAR_6;

 FUNC_0(FUNC_6(VAR_7), "enabled %s (ep%d%s-%s) maxpacket %d stream %s\n",
  VAR_5->name,
  VAR_6->bEndpointAddress & 0x0f,
  (VAR_6->bEndpointAddress & VAR_2) ? "in" : "out",
  FUNC_11(FUNC_8(VAR_6)),
  VAR_10, VAR_9->stream_en ? "enabled" : "disabled");




 VAR_9->halted = VAR_9->wedged = 0;
 VAR_11 = 0;
done:
 return VAR_11;
}
