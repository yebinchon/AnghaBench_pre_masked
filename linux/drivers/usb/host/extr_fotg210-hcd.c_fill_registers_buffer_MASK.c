
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_6__* controller; } ;
struct usb_hcd {int product_desc; TYPE_2__ self; } ;
struct TYPE_11__ {unsigned int complete; char* unlink; int lost_iaa; int iaa; int error; int normal; } ;
struct fotg210_hcd {int async_unlink; int lock; TYPE_5__ stats; TYPE_4__* regs; TYPE_3__* caps; } ;
struct debug_buffer {char* output_buf; unsigned int alloc_size; int bus; } ;
typedef unsigned int ssize_t ;
typedef int scratch ;
struct TYPE_12__ {TYPE_1__* bus; } ;
struct TYPE_10__ {int intr_enable; int command; int status; } ;
struct TYPE_9__ {int hcc_params; int hcs_params; int hc_capbase; } ;
struct TYPE_7__ {int name; } ;


 int FUNC_0 (struct usb_hcd*) ;
 unsigned int FUNC_1 (struct fotg210_hcd*,unsigned int) ;
 struct usb_hcd* FUNC_2 (int ) ;
 unsigned int FUNC_3 (char*,int,char const*,unsigned int) ;
 unsigned int FUNC_4 (char*,int,char const*,unsigned int) ;
 unsigned int FUNC_5 (char*,int,char const*,unsigned int) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (struct fotg210_hcd*) ;
 unsigned int FUNC_8 (struct fotg210_hcd*,int *) ;
 struct fotg210_hcd* FUNC_9 (struct usb_hcd*) ;
 int FUNC_10 (struct fotg210_hcd*) ;
 unsigned int FUNC_11 (char*,unsigned int,char const*,unsigned int,...) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_14(struct debug_buffer *VAR_0)
{
 struct usb_hcd *VAR_1;
 struct fotg210_hcd *VAR_2;
 unsigned long VAR_3;
 unsigned VAR_4, VAR_5, VAR_6;
 char *VAR_7, VAR_8[80];
 static const char VAR_9[] = "%*s\n";
 static const char VAR_10[] = "";

 VAR_1 = FUNC_2(VAR_0->bus);
 VAR_2 = FUNC_9(VAR_1);
 VAR_7 = VAR_0->output_buf;
 VAR_5 = VAR_0->alloc_size;

 FUNC_12(&VAR_2->lock, VAR_3);

 if (!FUNC_0(VAR_1)) {
  VAR_5 = FUNC_11(VAR_7, VAR_5,
    "bus %s, device %s\n"
    "%s\n"
    "SUSPENDED(no register access)\n",
    VAR_1->self.controller->bus->name,
    FUNC_6(VAR_1->self.controller),
    VAR_1->product_desc);
  goto done;
 }


 VAR_6 = FUNC_1(VAR_2, FUNC_8(VAR_2,
   &VAR_2->caps->hc_capbase));
 VAR_4 = FUNC_11(VAR_7, VAR_5,
   "bus %s, device %s\n"
   "%s\n"
   "EHCI %x.%02x, rh state %s\n",
   VAR_1->self.controller->bus->name,
   FUNC_6(VAR_1->self.controller),
   VAR_1->product_desc,
   VAR_6 >> 8, VAR_6 & 0x0ff, FUNC_10(VAR_2));
 VAR_5 -= VAR_4;
 VAR_7 += VAR_4;


 VAR_6 = FUNC_8(VAR_2, &VAR_2->caps->hcs_params);
 VAR_4 = FUNC_11(VAR_7, VAR_5, "structural params 0x%08x\n", VAR_6);
 VAR_5 -= VAR_4;
 VAR_7 += VAR_4;

 VAR_6 = FUNC_8(VAR_2, &VAR_2->caps->hcc_params);
 VAR_4 = FUNC_11(VAR_7, VAR_5, "capability params 0x%08x\n", VAR_6);
 VAR_5 -= VAR_4;
 VAR_7 += VAR_4;


 VAR_4 = FUNC_5(VAR_8, sizeof(VAR_8), VAR_10,
   FUNC_8(VAR_2, &VAR_2->regs->status));
 VAR_4 = FUNC_11(VAR_7, VAR_5, VAR_9, VAR_4, VAR_8);
 VAR_5 -= VAR_4;
 VAR_7 += VAR_4;

 VAR_4 = FUNC_3(VAR_8, sizeof(VAR_8), VAR_10,
   FUNC_8(VAR_2, &VAR_2->regs->command));
 VAR_4 = FUNC_11(VAR_7, VAR_5, VAR_9, VAR_4, VAR_8);
 VAR_5 -= VAR_4;
 VAR_7 += VAR_4;

 VAR_4 = FUNC_4(VAR_8, sizeof(VAR_8), VAR_10,
   FUNC_8(VAR_2, &VAR_2->regs->intr_enable));
 VAR_4 = FUNC_11(VAR_7, VAR_5, VAR_9, VAR_4, VAR_8);
 VAR_5 -= VAR_4;
 VAR_7 += VAR_4;

 VAR_4 = FUNC_11(VAR_7, VAR_5, "uframe %04x\n",
   FUNC_7(VAR_2));
 VAR_5 -= VAR_4;
 VAR_7 += VAR_4;

 if (VAR_2->async_unlink) {
  VAR_4 = FUNC_11(VAR_7, VAR_5, "async unlink qh %p\n",
    VAR_2->async_unlink);
  VAR_5 -= VAR_4;
  VAR_7 += VAR_4;
 }
done:
 FUNC_13(&VAR_2->lock, VAR_3);

 return VAR_0->alloc_size - VAR_5;
}
