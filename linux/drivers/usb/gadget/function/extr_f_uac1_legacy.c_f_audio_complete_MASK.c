
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usb_request {int status; int length; int buf; struct f_audio* context; } ;
struct usb_ep {int dummy; } ;
struct f_audio {TYPE_1__* set_con; int set_cmd; struct usb_ep* out_ep; } ;
struct TYPE_2__ {int (* set ) (TYPE_1__*,int ,int ) ;} ;


 int FUNC_0 (struct usb_ep*,struct usb_request*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct usb_ep *VAR_0, struct usb_request *VAR_1)
{
 struct f_audio *VAR_2 = VAR_1->context;
 int VAR_3 = VAR_1->status;
 u32 VAR_4 = 0;
 struct usb_ep *VAR_5 = VAR_2->out_ep;

 switch (VAR_3) {

 case 0:
  if (VAR_0 == VAR_5)
   FUNC_0(VAR_0, VAR_1);
  else if (VAR_2->set_con) {
   FUNC_2(&VAR_4, VAR_1->buf, VAR_1->length);
   VAR_2->set_con->set(VAR_2->set_con, VAR_2->set_cmd,
     FUNC_1(VAR_4));
   VAR_2->set_con = ((void*)0);
  }
  break;
 default:
  break;
 }
}
