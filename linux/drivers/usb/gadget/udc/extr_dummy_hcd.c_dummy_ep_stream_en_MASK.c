
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usb_endpoint_descriptor {int dummy; } ;
struct urb {TYPE_1__* ep; } ;
struct dummy_hcd {int stream_en_ep; } ;
struct TYPE_2__ {struct usb_endpoint_descriptor desc; } ;


 int FUNC_0 (struct usb_endpoint_descriptor const*) ;
 int FUNC_1 (struct usb_endpoint_descriptor const*) ;

__attribute__((used)) static int FUNC_2(struct dummy_hcd *VAR_0, struct urb *VAR_1)
{
 const struct usb_endpoint_descriptor *VAR_2 = &VAR_1->ep->desc;
 u32 VAR_3;

 if (!FUNC_1(VAR_2))
  return 0;

 VAR_3 = FUNC_0(VAR_2);
 return (1 << VAR_3) & VAR_0->stream_en_ep;
}
