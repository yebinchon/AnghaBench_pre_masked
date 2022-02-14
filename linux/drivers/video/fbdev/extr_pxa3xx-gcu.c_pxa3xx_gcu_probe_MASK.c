
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {scalar_t__ start; } ;
struct TYPE_3__ {int * fops; int name; int minor; } ;
struct pxa3xx_gcu_priv {int clk; TYPE_1__ misc_dev; scalar_t__ shared_phys; int shared; struct device* dev; struct resource* resource_mem; int mmio_base; int spinlock; int wait_free; int wait_idle; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct device*,char*,void*,void*,int ,int) ;
 int FUNC_6 (struct device*,int *) ;
 int FUNC_7 (struct device*,struct resource*) ;
 struct pxa3xx_gcu_priv* FUNC_8 (struct device*,int,int ) ;
 int FUNC_9 (struct device*,int,int ,int ,int ,struct pxa3xx_gcu_priv*) ;
 int FUNC_10 (struct device*,int ,scalar_t__*,int ) ;
 int FUNC_11 (struct device*,int ,int ,scalar_t__) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (struct platform_device*,int ) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int ) ;
 int FUNC_17 (struct platform_device*,struct pxa3xx_gcu_priv*) ;
 int FUNC_18 (struct device*,struct pxa3xx_gcu_priv*) ;
 int VAR_6 ;
 int FUNC_19 (struct pxa3xx_gcu_priv*) ;
 int VAR_7 ;
 int FUNC_20 (struct pxa3xx_gcu_priv*) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 struct resource *VAR_12;
 struct pxa3xx_gcu_priv *VAR_13;
 struct device *VAR_14 = &VAR_8->dev;

 VAR_13 = FUNC_8(VAR_14, sizeof(struct pxa3xx_gcu_priv), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 FUNC_12(&VAR_13->wait_idle);
 FUNC_12(&VAR_13->wait_free);
 FUNC_21(&VAR_13->spinlock);






 VAR_13->misc_dev.minor = VAR_4,
 VAR_13->misc_dev.name = VAR_0,
 VAR_13->misc_dev.fops = &VAR_7;


 VAR_12 = FUNC_16(VAR_8, VAR_3, 0);
 VAR_13->mmio_base = FUNC_7(VAR_14, VAR_12);
 if (FUNC_0(VAR_13->mmio_base))
  return FUNC_1(VAR_13->mmio_base);


 VAR_13->clk = FUNC_6(VAR_14, ((void*)0));
 if (FUNC_0(VAR_13->clk)) {
  FUNC_4(VAR_14, "failed to get clock\n");
  return FUNC_1(VAR_13->clk);
 }


 VAR_11 = FUNC_15(VAR_8, 0);
 if (VAR_11 < 0) {
  FUNC_4(VAR_14, "no IRQ defined: %d\n", VAR_11);
  return VAR_11;
 }

 VAR_10 = FUNC_9(VAR_14, VAR_11, VAR_6,
          0, VAR_0, VAR_13);
 if (VAR_10 < 0) {
  FUNC_4(VAR_14, "request_irq failed\n");
  return VAR_10;
 }


 VAR_13->shared = FUNC_10(VAR_14, VAR_5,
       &VAR_13->shared_phys, VAR_2);
 if (!VAR_13->shared) {
  FUNC_4(VAR_14, "failed to allocate DMA memory\n");
  return -VAR_1;
 }


 VAR_10 = FUNC_14(&VAR_13->misc_dev);
 if (VAR_10 < 0) {
  FUNC_4(VAR_14, "misc_register() for minor %d failed\n",
   VAR_4);
  goto err_free_dma;
 }

 VAR_10 = FUNC_3(VAR_13->clk);
 if (VAR_10 < 0) {
  FUNC_4(VAR_14, "failed to enable clock\n");
  goto err_misc_deregister;
 }

 for (VAR_9 = 0; VAR_9 < 8; VAR_9++) {
  VAR_10 = FUNC_18(VAR_14, VAR_13);
  if (VAR_10) {
   FUNC_4(VAR_14, "failed to allocate DMA memory\n");
   goto err_disable_clk;
  }
 }

 FUNC_17(VAR_8, VAR_13);
 VAR_13->resource_mem = VAR_12;
 VAR_13->dev = VAR_14;
 FUNC_20(VAR_13);
 FUNC_19(VAR_13);

 FUNC_5(VAR_14, "registered @0x%p, DMA 0x%p (%d bytes), IRQ %d\n",
   (void *) VAR_12->start, (void *) VAR_13->shared_phys,
   VAR_5, VAR_11);
 return 0;

err_free_dma:
 FUNC_11(VAR_14, VAR_5,
   VAR_13->shared, VAR_13->shared_phys);

err_misc_deregister:
 FUNC_13(&VAR_13->misc_dev);

err_disable_clk:
 FUNC_2(VAR_13->clk);

 return VAR_10;
}
