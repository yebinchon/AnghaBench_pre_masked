
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_request {int length; int buf; int complete; } ;
struct usb_ep {int name; } ;
struct usb_composite_dev {int dummy; } ;
struct TYPE_4__ {TYPE_1__* config; } ;
struct f_sourcesink {int isoc_maxpacket; int iso_qlen; int bulk_qlen; int buflen; int pattern; TYPE_2__ function; struct usb_ep* out_ep; struct usb_ep* in_ep; struct usb_ep* iso_out_ep; struct usb_ep* iso_in_ep; int isoc_mult; int isoc_maxburst; } ;
struct TYPE_3__ {struct usb_composite_dev* cdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_composite_dev*,char*,char*,char*,int ,int) ;
 int VAR_1 ;


 int FUNC_1 (struct usb_ep*,struct usb_request*) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct usb_ep*,struct usb_request*) ;
 int VAR_2 ;
 struct usb_request* FUNC_4 (struct usb_ep*,int) ;
 int FUNC_5 (struct usb_ep*,struct usb_request*,int ) ;

__attribute__((used)) static int FUNC_6(struct f_sourcesink *VAR_3, bool VAR_4,
  bool VAR_5, int VAR_6)
{
 struct usb_ep *VAR_7;
 struct usb_request *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12 = 0;

 if (VAR_5) {
  switch (VAR_6) {
  case 128:
   VAR_10 = VAR_3->isoc_maxpacket *
     (VAR_3->isoc_mult + 1) *
     (VAR_3->isoc_maxburst + 1);
   break;
  case 129:
   VAR_10 = VAR_3->isoc_maxpacket * (VAR_3->isoc_mult + 1);
   break;
  default:
   VAR_10 = VAR_3->isoc_maxpacket > 1023 ?
     1023 : VAR_3->isoc_maxpacket;
   break;
  }
  VAR_7 = VAR_4 ? VAR_3->iso_in_ep : VAR_3->iso_out_ep;
  VAR_11 = VAR_3->iso_qlen;
 } else {
  VAR_7 = VAR_4 ? VAR_3->in_ep : VAR_3->out_ep;
  VAR_11 = VAR_3->bulk_qlen;
  VAR_10 = VAR_3->buflen;
 }

 for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
  VAR_8 = FUNC_4(VAR_7, VAR_10);
  if (!VAR_8)
   return -VAR_0;

  VAR_8->complete = VAR_2;
  if (VAR_4)
   FUNC_3(VAR_7, VAR_8);
  else if (VAR_3->pattern != 2)
   FUNC_2(VAR_8->buf, 0x55, VAR_8->length);

  VAR_12 = FUNC_5(VAR_7, VAR_8, VAR_1);
  if (VAR_12) {
   struct usb_composite_dev *VAR_13;

   VAR_13 = VAR_3->function.config->cdev;
   FUNC_0(VAR_13, "start %s%s %s --> %d\n",
         VAR_5 ? "ISO-" : "", VAR_4 ? "IN" : "OUT",
         VAR_7->name, VAR_12);
   FUNC_1(VAR_7, VAR_8);
   return VAR_12;
  }
 }

 return VAR_12;
}
