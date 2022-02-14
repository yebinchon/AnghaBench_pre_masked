
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int parent; } ;
struct TYPE_6__ {TYPE_2__ dev; } ;
struct qe_udc {int usb_regs; int rx_tasklet; int usb_irq; TYPE_3__ gadget; struct qe_ep* eps; void* nullp; scalar_t__ nullmap; int * done; } ;
struct TYPE_4__ {int maxpacket; } ;
struct qe_ep {int txframe; int rxbuffer; void* rxbuf_d; scalar_t__ rxbufmap; int rxframe; TYPE_1__ ep; int rxbase; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,void*,unsigned int,int ) ;
 int FUNC_4 (int ,void*,unsigned int,int ) ;
 int VAR_5 ;
 int FUNC_5 (int ,struct qe_udc*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct qe_udc* FUNC_9 (struct platform_device*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_6)
{
 struct qe_udc *VAR_7 = FUNC_9(VAR_6);
 struct qe_ep *VAR_8;
 unsigned int VAR_9;
 FUNC_0(VAR_5);

 FUNC_12(&VAR_7->gadget);

 VAR_7->done = &VAR_5;
 FUNC_10(&VAR_7->rx_tasklet);

 if (VAR_7->nullmap) {
  FUNC_4(VAR_7->gadget.dev.parent,
   VAR_7->nullp, 256,
    VAR_2);
   VAR_7->nullp = VAR_0;
 } else {
  FUNC_3(VAR_7->gadget.dev.parent,
   VAR_7->nullp, 256,
    VAR_2);
 }

 VAR_8 = &VAR_7->eps[0];
 FUNC_1(FUNC_2(VAR_8->rxbase));
 VAR_9 = (VAR_8->ep.maxpacket + VAR_4 + 2) * (VAR_3 + 1);

 FUNC_8(VAR_8->rxframe);
 if (VAR_8->rxbufmap) {
  FUNC_4(VAR_7->gadget.dev.parent,
    VAR_8->rxbuf_d, VAR_9,
    VAR_1);
  VAR_8->rxbuf_d = VAR_0;
 } else {
  FUNC_3(VAR_7->gadget.dev.parent,
    VAR_8->rxbuf_d, VAR_9,
    VAR_1);
 }

 FUNC_8(VAR_8->rxbuffer);
 FUNC_8(VAR_8->txframe);

 FUNC_5(VAR_7->usb_irq, VAR_7);
 FUNC_7(VAR_7->usb_irq);

 FUNC_11(&VAR_7->rx_tasklet);

 FUNC_6(VAR_7->usb_regs);


 FUNC_13(&VAR_5);

 return 0;
}
