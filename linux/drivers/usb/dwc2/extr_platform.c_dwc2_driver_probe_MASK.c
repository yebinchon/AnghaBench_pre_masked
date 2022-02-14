
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct resource {scalar_t__ start; } ;
struct TYPE_11__ {int of_node; int coherent_dma_mask; int * dma_mask; } ;
struct platform_device {TYPE_1__ dev; } ;
struct dwc2_hsotg {int irq; scalar_t__ dr_mode; int gadget_enabled; int reset_phy_on_wake; int hcd_enabled; scalar_t__ hibernated; TYPE_1__* dev; int phy; void* need_phy_for_wake; int needs_byte_swap; int * vbus_supply; int lock; int * regs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (TYPE_1__*,char*,int,...) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int * FUNC_8 (TYPE_1__*,struct resource*) ;
 struct dwc2_hsotg* FUNC_9 (TYPE_1__*,int,int ) ;
 int * FUNC_10 (TYPE_1__*,char*) ;
 int FUNC_11 (TYPE_1__*,int,int ,int ,int ,struct dwc2_hsotg*) ;
 int FUNC_12 (TYPE_1__*,int ) ;
 int FUNC_13 (struct dwc2_hsotg*) ;
 int FUNC_14 (struct dwc2_hsotg*,int) ;
 int FUNC_15 (struct dwc2_hsotg*) ;
 int FUNC_16 (struct dwc2_hsotg*) ;
 int FUNC_17 (struct dwc2_hsotg*) ;
 int FUNC_18 (struct dwc2_hsotg*) ;
 int FUNC_19 (struct dwc2_hsotg*) ;
 int VAR_7 ;
 int FUNC_20 (struct dwc2_hsotg*) ;
 int FUNC_21 (struct dwc2_hsotg*) ;
 int FUNC_22 (struct dwc2_hsotg*) ;
 int FUNC_23 (struct dwc2_hsotg*) ;
 int FUNC_24 (struct dwc2_hsotg*) ;
 int FUNC_25 (struct dwc2_hsotg*) ;
 void* FUNC_26 (int ,char*) ;
 int FUNC_27 (struct platform_device*,int ) ;
 struct resource* FUNC_28 (struct platform_device*,int ,int ) ;
 int FUNC_29 (struct platform_device*,struct dwc2_hsotg*) ;
 int FUNC_30 (int *) ;

__attribute__((used)) static int FUNC_31(struct platform_device *VAR_8)
{
 struct dwc2_hsotg *VAR_9;
 struct resource *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_9(&VAR_8->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->dev = &VAR_8->dev;




 if (!VAR_8->dev.dma_mask)
  VAR_8->dev.dma_mask = &VAR_8->dev.coherent_dma_mask;
 VAR_11 = FUNC_12(&VAR_8->dev, FUNC_0(32));
 if (VAR_11) {
  FUNC_4(&VAR_8->dev, "can't set coherent DMA mask: %d\n", VAR_11);
  return VAR_11;
 }

 VAR_10 = FUNC_28(VAR_8, VAR_3, 0);
 VAR_9->regs = FUNC_8(&VAR_8->dev, VAR_10);
 if (FUNC_1(VAR_9->regs))
  return FUNC_2(VAR_9->regs);

 FUNC_3(&VAR_8->dev, "mapped PA %08lx to VA %p\n",
  (unsigned long)VAR_10->start, VAR_9->regs);

 VAR_11 = FUNC_25(VAR_9);
 if (VAR_11)
  return VAR_11;

 FUNC_30(&VAR_9->lock);

 VAR_9->irq = FUNC_27(VAR_8, 0);
 if (VAR_9->irq < 0)
  return VAR_9->irq;

 FUNC_3(VAR_9->dev, "registering common handler for irq%d\n",
  VAR_9->irq);
 VAR_11 = FUNC_11(VAR_9->dev, VAR_9->irq,
      VAR_7, VAR_4,
      FUNC_5(VAR_9->dev), VAR_9);
 if (VAR_11)
  return VAR_11;

 VAR_9->vbus_supply = FUNC_10(VAR_9->dev, "vbus");
 if (FUNC_1(VAR_9->vbus_supply)) {
  VAR_11 = FUNC_2(VAR_9->vbus_supply);
  VAR_9->vbus_supply = ((void*)0);
  if (VAR_11 != -VAR_0)
   return VAR_11;
 }

 VAR_11 = FUNC_24(VAR_9);
 if (VAR_11)
  return VAR_11;

 VAR_9->needs_byte_swap = FUNC_13(VAR_9);

 VAR_11 = FUNC_18(VAR_9);
 if (VAR_11)
  goto error;

 VAR_9->need_phy_for_wake =
  FUNC_26(VAR_8->dev.of_node,
          "snps,need-phy-for-wake");





 VAR_11 = FUNC_14(VAR_9, 0);
 if (VAR_11)
  goto error;


 VAR_11 = FUNC_19(VAR_9);
 if (VAR_11)
  goto error;






 FUNC_16(VAR_9);

 VAR_11 = FUNC_22(VAR_9);
 if (VAR_11)
  goto error;

 if (VAR_9->dr_mode != VAR_5) {
  VAR_11 = FUNC_17(VAR_9);
  if (VAR_11)
   goto error;
  VAR_9->gadget_enabled = 1;
 }






 if (VAR_9->need_phy_for_wake)
  FUNC_7(&VAR_8->dev, 1);

 VAR_9->reset_phy_on_wake =
  FUNC_26(VAR_8->dev.of_node,
          "snps,reset-phy-on-wake");
 if (VAR_9->reset_phy_on_wake && !VAR_9->phy) {
  FUNC_6(VAR_9->dev,
    "Quirk reset-phy-on-wake only supports generic PHYs\n");
  VAR_9->reset_phy_on_wake = 0;
 }

 if (VAR_9->dr_mode != VAR_6) {
  VAR_11 = FUNC_20(VAR_9);
  if (VAR_11) {
   if (VAR_9->gadget_enabled)
    FUNC_21(VAR_9);
   goto error;
  }
  VAR_9->hcd_enabled = 1;
 }

 FUNC_29(VAR_8, VAR_9);
 VAR_9->hibernated = 0;

 FUNC_15(VAR_9);


 if (VAR_9->dr_mode == VAR_6)
  FUNC_23(VAR_9);

 return 0;

error:
 FUNC_23(VAR_9);
 return VAR_11;
}
