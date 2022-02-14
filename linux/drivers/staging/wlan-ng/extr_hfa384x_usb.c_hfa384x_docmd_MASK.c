
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usbctlx_completor {int dummy; } ;
struct usbctlx_cmd_completor {int dummy; } ;
struct TYPE_6__ {int cmdresp; } ;
struct TYPE_4__ {void* parm2; void* parm1; void* parm0; void* cmd; void* type; } ;
struct TYPE_5__ {TYPE_1__ cmdreq; } ;
struct hfa384x_usbctlx {int outbufsize; TYPE_3__ inbuf; int * usercb_data; int * usercb; int * cmdcb; int reapable; TYPE_2__ outbuf; } ;
struct hfa384x_metacmd {int result; int parm2; int parm1; int parm0; int cmd; } ;
struct hfa384x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct hfa384x*,struct hfa384x_usbctlx*,struct usbctlx_completor*) ;
 int FUNC_2 (struct hfa384x*,struct hfa384x_usbctlx*) ;
 struct usbctlx_completor* FUNC_3 (struct usbctlx_cmd_completor*,int *,int *) ;
 int FUNC_4 (struct hfa384x_usbctlx*) ;
 int FUNC_5 (char*,int ,int ,int ,int ) ;
 struct hfa384x_usbctlx* FUNC_6 () ;

__attribute__((used)) static inline int
FUNC_7(struct hfa384x *VAR_3,
       struct hfa384x_metacmd *VAR_4)
{
 int VAR_5;
 struct hfa384x_usbctlx *VAR_6;

 VAR_6 = FUNC_6();
 if (!VAR_6) {
  VAR_5 = -VAR_1;
  goto done;
 }


 VAR_6->outbuf.cmdreq.type = FUNC_0(VAR_2);
 VAR_6->outbuf.cmdreq.cmd = FUNC_0(VAR_4->cmd);
 VAR_6->outbuf.cmdreq.parm0 = FUNC_0(VAR_4->parm0);
 VAR_6->outbuf.cmdreq.parm1 = FUNC_0(VAR_4->parm1);
 VAR_6->outbuf.cmdreq.parm2 = FUNC_0(VAR_4->parm2);

 VAR_6->outbufsize = sizeof(VAR_6->outbuf.cmdreq);

 FUNC_5("cmdreq: cmd=0x%04x parm0=0x%04x parm1=0x%04x parm2=0x%04x\n",
   VAR_4->cmd, VAR_4->parm0, VAR_4->parm1, VAR_4->parm2);

 VAR_6->reapable = VAR_0;
 VAR_6->cmdcb = ((void*)0);
 VAR_6->usercb = ((void*)0);
 VAR_6->usercb_data = ((void*)0);

 VAR_5 = FUNC_2(VAR_3, VAR_6);
 if (VAR_5 != 0) {
  FUNC_4(VAR_6);
 } else {
  struct usbctlx_cmd_completor VAR_7;
  struct usbctlx_completor *VAR_8;

  VAR_8 = FUNC_3(&VAR_7,
            &VAR_6->inbuf.cmdresp,
            &VAR_4->result);

  VAR_5 = FUNC_1(VAR_3, VAR_6, VAR_8);
 }

done:
 return VAR_5;
}
