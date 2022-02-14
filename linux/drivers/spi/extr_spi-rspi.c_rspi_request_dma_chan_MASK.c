
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_slave_config {int direction; void* src_addr_width; void* src_addr; void* dst_addr_width; void* dst_addr; } ;
struct dma_chan {int dummy; } ;
struct device {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef int dma_cap_mask_t ;
typedef void* dma_addr_t ;
typedef int cfg ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct dma_chan*) ;
 struct dma_chan* FUNC_4 (int ,int ,void*,struct device*,char*) ;
 int FUNC_5 (struct dma_chan*,struct dma_slave_config*) ;
 int FUNC_6 (struct dma_slave_config*,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static struct dma_chan *FUNC_7(struct device *VAR_4,
           enum dma_transfer_direction VAR_5,
           unsigned int VAR_6,
           dma_addr_t VAR_7)
{
 dma_cap_mask_t VAR_8;
 struct dma_chan *VAR_9;
 struct dma_slave_config VAR_10;
 int VAR_11;

 FUNC_2(VAR_8);
 FUNC_1(VAR_1, VAR_8);

 VAR_9 = FUNC_4(VAR_8, VAR_3,
    (void *)(unsigned long)VAR_6, VAR_4,
    VAR_5 == VAR_0 ? "tx" : "rx");
 if (!VAR_9) {
  FUNC_0(VAR_4, "dma_request_slave_channel_compat failed\n");
  return ((void*)0);
 }

 FUNC_6(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.direction = VAR_5;
 if (VAR_5 == VAR_0) {
  VAR_10.dst_addr = VAR_7;
  VAR_10.dst_addr_width = VAR_2;
 } else {
  VAR_10.src_addr = VAR_7;
  VAR_10.src_addr_width = VAR_2;
 }

 VAR_11 = FUNC_5(VAR_9, &VAR_10);
 if (VAR_11) {
  FUNC_0(VAR_4, "dmaengine_slave_config failed %d\n", VAR_11);
  FUNC_3(VAR_9);
  return ((void*)0);
 }

 return VAR_9;
}
