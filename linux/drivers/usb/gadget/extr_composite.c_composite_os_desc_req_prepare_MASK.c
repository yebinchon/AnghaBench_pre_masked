
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct usb_ep {int dummy; } ;
struct usb_composite_dev {TYPE_1__* os_desc_req; } ;
struct TYPE_3__ {int complete; struct usb_composite_dev* context; int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (struct usb_ep*,int ) ;
 int FUNC_2 (struct usb_ep*,TYPE_1__*) ;

int FUNC_3(struct usb_composite_dev *VAR_4,
      struct usb_ep *VAR_5)
{
 int VAR_6 = 0;

 VAR_4->os_desc_req = FUNC_1(VAR_5, VAR_1);
 if (!VAR_4->os_desc_req) {
  VAR_6 = -VAR_0;
  goto end;
 }

 VAR_4->os_desc_req->buf = FUNC_0(VAR_2,
      VAR_1);
 if (!VAR_4->os_desc_req->buf) {
  VAR_6 = -VAR_0;
  FUNC_2(VAR_5, VAR_4->os_desc_req);
  goto end;
 }
 VAR_4->os_desc_req->context = VAR_4;
 VAR_4->os_desc_req->complete = VAR_3;
end:
 return VAR_6;
}
