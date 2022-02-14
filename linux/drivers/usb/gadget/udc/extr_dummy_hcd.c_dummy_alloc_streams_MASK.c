
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int bEndpointAddress; } ;
struct usb_host_endpoint {TYPE_2__ desc; int ss_ep_comp; } ;
struct usb_hcd {int dummy; } ;
struct usb_device {int dummy; } ;
struct dummy_hcd {int stream_en_ep; TYPE_1__* dum; } ;
typedef int gfp_t ;
struct TYPE_4__ {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (struct dummy_hcd*) ;
 unsigned int FUNC_2 (TYPE_2__*) ;
 struct dummy_hcd* FUNC_3 (struct usb_hcd*) ;
 int FUNC_4 (struct dummy_hcd*,int ,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct usb_hcd *VAR_1, struct usb_device *VAR_2,
 struct usb_host_endpoint **VAR_3, unsigned int VAR_4,
 unsigned int VAR_5, gfp_t VAR_6)
{
 struct dummy_hcd *VAR_7 = FUNC_3(VAR_1);
 unsigned long VAR_8;
 int VAR_9;
 int VAR_10 = VAR_5;
 unsigned int VAR_11;
 unsigned int VAR_12;

 if (!VAR_4)
  return -VAR_0;

 FUNC_5(&VAR_7->dum->lock, VAR_8);
 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
  VAR_11 = FUNC_2(&VAR_3[VAR_12]->desc);
  if ((1 << VAR_11) & VAR_7->stream_en_ep) {
   VAR_10 = -VAR_0;
   goto out;
  }
  VAR_9 = FUNC_8(&VAR_3[VAR_12]->ss_ep_comp);
  if (!VAR_9) {
   VAR_10 = -VAR_0;
   goto out;
  }
  if (VAR_9 < VAR_10) {
   FUNC_0(FUNC_1(VAR_7), "Ep 0x%x only supports %u "
     "stream IDs.\n",
     VAR_3[VAR_12]->desc.bEndpointAddress,
     VAR_9);
   VAR_10 = VAR_9;
  }
 }

 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
  VAR_11 = FUNC_2(&VAR_3[VAR_12]->desc);
  VAR_7->stream_en_ep |= 1 << VAR_11;
  FUNC_4(VAR_7,
    FUNC_7(&VAR_3[VAR_12]->desc), VAR_10);
 }
out:
 FUNC_6(&VAR_7->dum->lock, VAR_8);
 return VAR_10;
}
