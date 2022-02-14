
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wahc {int rpipe_mutex; TYPE_1__* usb_iface; } ;
struct TYPE_6__ {int wRPipeIndex; } ;
struct wa_rpipe {TYPE_3__ descr; struct usb_host_endpoint* ep; } ;
struct TYPE_5__ {int bmAttributes; int bEndpointAddress; } ;
struct usb_host_endpoint {TYPE_2__ desc; struct wa_rpipe* hcpriv; } ;
struct urb {int dummy; } ;
struct device {int dummy; } ;
typedef int gfp_t ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wa_rpipe*) ;
 int FUNC_1 (struct device*,char*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct wa_rpipe*,struct wahc*,struct usb_host_endpoint*,struct urb*,int ) ;
 int FUNC_6 (struct wa_rpipe*,struct wahc*,struct usb_host_endpoint*,struct urb*,int ) ;
 int FUNC_7 (struct wa_rpipe**,struct wahc*,int,int ) ;
 int FUNC_8 (struct wa_rpipe*) ;

int FUNC_9(struct wahc *VAR_2, struct usb_host_endpoint *VAR_3,
      struct urb *VAR_4, gfp_t VAR_5)
{
 int VAR_6 = 0;
 struct device *VAR_7 = &VAR_2->usb_iface->dev;
 struct wa_rpipe *VAR_8;
 u8 VAR_9;

 FUNC_3(&VAR_2->rpipe_mutex);
 VAR_8 = VAR_3->hcpriv;
 if (VAR_8 != ((void*)0)) {
  if (VAR_0 == 1) {
   VAR_6 = FUNC_6(VAR_8, VAR_2, VAR_3, VAR_4, VAR_5);
   if (VAR_6 < 0)
    goto error;
  }
  FUNC_0(VAR_8);
  FUNC_1(VAR_7, "ep 0x%02x: reusing rpipe %u\n",
   VAR_3->desc.bEndpointAddress,
   FUNC_2(VAR_8->descr.wRPipeIndex));
 } else {

  VAR_6 = -VAR_1;
  VAR_9 = VAR_3->desc.bmAttributes & 0x03;
  VAR_6 = FUNC_7(&VAR_8, VAR_2, 1 << VAR_9, VAR_5);
  if (VAR_6 < 0)
   goto error;
  VAR_6 = FUNC_5(VAR_8, VAR_2, VAR_3, VAR_4, VAR_5);
  if (VAR_6 < 0) {
   FUNC_8(VAR_8);
   goto error;
  }
  VAR_3->hcpriv = VAR_8;
  VAR_8->ep = VAR_3;
  FUNC_0(VAR_8);
  FUNC_1(VAR_7, "ep 0x%02x: using rpipe %u\n",
   VAR_3->desc.bEndpointAddress,
   FUNC_2(VAR_8->descr.wRPipeIndex));
 }
error:
 FUNC_4(&VAR_2->rpipe_mutex);
 return VAR_6;
}
