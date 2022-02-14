
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdio_func {int dev; int cur_blksize; int max_blksize; int device; int vendor; int num; } ;
struct sdio_device_id {int dummy; } ;
struct ath6kl_sdio {int is_disabled; struct ath6kl_sdio* dma_buffer; struct ath6kl* ar; struct sdio_func* func; int * bus_req; int irq_wq; int wr_async_work; int wr_asyncq; int bus_req_freeq; int scat_req; int dma_buffer_mutex; int wr_async_lock; int scat_lock; int lock; struct sdio_device_id const* id; } ;
struct TYPE_2__ {int max_data_size; } ;
struct ath6kl {TYPE_1__ bmi; int * hif_ops; struct ath6kl_sdio* hif_priv; int hif_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 struct ath6kl* FUNC_2 (int *) ;
 int FUNC_3 (struct ath6kl*) ;
 int FUNC_4 (struct ath6kl*,int ) ;
 int FUNC_5 (int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct ath6kl*) ;
 int FUNC_8 (struct ath6kl_sdio*,int *) ;
 int VAR_7 ;
 int FUNC_9 (struct ath6kl*) ;
 int VAR_8 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct ath6kl_sdio*) ;
 void* FUNC_12 (int,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct sdio_func*,struct ath6kl_sdio*) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct sdio_func *VAR_9,
        const struct sdio_device_id *VAR_10)
{
 int VAR_11;
 struct ath6kl_sdio *VAR_12;
 struct ath6kl *VAR_13;
 int VAR_14;

 FUNC_5(VAR_0,
     "sdio new func %d vendor 0x%x device 0x%x block 0x%x/0x%x\n",
     VAR_9->num, VAR_9->vendor, VAR_9->device,
     VAR_9->max_blksize, VAR_9->cur_blksize);

 VAR_12 = FUNC_12(sizeof(struct ath6kl_sdio), VAR_5);
 if (!VAR_12)
  return -VAR_4;

 VAR_12->dma_buffer = FUNC_12(VAR_6, VAR_5);
 if (!VAR_12->dma_buffer) {
  VAR_11 = -VAR_4;
  goto err_hif;
 }

 VAR_12->func = VAR_9;
 FUNC_14(VAR_9, VAR_12);

 VAR_12->id = VAR_10;
 VAR_12->is_disabled = 1;

 FUNC_15(&VAR_12->lock);
 FUNC_15(&VAR_12->scat_lock);
 FUNC_15(&VAR_12->wr_async_lock);
 FUNC_13(&VAR_12->dma_buffer_mutex);

 FUNC_0(&VAR_12->scat_req);
 FUNC_0(&VAR_12->bus_req_freeq);
 FUNC_0(&VAR_12->wr_asyncq);

 FUNC_1(&VAR_12->wr_async_work, VAR_8);

 FUNC_10(&VAR_12->irq_wq);

 for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++)
  FUNC_8(VAR_12, &VAR_12->bus_req[VAR_14]);

 VAR_13 = FUNC_2(&VAR_12->func->dev);
 if (!VAR_13) {
  FUNC_6("Failed to alloc ath6kl core\n");
  VAR_11 = -VAR_4;
  goto err_dma;
 }

 VAR_12->ar = VAR_13;
 VAR_13->hif_type = VAR_1;
 VAR_13->hif_priv = VAR_12;
 VAR_13->hif_ops = &VAR_7;
 VAR_13->bmi.max_data_size = 256;

 FUNC_9(VAR_13);

 VAR_11 = FUNC_7(VAR_13);
 if (VAR_11) {
  FUNC_6("Failed to config sdio: %d\n", VAR_11);
  goto err_core_alloc;
 }

 VAR_11 = FUNC_4(VAR_13, VAR_2);
 if (VAR_11) {
  FUNC_6("Failed to init ath6kl core\n");
  goto err_core_alloc;
 }

 return VAR_11;

err_core_alloc:
 FUNC_3(VAR_12->ar);
err_dma:
 FUNC_11(VAR_12->dma_buffer);
err_hif:
 FUNC_11(VAR_12);

 return VAR_11;
}
