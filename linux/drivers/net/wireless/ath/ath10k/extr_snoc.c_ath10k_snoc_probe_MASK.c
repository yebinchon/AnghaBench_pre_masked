
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {struct ath10k_snoc_drv_priv* data; } ;
struct ath10k_snoc_drv_priv {size_t msa_size; int hw_rev; int dma_mask; } ;
struct TYPE_2__ {int * bus_ops; } ;
struct ath10k_snoc {int * clk; int * vreg; TYPE_1__ ce; struct ath10k* ar; struct platform_device* dev; } ;
struct ath10k {TYPE_1__* ce_priv; } ;


 size_t FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ath10k* FUNC_1 (int,struct device*,int ,int ,int *) ;
 int FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct ath10k*,int ,char*) ;
 int FUNC_4 (struct ath10k*,char*,int) ;
 int FUNC_5 (struct ath10k*,struct device*,int *) ;
 int FUNC_6 (struct ath10k*,struct device*,int *) ;
 int FUNC_7 (struct ath10k*) ;
 int FUNC_8 (struct ath10k*,size_t) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (struct ath10k*) ;
 int VAR_6 ;
 struct ath10k_snoc* FUNC_10 (struct ath10k*) ;
 int FUNC_11 (struct ath10k*) ;
 int FUNC_12 (struct ath10k*) ;
 int FUNC_13 (struct ath10k*) ;
 int FUNC_14 (struct ath10k*) ;
 int FUNC_15 (struct ath10k*,char*,int) ;
 void* VAR_7 ;
 int FUNC_16 (struct device*,char*,...) ;
 int FUNC_17 (struct device*,int ) ;
 struct of_device_id* FUNC_18 (int ,struct device*) ;
 int FUNC_19 (struct platform_device*,struct ath10k*) ;
 void* VAR_8 ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_9)
{
 const struct ath10k_snoc_drv_priv *VAR_10;
 const struct of_device_id *VAR_11;
 struct ath10k_snoc *VAR_12;
 struct device *VAR_13;
 struct ath10k *VAR_14;
 u32 VAR_15;
 int VAR_16;
 u32 VAR_17;

 VAR_11 = FUNC_18(VAR_5, &VAR_9->dev);
 if (!VAR_11) {
  FUNC_16(&VAR_9->dev, "failed to find matching device tree id\n");
  return -VAR_2;
 }

 VAR_10 = VAR_11->data;
 VAR_13 = &VAR_9->dev;

 VAR_16 = FUNC_17(VAR_13, VAR_10->dma_mask);
 if (VAR_16) {
  FUNC_16(VAR_13, "failed to set dma mask: %d", VAR_16);
  return VAR_16;
 }

 VAR_14 = FUNC_1(sizeof(*VAR_12), VAR_13, VAR_0,
    VAR_10->hw_rev, &VAR_6);
 if (!VAR_14) {
  FUNC_16(VAR_13, "failed to allocate core\n");
  return -VAR_3;
 }

 VAR_12 = FUNC_10(VAR_14);
 VAR_12->dev = VAR_9;
 FUNC_19(VAR_9, VAR_14);
 VAR_12->ar = VAR_14;
 VAR_12->ce.bus_ops = &VAR_4;
 VAR_14->ce_priv = &VAR_12->ce;
 VAR_15 = VAR_10->msa_size;

 VAR_16 = FUNC_13(VAR_14);
 if (VAR_16) {
  FUNC_15(VAR_14, "failed to initialize resource: %d\n", VAR_16);
  goto err_core_destroy;
 }

 VAR_16 = FUNC_14(VAR_14);
 if (VAR_16) {
  FUNC_15(VAR_14, "failed to setup resource: %d\n", VAR_16);
  goto err_core_destroy;
 }
 VAR_16 = FUNC_12(VAR_14);
 if (VAR_16) {
  FUNC_15(VAR_14, "failed to request irqs: %d\n", VAR_16);
  goto err_release_resource;
 }

 VAR_12->vreg = VAR_8;
 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_8); VAR_17++) {
  VAR_16 = FUNC_6(VAR_14, VAR_13, &VAR_12->vreg[VAR_17]);
  if (VAR_16)
   goto err_free_irq;
 }

 VAR_12->clk = VAR_7;
 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_7); VAR_17++) {
  VAR_16 = FUNC_5(VAR_14, VAR_13, &VAR_12->clk[VAR_17]);
  if (VAR_16)
   goto err_free_irq;
 }

 VAR_16 = FUNC_7(VAR_14);
 if (VAR_16) {
  FUNC_4(VAR_14, "failed to power on device: %d\n", VAR_16);
  goto err_free_irq;
 }

 VAR_16 = FUNC_8(VAR_14, VAR_15);
 if (VAR_16) {
  FUNC_15(VAR_14, "failed to register wlfw qmi client: %d\n", VAR_16);
  goto err_core_destroy;
 }

 FUNC_3(VAR_14, VAR_1, "snoc probe\n");

 return 0;

err_free_irq:
 FUNC_9(VAR_14);

err_release_resource:
 FUNC_11(VAR_14);

err_core_destroy:
 FUNC_2(VAR_14);

 return VAR_16;
}
