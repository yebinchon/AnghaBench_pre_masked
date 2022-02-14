
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zd_usb {int cmd_error; scalar_t__ in_async; int submitted_cmds; } ;
struct TYPE_2__ {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 unsigned int FUNC_4 (int *,unsigned int) ;
 int FUNC_5 (struct zd_usb*,int) ;
 int FUNC_6 (struct zd_usb*) ;
 TYPE_1__* FUNC_7 (struct zd_usb*) ;

int FUNC_8(struct zd_usb *VAR_2, unsigned int VAR_3)
{
 int VAR_4;

 FUNC_0(FUNC_2(&FUNC_7(VAR_2)->mutex));
 FUNC_0(VAR_2->in_async);


 VAR_4 = FUNC_5(VAR_2, 1);
 if (VAR_4) {
  FUNC_1(FUNC_6(VAR_2),
   "error in zd_submit_waiting_usb(). "
   "Error number %d\n", VAR_4);

  FUNC_3(&VAR_2->submitted_cmds);
  goto error;
 }

 if (VAR_3)
  VAR_3 = FUNC_4(&VAR_2->submitted_cmds,
       VAR_3);
 if (!VAR_3) {
  FUNC_3(&VAR_2->submitted_cmds);
  if (VAR_2->cmd_error == -VAR_0) {
   FUNC_1(FUNC_6(VAR_2), "timed out");
   VAR_4 = -VAR_1;
   goto error;
  }
 }

 VAR_4 = VAR_2->cmd_error;
error:
 VAR_2->in_async = 0;
 return VAR_4;
}
