
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usbg_cmd {scalar_t__ data_len; scalar_t__ is_read; struct f_uas* fu; } ;
struct usb_request {scalar_t__ length; int buf; struct usbg_cmd* context; int complete; } ;
struct usb_ep {scalar_t__ maxpacket; } ;
struct TYPE_4__ {int buf; } ;
struct bulk_cs_wrap {int Residue; } ;
struct TYPE_3__ {struct bulk_cs_wrap csw; } ;
struct f_uas {TYPE_2__ cmd; struct usb_ep* ep_in; struct usb_request* bot_req_out; struct usb_ep* ep_out; struct usb_request* bot_req_in; TYPE_1__ bot_status; } ;


 int VAR_0 ;
 int FUNC_0 (struct f_uas*,struct usbg_cmd*) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct usb_ep*,struct usb_request*,int ) ;

__attribute__((used)) static void FUNC_3(struct usbg_cmd *VAR_2)
{
 struct f_uas *VAR_3 = VAR_2->fu;
 struct bulk_cs_wrap *VAR_4 = &VAR_3->bot_status.csw;
 struct usb_request *VAR_5;
 struct usb_ep *VAR_6;

 VAR_4->Residue = FUNC_1(VAR_2->data_len);

 if (VAR_2->data_len) {
  if (VAR_2->is_read) {
   VAR_6 = VAR_3->ep_in;
   VAR_5 = VAR_3->bot_req_in;
  } else {
   VAR_6 = VAR_3->ep_out;
   VAR_5 = VAR_3->bot_req_out;
  }

  if (VAR_2->data_len > VAR_3->ep_in->maxpacket) {
   VAR_5->length = VAR_6->maxpacket;
   VAR_2->data_len -= VAR_6->maxpacket;
  } else {
   VAR_5->length = VAR_2->data_len;
   VAR_2->data_len = 0;
  }
  VAR_5->complete = VAR_1;
  VAR_5->context = VAR_2;
  VAR_5->buf = VAR_3->cmd.buf;
  FUNC_2(VAR_6, VAR_5, VAR_0);
 } else {
  FUNC_0(VAR_3, VAR_2);
 }
}
