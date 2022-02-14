
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct usbctlx_rmem_completor {int dummy; } ;
struct TYPE_6__ {int rmemresp; } ;
struct TYPE_4__ {void* page; void* offset; void* frmlen; void* type; } ;
struct TYPE_5__ {TYPE_1__ rmemreq; } ;
struct hfa384x_usbctlx {int outbufsize; TYPE_3__ inbuf; int * usercb_data; int * usercb; int * cmdcb; int reapable; TYPE_2__ outbuf; } ;
struct hfa384x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct hfa384x*,struct hfa384x_usbctlx*,int ) ;
 int FUNC_3 (struct hfa384x*,struct hfa384x_usbctlx*) ;
 int FUNC_4 (struct usbctlx_rmem_completor*,int *,void*,unsigned int) ;
 int FUNC_5 (struct hfa384x_usbctlx*) ;
 int FUNC_6 (char*,int ,...) ;
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

 VAR_9 = FUNC_7();
 if (!VAR_9) {
  VAR_8 = -VAR_1;
  goto done;
 }


 VAR_9->outbuf.rmemreq.type = FUNC_1(VAR_2);
 VAR_9->outbuf.rmemreq.frmlen =
     FUNC_1(sizeof(VAR_9->outbuf.rmemreq.offset) +
   sizeof(VAR_9->outbuf.rmemreq.page) + VAR_7);
 VAR_9->outbuf.rmemreq.offset = FUNC_1(VAR_5);
 VAR_9->outbuf.rmemreq.page = FUNC_1(VAR_4);

 VAR_9->outbufsize = sizeof(VAR_9->outbuf.rmemreq);

 FUNC_6("type=0x%04x frmlen=%d offset=0x%04x page=0x%04x\n",
   VAR_9->outbuf.rmemreq.type,
   VAR_9->outbuf.rmemreq.frmlen,
   VAR_9->outbuf.rmemreq.offset, VAR_9->outbuf.rmemreq.page);

 FUNC_6("pktsize=%zd\n", FUNC_0(sizeof(VAR_9->outbuf.rmemreq)));

 VAR_9->reapable = VAR_0;
 VAR_9->cmdcb = ((void*)0);
 VAR_9->usercb = ((void*)0);
 VAR_9->usercb_data = ((void*)0);

 VAR_8 = FUNC_3(VAR_3, VAR_9);
 if (VAR_8 != 0) {
  FUNC_5(VAR_9);
 } else {
  struct usbctlx_rmem_completor VAR_10;

  VAR_8 =
      FUNC_2(VAR_3, VAR_9,
        FUNC_4
        (&VAR_10,
         &VAR_9->inbuf.rmemresp, VAR_6,
         VAR_7));
 }

done:
 return VAR_8;
}
