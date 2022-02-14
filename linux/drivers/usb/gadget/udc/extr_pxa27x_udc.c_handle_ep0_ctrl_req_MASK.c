
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct usb_ctrlrequest {int bRequestType; int wLength; int wIndex; int wValue; int bRequest; } ;
struct pxa_udc {int gadget; TYPE_1__* driver; struct pxa_ep* pxa_ep; } ;
struct pxa_ep {int lock; } ;
struct pxa27x_request {int dummy; } ;
struct TYPE_2__ {int (* setup ) (int *,struct usb_ctrlrequest*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct pxa_ep*) ;
 int FUNC_1 (struct pxa_ep*,char*,void*,int,...) ;
 int FUNC_2 (struct pxa_ep*,char*,int) ;
 int FUNC_3 (struct pxa_ep*) ;
 int FUNC_4 (struct pxa_ep*,int) ;
 scalar_t__ FUNC_5 (struct pxa_ep*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct pxa_ep*,int ) ;
 int FUNC_8 (struct pxa_udc*,int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,struct usb_ctrlrequest*) ;
 void* FUNC_12 (struct pxa_ep*,int ) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14(struct pxa_udc *VAR_11,
    struct pxa27x_request *VAR_12)
{
 struct pxa_ep *VAR_13 = &VAR_11->pxa_ep[0];
 union {
  struct usb_ctrlrequest r;
  u32 word[2];
 } VAR_14;
 int VAR_15;
 int VAR_16 = 0;
 unsigned long VAR_17;

 FUNC_7(VAR_13, -VAR_0);
 FUNC_9(&VAR_13->lock, VAR_17);







 if (FUNC_5(VAR_13) && (FUNC_0(VAR_13) == 0))
  FUNC_4(VAR_13, VAR_7);


 for (VAR_15 = 0; VAR_15 < 2; VAR_15++) {
  if (FUNC_13(FUNC_3(VAR_13)))
   goto stall;
  VAR_14.word[VAR_15] = FUNC_12(VAR_13, VAR_9);
 }

 VAR_16 = !FUNC_3(VAR_13);
 while (!FUNC_3(VAR_13)) {
  VAR_15 = FUNC_12(VAR_13, VAR_9);
  FUNC_2(VAR_13, "wrong to have extra bytes for setup : 0x%08x\n", VAR_15);
 }

 FUNC_1(VAR_13, "SETUP %02x.%02x v%04x i%04x l%04x\n",
  VAR_14.r.bRequestType, VAR_14.r.bRequest,
  FUNC_6(VAR_14.r.wValue), FUNC_6(VAR_14.r.wIndex),
  FUNC_6(VAR_14.r.wLength));
 if (FUNC_13(VAR_16))
  goto stall;

 if (VAR_14.r.bRequestType & VAR_10)
  FUNC_8(VAR_11, VAR_1);
 else
  FUNC_8(VAR_11, VAR_2);


 FUNC_4(VAR_13, VAR_8 | VAR_7);

 FUNC_10(&VAR_13->lock, VAR_17);
 VAR_15 = VAR_11->driver->setup(&VAR_11->gadget, &VAR_14.r);
 FUNC_9(&VAR_13->lock, VAR_17);
 if (VAR_15 < 0)
  goto stall;
out:
 FUNC_10(&VAR_13->lock, VAR_17);
 return;
stall:
 FUNC_1(VAR_13, "protocol STALL, udccsr0=%03x err %d\n",
  FUNC_12(VAR_13, VAR_4), VAR_15);
 FUNC_4(VAR_13, VAR_5 | VAR_6);
 FUNC_8(VAR_11, VAR_3);
 goto out;
}
