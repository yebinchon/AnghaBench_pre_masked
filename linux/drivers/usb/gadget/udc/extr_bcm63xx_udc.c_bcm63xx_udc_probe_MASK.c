
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct bcm63xx_usbd_platform_data {int use_fullspeed; } ;
struct TYPE_2__ {int max_speed; int name; int * ops; } ;
struct bcm63xx_udc {TYPE_1__ gadget; struct bcm63xx_udc* iudma; int ep0_wq; int lock; void* iudma_regs; void* usbd_regs; struct bcm63xx_usbd_platform_data* pd; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct bcm63xx_udc*) ;
 int FUNC_4 (struct bcm63xx_udc*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct bcm63xx_udc*) ;
 int VAR_11 ;
 int FUNC_6 (struct bcm63xx_udc*) ;
 int FUNC_7 (struct device*,char*,...) ;
 struct bcm63xx_usbd_platform_data* FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*) ;
 void* FUNC_10 (struct device*,struct resource*) ;
 struct bcm63xx_udc* FUNC_11 (struct device*,int,int ) ;
 scalar_t__ FUNC_12 (struct device*,int,int *,int ,int ,struct bcm63xx_udc*) ;
 int FUNC_13 (struct platform_device*,int) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int) ;
 int FUNC_15 (struct platform_device*,struct bcm63xx_udc*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct device*,TYPE_1__*) ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_13)
{
 struct device *VAR_14 = &VAR_13->dev;
 struct bcm63xx_usbd_platform_data *VAR_15 = FUNC_8(VAR_14);
 struct bcm63xx_udc *VAR_16;
 struct resource *VAR_17;
 int VAR_18 = -VAR_2, VAR_19, VAR_20;

 VAR_16 = FUNC_11(VAR_14, sizeof(*VAR_16), VAR_4);
 if (!VAR_16)
  return -VAR_2;

 FUNC_15(VAR_13, VAR_16);
 VAR_16->dev = VAR_14;
 VAR_16->pd = VAR_15;

 if (!VAR_15) {
  FUNC_7(VAR_14, "missing platform data\n");
  return -VAR_1;
 }

 VAR_17 = FUNC_14(VAR_13, VAR_5, 0);
 VAR_16->usbd_regs = FUNC_10(VAR_14, VAR_17);
 if (FUNC_1(VAR_16->usbd_regs))
  return FUNC_2(VAR_16->usbd_regs);

 VAR_17 = FUNC_14(VAR_13, VAR_5, 1);
 VAR_16->iudma_regs = FUNC_10(VAR_14, VAR_17);
 if (FUNC_1(VAR_16->iudma_regs))
  return FUNC_2(VAR_16->iudma_regs);

 FUNC_16(&VAR_16->lock);
 FUNC_0(&VAR_16->ep0_wq, VAR_8);

 VAR_16->gadget.ops = &VAR_11;
 VAR_16->gadget.name = FUNC_9(VAR_14);

 if (!VAR_15->use_fullspeed && !VAR_12)
  VAR_16->gadget.max_speed = VAR_7;
 else
  VAR_16->gadget.max_speed = VAR_6;


 VAR_18 = FUNC_3(VAR_16);
 if (VAR_18)
  return VAR_18;

 VAR_18 = -VAR_3;


 VAR_20 = FUNC_13(VAR_13, 0);
 if (VAR_20 < 0)
  goto out_uninit;
 if (FUNC_12(VAR_14, VAR_20, &VAR_9, 0,
        FUNC_9(VAR_14), VAR_16) < 0)
  goto report_request_failure;


 for (VAR_19 = 0; VAR_19 < VAR_0; VAR_19++) {
  VAR_20 = FUNC_13(VAR_13, VAR_19 + 1);
  if (VAR_20 < 0)
   goto out_uninit;
  if (FUNC_12(VAR_14, VAR_20, &VAR_10, 0,
         FUNC_9(VAR_14), &VAR_16->iudma[VAR_19]) < 0)
   goto report_request_failure;
 }

 FUNC_5(VAR_16);
 VAR_18 = FUNC_17(VAR_14, &VAR_16->gadget);
 if (!VAR_18)
  return 0;

 FUNC_4(VAR_16);
out_uninit:
 FUNC_6(VAR_16);
 return VAR_18;

report_request_failure:
 FUNC_7(VAR_14, "error requesting IRQ #%d\n", VAR_20);
 goto out_uninit;
}
