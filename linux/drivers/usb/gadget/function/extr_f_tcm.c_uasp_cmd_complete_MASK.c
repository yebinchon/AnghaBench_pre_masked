
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_request {scalar_t__ status; int actual; int buf; struct f_uas* context; } ;
struct usb_ep {int dummy; } ;
struct TYPE_2__ {int req; } ;
struct f_uas {TYPE_1__ cmd; int ep_cmd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct f_uas*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct usb_ep *VAR_1, struct usb_request *VAR_2)
{
 struct f_uas *VAR_3 = VAR_2->context;
 int VAR_4;

 if (VAR_2->status < 0)
  return;

 VAR_4 = FUNC_1(VAR_3, VAR_2->buf, VAR_2->actual);






 if (!VAR_4)
  return;
 FUNC_0(VAR_3->ep_cmd, VAR_3->cmd.req, VAR_0);
}
