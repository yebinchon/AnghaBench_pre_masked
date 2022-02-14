
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sdio_func {int cur_blksize; int max_blksize; int device; int vendor; int num; int dev; } ;
struct sdio_device_id {int device; int vendor; } ;
struct ath10k_sdio_irq_proc_regs {int dummy; } ;
struct ath10k_sdio_irq_enable_regs {int dummy; } ;
struct TYPE_3__ {int mtx; void* irq_en_reg; void* irq_proc_reg; } ;
struct ath10k_sdio {int is_disabled; int workqueue; int * bus_req; int wr_async_work; int wr_asyncq; int bus_req_freeq; TYPE_1__ irq_data; int wr_async_lock; int lock; struct ath10k* ar; struct sdio_func* func; void* bmi_buf; } ;
struct ath10k_bus_params {int hl_msdu_ids; scalar_t__ chip_id; int dev_type; } ;
struct TYPE_4__ {int device; int vendor; } ;
struct ath10k {TYPE_2__ id; int dev_id; int dev; } ;
typedef enum ath10k_hw_rev { ____Placeholder_ath10k_hw_rev } ath10k_hw_rev ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_9 ;

 int VAR_10 ;

 struct ath10k* FUNC_3 (int,int *,int ,int,int *) ;
 int FUNC_4 (struct ath10k*) ;
 int FUNC_5 (struct ath10k*,struct ath10k_bus_params*) ;
 int FUNC_6 (struct ath10k*,int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_7 (struct ath10k*,char*,int,...) ;
 int FUNC_8 (struct ath10k*,int *) ;
 int VAR_11 ;
 struct ath10k_sdio* FUNC_9 (struct ath10k*) ;
 int FUNC_10 (struct ath10k*) ;
 int VAR_12 ;
 int FUNC_11 (struct ath10k*,char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *,char*) ;
 void* FUNC_15 (int ,int,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct sdio_func*,struct ath10k_sdio*) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(struct sdio_func *VAR_13,
        const struct sdio_device_id *VAR_14)
{
 struct ath10k_sdio *VAR_15;
 struct ath10k *VAR_16;
 enum ath10k_hw_rev VAR_17;
 u32 VAR_18;
 struct ath10k_bus_params VAR_19 = {};
 int VAR_20, VAR_21;







 VAR_17 = VAR_3;

 VAR_16 = FUNC_3(sizeof(*VAR_15), &VAR_13->dev, VAR_0,
    VAR_17, &VAR_11);
 if (!VAR_16) {
  FUNC_14(&VAR_13->dev, "failed to allocate core\n");
  return -VAR_7;
 }

 FUNC_6(VAR_16, VAR_1,
     "sdio new func %d vendor 0x%x device 0x%x block 0x%x/0x%x\n",
     VAR_13->num, VAR_13->vendor, VAR_13->device,
     VAR_13->max_blksize, VAR_13->cur_blksize);

 VAR_15 = FUNC_9(VAR_16);

 VAR_15->irq_data.irq_proc_reg =
  FUNC_15(VAR_16->dev, sizeof(struct ath10k_sdio_irq_proc_regs),
        VAR_8);
 if (!VAR_15->irq_data.irq_proc_reg) {
  VAR_20 = -VAR_7;
  goto err_core_destroy;
 }

 VAR_15->irq_data.irq_en_reg =
  FUNC_15(VAR_16->dev, sizeof(struct ath10k_sdio_irq_enable_regs),
        VAR_8);
 if (!VAR_15->irq_data.irq_en_reg) {
  VAR_20 = -VAR_7;
  goto err_core_destroy;
 }

 VAR_15->bmi_buf = FUNC_15(VAR_16->dev, VAR_5, VAR_8);
 if (!VAR_15->bmi_buf) {
  VAR_20 = -VAR_7;
  goto err_core_destroy;
 }

 VAR_15->func = VAR_13;
 FUNC_17(VAR_13, VAR_15);

 VAR_15->is_disabled = 1;
 VAR_15->ar = VAR_16;

 FUNC_18(&VAR_15->lock);
 FUNC_18(&VAR_15->wr_async_lock);
 FUNC_16(&VAR_15->irq_data.mtx);

 FUNC_1(&VAR_15->bus_req_freeq);
 FUNC_1(&VAR_15->wr_asyncq);

 FUNC_2(&VAR_15->wr_async_work, VAR_12);
 VAR_15->workqueue = FUNC_12("ath10k_sdio_wq");
 if (!VAR_15->workqueue) {
  VAR_20 = -VAR_7;
  goto err_core_destroy;
 }

 for (VAR_21 = 0; VAR_21 < VAR_4; VAR_21++)
  FUNC_8(VAR_16, &VAR_15->bus_req[VAR_21]);

 VAR_18 = FUNC_0(VAR_10, VAR_14->device);
 switch (VAR_18) {
 case 129:
 case 128:
  VAR_16->dev_id = VAR_9;
  break;
 default:
  VAR_20 = -VAR_6;
  FUNC_7(VAR_16, "unsupported device id %u (0x%x)\n",
      VAR_18, VAR_14->device);
  goto err_free_wq;
 }

 VAR_16->id.vendor = VAR_14->vendor;
 VAR_16->id.device = VAR_14->device;

 FUNC_10(VAR_16);

 VAR_19.dev_type = VAR_2;

 VAR_19.chip_id = 0;
 VAR_19.hl_msdu_ids = 1;

 VAR_20 = FUNC_5(VAR_16, &VAR_19);
 if (VAR_20) {
  FUNC_7(VAR_16, "failed to register driver core: %d\n", VAR_20);
  goto err_free_wq;
 }


 FUNC_11(VAR_16, "WARNING: ath10k SDIO support is work-in-progress, problems may arise!\n");

 return 0;

err_free_wq:
 FUNC_13(VAR_15->workqueue);
err_core_destroy:
 FUNC_4(VAR_16);

 return VAR_20;
}
