
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_endpoint_descriptor {int dummy; } ;
struct fotg210_udc {struct fotg210_ep** ep; } ;
struct TYPE_2__ {int maxpacket; } ;
struct fotg210_ep {size_t epnum; int dir_in; TYPE_1__ ep; int type; struct fotg210_udc* fotg210; } ;


 int FUNC_0 (struct fotg210_ep*,size_t,int ) ;
 int FUNC_1 (struct fotg210_ep*,size_t,int ) ;
 int FUNC_2 (struct fotg210_ep*,size_t,int ,int ) ;
 int FUNC_3 (struct fotg210_ep*,size_t,int ) ;

__attribute__((used)) static int FUNC_4(struct fotg210_ep *VAR_0,
       const struct usb_endpoint_descriptor *VAR_1)
{
 struct fotg210_udc *VAR_2 = VAR_0->fotg210;

 FUNC_1(VAR_0, VAR_0->epnum, VAR_0->dir_in);
 FUNC_3(VAR_0, VAR_0->epnum, VAR_0->type);
 FUNC_2(VAR_0, VAR_0->epnum, VAR_0->ep.maxpacket, VAR_0->dir_in);
 FUNC_0(VAR_0, VAR_0->epnum, VAR_0->dir_in);

 VAR_2->ep[VAR_0->epnum] = VAR_0;

 return 0;
}
