
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct usbctlx_cmd_completor {int dummy; } ;
struct TYPE_6__ {int wmemresp; } ;
struct TYPE_4__ {int data; void* page; void* offset; void* frmlen; void* type; } ;
struct TYPE_5__ {TYPE_1__ wmemreq; } ;
struct hfa384x_usbctlx {int outbufsize; TYPE_3__ inbuf; int * usercb_data; int * usercb; int * cmdcb; int reapable; TYPE_2__ outbuf; } ;
struct hfa384x_cmdresult {int dummy; } ;
struct hfa384x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct hfa384x*,struct hfa384x_usbctlx*,int ) ;
 int FUNC_2 (struct hfa384x*,struct hfa384x_usbctlx*) ;
 int FUNC_3 (struct usbctlx_cmd_completor*,int *,struct hfa384x_cmdresult*) ;
 int FUNC_4 (struct hfa384x_usbctlx*) ;
 int FUNC_5 (int ,void*,unsigned int) ;
 int FUNC_6 (char*,int,int,unsigned int) ;
 struct hfa384x_usbctlx* FUNC_7 () ;

__attribute__((used)) static int
FUNC_8(struct hfa384x *VAR_3,
        u16 VAR_4,
        u16 VAR_5,
        void *VAR_6,
        unsigned int VAR_7)
{
 int VAR_8;
 struct hfa384x_usbctlx *VAR_9;

 FUNC_6("page=0x%04x offset=0x%04x len=%d\n", VAR_4, VAR_5, VAR_7);

 VAR_9 = FUNC_7();
 if (!VAR_9) {
  VAR_8 = -VAR_1;
  goto done;
 }


 VAR_9->outbuf.wmemreq.type = FUNC_0(VAR_2);
 VAR_9->outbuf.wmemreq.frmlen =
     FUNC_0(sizeof(VAR_9->outbuf.wmemreq.offset) +
   sizeof(VAR_9->outbuf.wmemreq.page) + VAR_7);
 VAR_9->outbuf.wmemreq.offset = FUNC_0(VAR_5);
 VAR_9->outbuf.wmemreq.page = FUNC_0(VAR_4);
 FUNC_5(VAR_9->outbuf.wmemreq.data, VAR_6, VAR_7);

 VAR_9->outbufsize = sizeof(VAR_9->outbuf.wmemreq.type) +
     sizeof(VAR_9->outbuf.wmemreq.frmlen) +
     sizeof(VAR_9->outbuf.wmemreq.offset) +
     sizeof(VAR_9->outbuf.wmemreq.page) + VAR_7;

 VAR_9->reapable = VAR_0;
 VAR_9->cmdcb = ((void*)0);
 VAR_9->usercb = ((void*)0);
 VAR_9->usercb_data = ((void*)0);

 VAR_8 = FUNC_2(VAR_3, VAR_9);
 if (VAR_8 != 0) {
  FUNC_4(VAR_9);
 } else {
  struct usbctlx_cmd_completor VAR_10;
  struct hfa384x_cmdresult VAR_11;

  VAR_8 = FUNC_1(VAR_3,
             VAR_9,
             FUNC_3
             (&VAR_10,
       &VAR_9->inbuf.wmemresp,
       &VAR_11));
 }

done:
 return VAR_8;
}
