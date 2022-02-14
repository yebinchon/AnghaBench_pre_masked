
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {int length; int buf; scalar_t__ zero; } ;
struct usb_ep {int maxpacket; } ;
struct cdns3_request {int flags; } ;
struct cdns3_endpoint {int name; struct cdns3_device* cdns3_dev; } ;
struct cdns3_device {int lock; int dev; int zlp_buf; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usb_ep*,struct usb_request*,int ) ;
 struct usb_request* FUNC_1 (struct usb_ep*,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 struct cdns3_endpoint* FUNC_3 (struct usb_ep*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct cdns3_request* FUNC_6 (struct usb_request*) ;

__attribute__((used)) static int FUNC_7(struct usb_ep *VAR_3, struct usb_request *VAR_4,
     gfp_t VAR_5)
{
 struct usb_request *VAR_6;
 struct cdns3_endpoint *VAR_7;
 struct cdns3_device *VAR_8;
 unsigned long VAR_9;
 int VAR_10;

 if (!VAR_4 || !VAR_3)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_3);
 VAR_8 = VAR_7->cdns3_dev;

 FUNC_4(&VAR_8->lock, VAR_9);

 VAR_10 = FUNC_0(VAR_3, VAR_4, VAR_5);

 if (VAR_10 == 0 && VAR_4->zero && VAR_4->length &&
     (VAR_4->length % VAR_3->maxpacket == 0)) {
  struct cdns3_request *VAR_11;

  VAR_6 = FUNC_1(VAR_3, VAR_1);
  VAR_6->buf = VAR_8->zlp_buf;
  VAR_6->length = 0;

  VAR_11 = FUNC_6(VAR_6);
  VAR_11->flags |= VAR_2;

  FUNC_2(VAR_8->dev, "Queuing ZLP for endpoint: %s\n",
   VAR_7->name);
  VAR_10 = FUNC_0(VAR_3, VAR_6, VAR_5);
 }

 FUNC_5(&VAR_8->lock, VAR_9);
 return VAR_10;
}
