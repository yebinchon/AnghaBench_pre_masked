
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct usb_hcd {int uses_new_polling; } ;
struct fotg210_hcd {int periodic_dma; int command; int sbrn; TYPE_3__* regs; TYPE_2__* caps; int last_periodic_enable; int rh_state; TYPE_1__* async; } ;
struct TYPE_6__ {int intr_enable; int command; int async_next; int frame_list; } ;
struct TYPE_5__ {int hc_capbase; int hcc_params; } ;
struct TYPE_4__ {scalar_t__ qh_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct fotg210_hcd*,int) ;
 int VAR_6 ;
 int FUNC_1 (struct fotg210_hcd*) ;
 int FUNC_2 (struct fotg210_hcd*) ;
 int FUNC_3 (struct fotg210_hcd*,char*,int) ;
 int FUNC_4 (int *) ;
 int VAR_7 ;
 int FUNC_5 (struct fotg210_hcd*,char*,int,int,int,int) ;
 int FUNC_6 (struct fotg210_hcd*,int *) ;
 int FUNC_7 (struct fotg210_hcd*,int,int *) ;
 struct fotg210_hcd* FUNC_8 (struct usb_hcd*) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int,int) ;

__attribute__((used)) static int FUNC_12(struct usb_hcd *VAR_8)
{
 struct fotg210_hcd *VAR_9 = FUNC_8(VAR_8);
 u32 VAR_10;
 u32 VAR_11;

 VAR_8->uses_new_polling = 1;



 FUNC_7(VAR_9, VAR_9->periodic_dma,
   &VAR_9->regs->frame_list);
 FUNC_7(VAR_9, (u32)VAR_9->async->qh_dma,
   &VAR_9->regs->async_next);
 VAR_11 = FUNC_6(VAR_9, &VAR_9->caps->hcc_params);





 VAR_9->command &= ~(VAR_1|VAR_2|VAR_0|VAR_3);
 VAR_9->command |= VAR_4;
 FUNC_7(VAR_9, VAR_9->command, &VAR_9->regs->command);
 FUNC_3(VAR_9, "init", VAR_9->command);
 FUNC_4(&VAR_7);
 VAR_9->rh_state = VAR_5;

 FUNC_6(VAR_9, &VAR_9->regs->command);
 FUNC_11(5000, 10000);
 FUNC_10(&VAR_7);
 VAR_9->last_periodic_enable = FUNC_9();

 VAR_10 = FUNC_0(VAR_9,
   FUNC_6(VAR_9, &VAR_9->caps->hc_capbase));
 FUNC_5(VAR_9,
   "USB %x.%x started, EHCI %x.%02x\n",
   ((VAR_9->sbrn & 0xf0) >> 4), (VAR_9->sbrn & 0x0f),
   VAR_10 >> 8, VAR_10 & 0xff);

 FUNC_7(VAR_9, VAR_6,
   &VAR_9->regs->intr_enable);





 FUNC_1(VAR_9);
 FUNC_2(VAR_9);

 return 0;
}
