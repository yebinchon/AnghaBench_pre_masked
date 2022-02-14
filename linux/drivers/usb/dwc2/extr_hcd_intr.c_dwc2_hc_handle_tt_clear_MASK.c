
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct urb {TYPE_3__* dev; } ;
struct dwc2_qtd {TYPE_4__* urb; } ;
struct dwc2_hsotg {int dummy; } ;
struct dwc2_host_chan {TYPE_5__* qh; } ;
struct TYPE_7__ {struct usb_device* root_hub; } ;
struct TYPE_12__ {TYPE_1__ self; } ;
struct TYPE_11__ {scalar_t__ dev_speed; int tt_buffer_dirty; } ;
struct TYPE_10__ {int status; struct urb* priv; } ;
struct TYPE_9__ {TYPE_2__* tt; } ;
struct TYPE_8__ {struct usb_device* hub; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_6__* FUNC_0 (struct dwc2_hsotg*) ;
 scalar_t__ FUNC_1 (struct urb*) ;

__attribute__((used)) static void FUNC_2(struct dwc2_hsotg *VAR_3,
        struct dwc2_host_chan *VAR_4,
        struct dwc2_qtd *VAR_5)
{
 struct usb_device *VAR_6 = FUNC_0(VAR_3)->self.root_hub;
 struct urb *VAR_7;

 if (!VAR_4->qh)
  return;

 if (VAR_4->qh->dev_speed == VAR_2)
  return;

 if (!VAR_5->urb)
  return;

 VAR_7 = VAR_5->urb->priv;
 if (!VAR_7 || !VAR_7->dev || !VAR_7->dev->tt)
  return;







 if (VAR_7->dev->tt->hub == VAR_6)
  return;

 if (VAR_5->urb->status != -VAR_0 && VAR_5->urb->status != -VAR_1) {
  VAR_4->qh->tt_buffer_dirty = 1;
  if (FUNC_1(VAR_7))

   VAR_4->qh->tt_buffer_dirty = 0;
 }
}
