
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cmdresp; } ;
struct hfa384x_usbctlx {scalar_t__ state; int usercb_data; int (* usercb ) (struct hfa384x*,struct hfa384x_cmdresult*,int ) ;TYPE_1__ inbuf; } ;
struct hfa384x_cmdresult {int status; } ;
struct hfa384x {int dummy; } ;
typedef int cmdresult ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hfa384x_cmdresult*,int ,int) ;
 int FUNC_2 (struct hfa384x*,struct hfa384x_cmdresult*,int ) ;
 int FUNC_3 (int *,struct hfa384x_cmdresult*) ;

__attribute__((used)) static void FUNC_4(struct hfa384x *VAR_2,
         const struct hfa384x_usbctlx *VAR_3)
{
 if (VAR_3->usercb) {
  struct hfa384x_cmdresult VAR_4;

  if (VAR_3->state != VAR_0) {
   FUNC_1(&VAR_4, 0, sizeof(VAR_4));
   VAR_4.status =
       FUNC_0(VAR_1);
  } else {
   FUNC_3(&VAR_3->inbuf.cmdresp, &VAR_4);
  }

  VAR_3->usercb(VAR_2, &VAR_4, VAR_3->usercb_data);
 }
}
