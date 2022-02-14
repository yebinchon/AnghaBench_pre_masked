
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct ast_vhub {int force_usb1; int irq; int ep0; scalar_t__ ep0_bufs_dma; int ep0_bufs; scalar_t__ regs; scalar_t__ clk; struct platform_device* pdev; int lock; } ;
typedef enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_7 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ast_vhub*,char*,struct resource*,scalar_t__) ;
 int FUNC_3 (struct ast_vhub*,char*,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct ast_vhub*,int) ;
 int FUNC_5 (struct ast_vhub*,int *,int *) ;
 int FUNC_6 (struct ast_vhub*) ;
 int FUNC_7 (struct ast_vhub*) ;
 int VAR_11 ;
 int FUNC_8 (struct platform_device*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *,char*,...) ;
 int FUNC_11 (int *,char*,int) ;
 scalar_t__ FUNC_12 (int *,int *) ;
 scalar_t__ FUNC_13 (int *,struct resource*) ;
 struct ast_vhub* FUNC_14 (int *,int,int ) ;
 int FUNC_15 (int *,int,int ,int ,int ,struct ast_vhub*) ;
 int FUNC_16 (int *,int,scalar_t__*,int ) ;
 int FUNC_17 (struct platform_device*,int ) ;
 struct resource* FUNC_18 (struct platform_device*,int ,int ) ;
 int FUNC_19 (struct platform_device*,struct ast_vhub*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_23(struct platform_device *VAR_12)
{
 enum usb_device_speed VAR_13;
 struct ast_vhub *VAR_14;
 struct resource *VAR_15;
 int VAR_16, VAR_17 = 0;

 VAR_14 = FUNC_14(&VAR_12->dev, sizeof(*VAR_14), VAR_5);
 if (!VAR_14)
  return -VAR_4;

 FUNC_20(&VAR_14->lock);
 VAR_14->pdev = VAR_12;

 VAR_15 = FUNC_18(VAR_12, VAR_6, 0);
 VAR_14->regs = FUNC_13(&VAR_12->dev, VAR_15);
 if (FUNC_0(VAR_14->regs)) {
  FUNC_10(&VAR_12->dev, "Failed to map resources\n");
  return FUNC_1(VAR_14->regs);
 }
 FUNC_2(VAR_14, "vHub@%pR mapped @%p\n", VAR_15, VAR_14->regs);

 FUNC_19(VAR_12, VAR_14);

 VAR_14->clk = FUNC_12(&VAR_12->dev, ((void*)0));
 if (FUNC_0(VAR_14->clk)) {
  VAR_17 = FUNC_1(VAR_14->clk);
  goto err;
 }
 VAR_17 = FUNC_9(VAR_14->clk);
 if (VAR_17) {
  FUNC_10(&VAR_12->dev, "Error couldn't enable clock (%d)\n", VAR_17);
  goto err;
 }


 VAR_13 = FUNC_21(&VAR_12->dev);
 if (VAR_13 != VAR_9 && VAR_13 < VAR_8)
  VAR_14->force_usb1 = 1;


 FUNC_22(0, VAR_14->regs + VAR_1);
 FUNC_22(VAR_10, VAR_14->regs + VAR_2);


 VAR_14->irq = FUNC_17(VAR_12, 0);
 if (VAR_14->irq < 0) {
  VAR_17 = VAR_14->irq;
  goto err;
 }
 VAR_17 = FUNC_15(&VAR_12->dev, VAR_14->irq, VAR_11, 0,
         VAR_7, VAR_14);
 if (VAR_17) {
  FUNC_10(&VAR_12->dev, "Failed to request interrupt\n");
  goto err;
 }





 VAR_14->ep0_bufs = FUNC_16(&VAR_12->dev,
         VAR_0 *
         (VAR_3 + 1),
         &VAR_14->ep0_bufs_dma, VAR_5);
 if (!VAR_14->ep0_bufs) {
  FUNC_10(&VAR_12->dev, "Failed to allocate EP0 DMA buffers\n");
  VAR_17 = -VAR_4;
  goto err;
 }
 FUNC_3(VAR_14, "EP0 DMA buffers @%p (DMA 0x%08x)\n",
  VAR_14->ep0_bufs, (u32)VAR_14->ep0_bufs_dma);


 FUNC_5(VAR_14, &VAR_14->ep0, ((void*)0));


 for (VAR_16 = 0; VAR_16 < VAR_3 && VAR_17 == 0; VAR_16++)
  VAR_17 = FUNC_4(VAR_14, VAR_16);
 if (VAR_17)
  goto err;


 FUNC_6(VAR_14);


 FUNC_7(VAR_14);

 FUNC_11(&VAR_12->dev, "Initialized virtual hub in USB%d mode\n",
   VAR_14->force_usb1 ? 1 : 2);

 return 0;
 err:
 FUNC_8(VAR_12);
 return VAR_17;
}
