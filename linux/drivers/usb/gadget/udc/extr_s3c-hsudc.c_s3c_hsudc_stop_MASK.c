
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_gadget {int dummy; } ;
struct TYPE_4__ {int speed; } ;
struct s3c_hsudc {int * driver; int supplies; int irq; TYPE_3__* transceiver; int lock; TYPE_2__* pd; int dev; TYPE_1__ gadget; } ;
struct TYPE_6__ {int otg; } ;
struct TYPE_5__ {int (* gpio_uninit ) () ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct s3c_hsudc*) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 () ;
 struct s3c_hsudc* FUNC_11 (struct usb_gadget*) ;

__attribute__((used)) static int FUNC_12(struct usb_gadget *VAR_2)
{
 struct s3c_hsudc *VAR_3 = FUNC_11(VAR_2);
 unsigned long VAR_4;

 if (!VAR_3)
  return -VAR_0;

 FUNC_8(&VAR_3->lock, VAR_4);
 VAR_3->gadget.speed = VAR_1;
 FUNC_7();

 FUNC_4(VAR_3->dev);

 if (VAR_3->pd->gpio_uninit)
  VAR_3->pd->gpio_uninit();
 FUNC_6(VAR_3);
 FUNC_9(&VAR_3->lock, VAR_4);

 if (!FUNC_1(VAR_3->transceiver))
  (void) FUNC_3(VAR_3->transceiver->otg, ((void*)0));

 FUNC_2(VAR_3->irq);

 FUNC_5(FUNC_0(VAR_3->supplies), VAR_3->supplies);
 VAR_3->driver = ((void*)0);

 return 0;
}
