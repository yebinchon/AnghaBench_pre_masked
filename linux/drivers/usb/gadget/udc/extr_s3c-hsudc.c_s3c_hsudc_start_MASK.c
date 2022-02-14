
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_gadget_driver {scalar_t__ max_speed; int setup; } ;
struct usb_gadget {int dummy; } ;
struct TYPE_5__ {int name; } ;
struct s3c_hsudc {struct usb_gadget_driver* driver; int supplies; TYPE_1__* pd; int dev; int irq; TYPE_2__ gadget; TYPE_3__* transceiver; } ;
struct TYPE_6__ {int otg; } ;
struct TYPE_4__ {int (* gpio_init ) () ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (struct s3c_hsudc*) ;
 int FUNC_10 () ;
 struct s3c_hsudc* FUNC_11 (struct usb_gadget*) ;

__attribute__((used)) static int FUNC_12(struct usb_gadget *VAR_4,
  struct usb_gadget_driver *VAR_5)
{
 struct s3c_hsudc *VAR_6 = FUNC_11(VAR_4);
 int VAR_7;

 if (!VAR_5
  || VAR_5->max_speed < VAR_3
  || !VAR_5->setup)
  return -VAR_1;

 if (!VAR_6)
  return -VAR_2;

 if (VAR_6->driver)
  return -VAR_0;

 VAR_6->driver = VAR_5;

 VAR_7 = FUNC_7(FUNC_0(VAR_6->supplies),
        VAR_6->supplies);
 if (VAR_7 != 0) {
  FUNC_2(VAR_6->dev, "failed to enable supplies: %d\n", VAR_7);
  goto err_supplies;
 }


 if (!FUNC_1(VAR_6->transceiver)) {
  VAR_7 = FUNC_4(VAR_6->transceiver->otg,
     &VAR_6->gadget);
  if (VAR_7) {
   FUNC_2(VAR_6->dev, "%s: can't bind to transceiver\n",
     VAR_6->gadget.name);
   goto err_otg;
  }
 }

 FUNC_3(VAR_6->irq);
 FUNC_9(VAR_6);

 FUNC_5(VAR_6->dev);

 FUNC_8();
 if (VAR_6->pd->gpio_init)
  VAR_6->pd->gpio_init();

 return 0;
err_otg:
 FUNC_6(FUNC_0(VAR_6->supplies), VAR_6->supplies);
err_supplies:
 VAR_6->driver = ((void*)0);
 return VAR_7;
}
