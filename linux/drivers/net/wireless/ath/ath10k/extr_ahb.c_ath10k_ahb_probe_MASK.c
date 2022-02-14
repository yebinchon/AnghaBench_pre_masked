
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct TYPE_2__ {int * bus_ops; } ;
struct ath10k_pci {TYPE_1__ ce; int targ_cpu_to_ce_addr; struct ath10k* ar; int mem_len; int mem; } ;
struct ath10k_bus_params {int chip_id; int dev_type; } ;
struct ath10k_ahb {int mem_len; int mem; struct platform_device* pdev; } ;
struct ath10k {TYPE_1__* ce_priv; scalar_t__ dev_id; } ;
typedef enum ath10k_hw_rev { ____Placeholder_ath10k_hw_rev } ath10k_hw_rev ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct ath10k*) ;
 struct ath10k_ahb* FUNC_3 (struct ath10k*) ;
 int VAR_10 ;
 int FUNC_4 (struct ath10k*) ;
 int FUNC_5 (struct ath10k*) ;
 int FUNC_6 (struct ath10k*) ;
 int FUNC_7 (struct ath10k*) ;
 int FUNC_8 (struct ath10k*,int ) ;
 struct ath10k* FUNC_9 (size_t,int *,int ,int,int *) ;
 int FUNC_10 (struct ath10k*) ;
 int FUNC_11 (struct ath10k*,struct ath10k_bus_params*) ;
 int FUNC_12 (struct ath10k*,int ,char*) ;
 int FUNC_13 (struct ath10k*,char*,...) ;
 int FUNC_14 (struct ath10k*) ;
 int FUNC_15 (struct ath10k*) ;
 int FUNC_16 (struct ath10k*) ;
 struct ath10k_pci* FUNC_17 (struct ath10k*) ;
 int FUNC_18 (struct ath10k*) ;
 int FUNC_19 (int *,char*) ;
 struct of_device_id* FUNC_20 (int ,int *) ;
 int FUNC_21 (struct platform_device*,struct ath10k*) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_11)
{
 struct ath10k *VAR_12;
 struct ath10k_ahb *VAR_13;
 struct ath10k_pci *VAR_14;
 const struct of_device_id *VAR_15;
 enum ath10k_hw_rev VAR_16;
 size_t VAR_17;
 int VAR_18;
 struct ath10k_bus_params VAR_19 = {};

 VAR_15 = FUNC_20(VAR_9, &VAR_11->dev);
 if (!VAR_15) {
  FUNC_19(&VAR_11->dev, "failed to find matching device tree id\n");
  return -VAR_3;
 }

 VAR_16 = (enum ath10k_hw_rev)VAR_15->data;

 VAR_17 = sizeof(*VAR_14) + sizeof(*VAR_13);
 VAR_12 = FUNC_9(VAR_17, &VAR_11->dev, VAR_0,
    VAR_16, &VAR_8);
 if (!VAR_12) {
  FUNC_19(&VAR_11->dev, "failed to allocate core\n");
  return -VAR_5;
 }

 FUNC_12(VAR_12, VAR_1, "ahb probe\n");

 VAR_14 = FUNC_17(VAR_12);
 VAR_13 = FUNC_3(VAR_12);

 VAR_13->pdev = VAR_11;
 FUNC_21(VAR_11, VAR_12);

 VAR_18 = FUNC_7(VAR_12);
 if (VAR_18)
  goto err_core_destroy;

 VAR_12->dev_id = 0;
 VAR_14->mem = VAR_13->mem;
 VAR_14->mem_len = VAR_13->mem_len;
 VAR_14->ar = VAR_12;
 VAR_14->ce.bus_ops = &VAR_7;
 VAR_14->targ_cpu_to_ce_addr = VAR_10;
 VAR_12->ce_priv = &VAR_14->ce;

 VAR_18 = FUNC_18(VAR_12);
 if (VAR_18) {
  FUNC_13(VAR_12, "failed to setup resource: %d\n", VAR_18);
  goto err_resource_deinit;
 }

 FUNC_16(VAR_12);

 VAR_18 = FUNC_5(VAR_12);
 if (VAR_18)
  goto err_free_pipes;

 VAR_18 = FUNC_2(VAR_12);
 if (VAR_18)
  goto err_free_irq;

 FUNC_14(VAR_12);

 VAR_19.dev_type = VAR_2;
 VAR_19.chip_id = FUNC_8(VAR_12, VAR_6);
 if (VAR_19.chip_id == 0xffffffff) {
  FUNC_13(VAR_12, "failed to get chip id\n");
  VAR_18 = -VAR_4;
  goto err_halt_device;
 }

 VAR_18 = FUNC_11(VAR_12, &VAR_19);
 if (VAR_18) {
  FUNC_13(VAR_12, "failed to register driver core: %d\n", VAR_18);
  goto err_halt_device;
 }

 return 0;

err_halt_device:
 FUNC_1(VAR_12);
 FUNC_0(VAR_12);

err_free_irq:
 FUNC_4(VAR_12);

err_free_pipes:
 FUNC_15(VAR_12);

err_resource_deinit:
 FUNC_6(VAR_12);

err_core_destroy:
 FUNC_10(VAR_12);
 FUNC_21(VAR_11, ((void*)0));

 return VAR_18;
}
