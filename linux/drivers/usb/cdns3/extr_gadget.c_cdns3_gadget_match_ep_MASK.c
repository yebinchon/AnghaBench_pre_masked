
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ss_ep_comp_descriptor {int dummy; } ;
struct usb_gadget {int dummy; } ;
struct usb_ep {struct usb_endpoint_descriptor* desc; } ;
struct usb_endpoint_descriptor {scalar_t__ bInterval; } ;
struct cdns3_endpoint {struct usb_ep endpoint; int interval; int flags; int type; int dir; int name; } ;
struct cdns3_device {int lock; int dev; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct cdns3_endpoint*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct cdns3_endpoint* FUNC_2 (struct cdns3_device*,struct usb_endpoint_descriptor*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,char*) ;
 struct cdns3_device* FUNC_5 (struct usb_gadget*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (struct usb_endpoint_descriptor*) ;
 int FUNC_9 (struct usb_endpoint_descriptor*) ;

__attribute__((used)) static struct
usb_ep *FUNC_10(struct usb_gadget *VAR_3,
         struct usb_endpoint_descriptor *VAR_4,
         struct usb_ss_ep_comp_descriptor *VAR_5)
{
 struct cdns3_device *VAR_6 = FUNC_5(VAR_3);
 struct cdns3_endpoint *VAR_7;
 unsigned long VAR_8;

 VAR_7 = FUNC_2(VAR_6, VAR_4);
 if (FUNC_1(VAR_7)) {
  FUNC_4(VAR_6->dev, "no available ep\n");
  return ((void*)0);
 }

 FUNC_3(VAR_6->dev, "match endpoint: %s\n", VAR_7->name);

 FUNC_6(&VAR_6->lock, VAR_8);
 VAR_7->endpoint.desc = VAR_4;
 VAR_7->dir = FUNC_8(VAR_4) ? VAR_1 : VAR_2;
 VAR_7->type = FUNC_9(VAR_4);
 VAR_7->flags |= VAR_0;
 VAR_7->interval = VAR_4->bInterval ? FUNC_0(VAR_4->bInterval - 1) : 0;

 FUNC_7(&VAR_6->lock, VAR_8);
 return &VAR_7->endpoint;
}
