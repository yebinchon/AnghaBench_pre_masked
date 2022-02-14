
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsmc_nand_data {int dev; int dma_access_complete; int data_pa; struct dma_chan* read_dma_chan; struct dma_chan* write_dma_chan; } ;
struct dma_device {int dev; struct dma_async_tx_descriptor* (* device_prep_dma_memcpy ) (struct dma_chan*,int ,int ,int,unsigned long) ;} ;
struct dma_chan {struct dma_device* device; } ;
struct dma_async_tx_descriptor {int (* tx_submit ) (struct dma_async_tx_descriptor*) ;struct fsmc_nand_data* callback_param; int callback; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_cookie_t ;
typedef int dma_addr_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct dma_chan*) ;
 int VAR_7 ;
 int FUNC_2 (int ,void*,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 (struct dma_chan*) ;
 int FUNC_6 (int) ;
 struct dma_async_tx_descriptor* FUNC_7 (struct dma_chan*,int ,int ,int,unsigned long) ;
 int FUNC_8 (struct dma_async_tx_descriptor*) ;
 unsigned long FUNC_9 (int *,int ) ;

__attribute__((used)) static int FUNC_10(struct fsmc_nand_data *VAR_8, void *VAR_9, int VAR_10,
      enum dma_data_direction VAR_11)
{
 struct dma_chan *VAR_12;
 struct dma_device *VAR_13;
 struct dma_async_tx_descriptor *VAR_14;
 dma_addr_t VAR_15, VAR_16, VAR_17;
 dma_cookie_t VAR_18;
 unsigned long VAR_19 = VAR_0 | VAR_2;
 int VAR_20;
 unsigned long VAR_21;

 if (VAR_11 == VAR_3)
  VAR_12 = VAR_8->write_dma_chan;
 else if (VAR_11 == VAR_1)
  VAR_12 = VAR_8->read_dma_chan;
 else
  return -VAR_4;

 VAR_13 = VAR_12->device;
 VAR_17 = FUNC_2(VAR_13->dev, VAR_9, VAR_10, VAR_11);

 if (VAR_11 == VAR_3) {
  VAR_16 = VAR_17;
  VAR_15 = VAR_8->data_pa;
 } else {
  VAR_16 = VAR_8->data_pa;
  VAR_15 = VAR_17;
 }

 VAR_14 = VAR_13->device_prep_dma_memcpy(VAR_12, VAR_15, VAR_16,
   VAR_10, VAR_19);
 if (!VAR_14) {
  FUNC_0(VAR_8->dev, "device_prep_dma_memcpy error\n");
  VAR_20 = -VAR_5;
  goto unmap_dma;
 }

 VAR_14->callback = VAR_7;
 VAR_14->callback_param = VAR_8;
 VAR_18 = VAR_14->tx_submit(VAR_14);

 VAR_20 = FUNC_3(VAR_18);
 if (VAR_20) {
  FUNC_0(VAR_8->dev, "dma_submit_error %d\n", VAR_18);
  goto unmap_dma;
 }

 FUNC_1(VAR_12);

 VAR_21 =
 FUNC_9(&VAR_8->dma_access_complete,
        FUNC_6(3000));
 if (VAR_21 == 0) {
  FUNC_5(VAR_12);
  FUNC_0(VAR_8->dev, "wait_for_completion_timeout\n");
  VAR_20 = -VAR_6;
  goto unmap_dma;
 }

 VAR_20 = 0;

unmap_dma:
 FUNC_4(VAR_13->dev, VAR_17, VAR_10, VAR_11);

 return VAR_20;
}
