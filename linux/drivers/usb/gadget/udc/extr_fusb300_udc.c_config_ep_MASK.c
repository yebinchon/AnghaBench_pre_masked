
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_endpoint_descriptor {int bmAttributes; int bEndpointAddress; scalar_t__ bInterval; } ;
struct fusb300_ep_info {int type; int dir_in; int epnum; scalar_t__ bw_num; scalar_t__ interval; int maxpacket; scalar_t__ addrofs; } ;
struct TYPE_2__ {struct usb_endpoint_descriptor const* desc; } ;
struct fusb300_ep {TYPE_1__ ep; struct fusb300* fusb300; } ;
struct fusb300 {struct fusb300_ep** ep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fusb300*,struct fusb300_ep_info) ;
 int FUNC_1 (struct fusb300_ep*,struct fusb300_ep_info) ;
 int FUNC_2 (struct fusb300*,struct fusb300_ep_info) ;
 int FUNC_3 (struct usb_endpoint_descriptor const*) ;
 scalar_t__ FUNC_4 (struct usb_endpoint_descriptor const*) ;

__attribute__((used)) static int FUNC_5(struct fusb300_ep *VAR_5,
       const struct usb_endpoint_descriptor *VAR_6)
{
 struct fusb300 *VAR_7 = VAR_5->fusb300;
 struct fusb300_ep_info VAR_8;

 VAR_5->ep.desc = VAR_6;

 VAR_8.interval = 0;
 VAR_8.addrofs = 0;
 VAR_8.bw_num = 0;

 VAR_8.type = VAR_6->bmAttributes & VAR_2;
 VAR_8.dir_in = (VAR_6->bEndpointAddress & VAR_0) ? 1 : 0;
 VAR_8.maxpacket = FUNC_3(VAR_6);
 VAR_8.epnum = VAR_6->bEndpointAddress & VAR_1;

 if ((VAR_8.type == VAR_3) ||
    (VAR_8.type == VAR_4)) {
  VAR_8.interval = VAR_6->bInterval;
  if (VAR_8.type == VAR_4)
   VAR_8.bw_num = FUNC_4(VAR_6);
 }

 FUNC_0(VAR_7, VAR_8);

 FUNC_2(VAR_7, VAR_8);

 FUNC_1(VAR_5, VAR_8);

 VAR_7->ep[VAR_8.epnum] = VAR_5;

 return 0;
}
