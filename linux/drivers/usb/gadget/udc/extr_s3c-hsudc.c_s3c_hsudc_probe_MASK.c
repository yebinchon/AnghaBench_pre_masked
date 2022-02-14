
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct s3c_hsudc_ep {int dummy; } ;
struct TYPE_6__ {int speed; scalar_t__ is_a_peripheral; scalar_t__ is_otg; int * ep0; int name; int * ops; int max_speed; } ;
struct s3c_hsudc {int irq; int transceiver; int uclk; TYPE_2__ gadget; TYPE_1__* ep; int lock; int regs; TYPE_3__* supplies; void* pd; struct device* dev; } ;
struct s3c24xx_hsudc_platdata {int epnum; } ;
struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_7__ {int supply; } ;
struct TYPE_5__ {int ep; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct device*,char*,...) ;
 void* FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*,char*) ;
 int FUNC_10 (struct device*,struct resource*) ;
 struct s3c_hsudc* FUNC_11 (struct device*,int,int ) ;
 int FUNC_12 (struct device*,int,TYPE_3__*) ;
 int FUNC_13 (struct device*,int,int ,int ,int ,struct s3c_hsudc*) ;
 int FUNC_14 (int) ;
 int VAR_6 ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (struct platform_device*,int ) ;
 struct resource* FUNC_18 (struct platform_device*,int ,int ) ;
 int FUNC_19 (struct platform_device*,struct device*) ;
 int FUNC_20 (struct device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_21 (struct s3c_hsudc*) ;
 int * VAR_9 ;
 int FUNC_22 (int *) ;
 int FUNC_23 (struct device*,TYPE_2__*) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;

__attribute__((used)) static int FUNC_26(struct platform_device *VAR_10)
{
 struct device *VAR_11 = &VAR_10->dev;
 struct resource *VAR_12;
 struct s3c_hsudc *VAR_13;
 struct s3c24xx_hsudc_platdata *VAR_14 = FUNC_7(&VAR_10->dev);
 int VAR_15, VAR_16;

 VAR_13 = FUNC_11(&VAR_10->dev, sizeof(struct s3c_hsudc) +
   sizeof(struct s3c_hsudc_ep) * VAR_14->epnum,
   VAR_1);
 if (!VAR_13)
  return -VAR_0;

 FUNC_19(VAR_10, VAR_11);
 VAR_13->dev = VAR_11;
 VAR_13->pd = FUNC_7(&VAR_10->dev);

 VAR_13->transceiver = FUNC_24(VAR_3);

 for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_13->supplies); VAR_16++)
  VAR_13->supplies[VAR_16].supply = VAR_9[VAR_16];

 VAR_15 = FUNC_12(VAR_11, FUNC_0(VAR_13->supplies),
     VAR_13->supplies);
 if (VAR_15 != 0) {
  FUNC_6(VAR_11, "failed to request supplies: %d\n", VAR_15);
  goto err_supplies;
 }

 VAR_12 = FUNC_18(VAR_10, VAR_2, 0);

 VAR_13->regs = FUNC_10(&VAR_10->dev, VAR_12);
 if (FUNC_1(VAR_13->regs)) {
  VAR_15 = FUNC_3(VAR_13->regs);
  goto err_res;
 }

 FUNC_22(&VAR_13->lock);

 VAR_13->gadget.max_speed = VAR_4;
 VAR_13->gadget.ops = &VAR_7;
 VAR_13->gadget.name = FUNC_8(VAR_11);
 VAR_13->gadget.ep0 = &VAR_13->ep[0].ep;
 VAR_13->gadget.is_otg = 0;
 VAR_13->gadget.is_a_peripheral = 0;
 VAR_13->gadget.speed = VAR_5;

 FUNC_21(VAR_13);

 VAR_15 = FUNC_17(VAR_10, 0);
 if (VAR_15 < 0)
  goto err_res;
 VAR_13->irq = VAR_15;

 VAR_15 = FUNC_13(&VAR_10->dev, VAR_13->irq, VAR_8, 0,
    VAR_6, VAR_13);
 if (VAR_15 < 0) {
  FUNC_6(VAR_11, "irq request failed\n");
  goto err_res;
 }

 VAR_13->uclk = FUNC_9(&VAR_10->dev, "usb-device");
 if (FUNC_1(VAR_13->uclk)) {
  FUNC_6(VAR_11, "failed to find usb-device clock source\n");
  VAR_15 = FUNC_3(VAR_13->uclk);
  goto err_res;
 }
 FUNC_5(VAR_13->uclk);

 FUNC_15();

 FUNC_14(VAR_13->irq);
 FUNC_16();

 VAR_15 = FUNC_23(&VAR_10->dev, &VAR_13->gadget);
 if (VAR_15)
  goto err_add_udc;

 FUNC_20(VAR_11);

 return 0;
err_add_udc:
 FUNC_4(VAR_13->uclk);
err_res:
 if (!FUNC_2(VAR_13->transceiver))
  FUNC_25(VAR_13->transceiver);

err_supplies:
 return VAR_15;
}
