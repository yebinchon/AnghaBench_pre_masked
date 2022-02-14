
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_cmd {int data_length; int t_data_sg; int t_data_nents; } ;
struct usbg_cmd {int state; int * data_buf; struct uas_stream* stream; struct f_uas* fu; struct se_cmd se_cmd; } ;
struct usb_gadget {int sg_supported; } ;
struct uas_stream {TYPE_1__* req_in; } ;
struct f_uas {int dummy; } ;
struct TYPE_2__ {struct usbg_cmd* context; int length; int complete; int sg; int num_sgs; int * buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct usb_gadget* FUNC_0 (struct f_uas*) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct usbg_cmd *VAR_4)
{
 struct se_cmd *VAR_5 = &VAR_4->se_cmd;
 struct f_uas *VAR_6 = VAR_4->fu;
 struct usb_gadget *VAR_7 = FUNC_0(VAR_6);
 struct uas_stream *VAR_8 = VAR_4->stream;

 if (!VAR_7->sg_supported) {
  VAR_4->data_buf = FUNC_1(VAR_5->data_length, VAR_1);
  if (!VAR_4->data_buf)
   return -VAR_0;

  FUNC_2(VAR_5->t_data_sg,
    VAR_5->t_data_nents,
    VAR_4->data_buf,
    VAR_5->data_length);

  VAR_8->req_in->buf = VAR_4->data_buf;
 } else {
  VAR_8->req_in->buf = ((void*)0);
  VAR_8->req_in->num_sgs = VAR_5->t_data_nents;
  VAR_8->req_in->sg = VAR_5->t_data_sg;
 }

 VAR_8->req_in->complete = VAR_3;
 VAR_8->req_in->length = VAR_5->data_length;
 VAR_8->req_in->context = VAR_4;

 VAR_4->state = VAR_2;
 return 0;
}
