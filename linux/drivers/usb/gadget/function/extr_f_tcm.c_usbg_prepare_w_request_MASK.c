
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {int data_length; int t_data_sg; int t_data_nents; } ;
struct usbg_cmd {int * data_buf; struct f_uas* fu; struct se_cmd se_cmd; } ;
struct usb_request {struct usbg_cmd* context; int length; int complete; int sg; int num_sgs; int * buf; } ;
struct usb_gadget {int sg_supported; } ;
struct f_uas {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usb_gadget* FUNC_0 (struct f_uas*) ;
 int * FUNC_1 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct usbg_cmd *VAR_3, struct usb_request *VAR_4)
{
 struct se_cmd *VAR_5 = &VAR_3->se_cmd;
 struct f_uas *VAR_6 = VAR_3->fu;
 struct usb_gadget *VAR_7 = FUNC_0(VAR_6);

 if (!VAR_7->sg_supported) {
  VAR_3->data_buf = FUNC_1(VAR_5->data_length, VAR_1);
  if (!VAR_3->data_buf)
   return -VAR_0;

  VAR_4->buf = VAR_3->data_buf;
 } else {
  VAR_4->buf = ((void*)0);
  VAR_4->num_sgs = VAR_5->t_data_nents;
  VAR_4->sg = VAR_5->t_data_sg;
 }

 VAR_4->complete = VAR_2;
 VAR_4->length = VAR_5->data_length;
 VAR_4->context = VAR_3;
 return 0;
}
