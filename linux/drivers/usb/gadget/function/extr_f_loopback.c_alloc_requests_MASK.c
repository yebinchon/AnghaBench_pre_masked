
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct usb_request {struct usb_request* context; int buf; void* complete; } ;
struct usb_composite_dev {int dummy; } ;
struct f_loopback {int qlen; int in_ep; TYPE_1__* out_ep; int buflen; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_composite_dev*,char*,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,struct usb_request*) ;
 struct usb_request* FUNC_2 (TYPE_1__*,int ) ;
 void* VAR_2 ;
 struct usb_request* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,struct usb_request*) ;
 int FUNC_5 (TYPE_1__*,struct usb_request*,int ) ;

__attribute__((used)) static int FUNC_6(struct usb_composite_dev *VAR_3,
     struct f_loopback *VAR_4)
{
 struct usb_request *VAR_5, *VAR_6;
 int VAR_7;
 int VAR_8 = 0;







 for (VAR_7 = 0; VAR_7 < VAR_4->qlen && VAR_8 == 0; VAR_7++) {
  VAR_8 = -VAR_0;

  VAR_5 = FUNC_3(VAR_4->in_ep, VAR_1);
  if (!VAR_5)
   goto fail;

  VAR_6 = FUNC_2(VAR_4->out_ep, VAR_4->buflen);
  if (!VAR_6)
   goto fail_in;

  VAR_5->complete = VAR_2;
  VAR_6->complete = VAR_2;

  VAR_5->buf = VAR_6->buf;

  VAR_5->context = VAR_6;
  VAR_6->context = VAR_5;

  VAR_8 = FUNC_5(VAR_4->out_ep, VAR_6, VAR_1);
  if (VAR_8) {
   FUNC_0(VAR_3, "%s queue req --> %d\n",
     VAR_4->out_ep->name, VAR_8);
   goto fail_out;
  }
 }

 return 0;

fail_out:
 FUNC_1(VAR_4->out_ep, VAR_6);
fail_in:
 FUNC_4(VAR_4->in_ep, VAR_5);
fail:
 return VAR_8;
}
