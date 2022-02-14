
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_trans_pcie {int rx_page_order; struct iwl_rxq* rxq; } ;
struct iwl_trans {int dev; } ;
struct iwl_rxq {int read; int lock; struct iwl_rx_mem_buffer** queue; } ;
struct iwl_rx_mem_buffer {int page; int page_dma; } ;
struct iwl_fw_error_dump_rb {int data; void* index; } ;
struct iwl_fw_error_dump_data {scalar_t__ data; void* len; void* type; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ,int,int ) ;
 int FUNC_3 (int ,int ,int,int ) ;
 struct iwl_fw_error_dump_data* FUNC_4 (struct iwl_fw_error_dump_data*) ;
 int FUNC_5 (struct iwl_trans*,struct iwl_rxq*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static u32 FUNC_11(struct iwl_trans *VAR_4,
       struct iwl_fw_error_dump_data **VAR_5,
       int VAR_6)
{
 struct iwl_trans_pcie *VAR_7 = FUNC_0(VAR_4);
 int VAR_8 = VAR_2 << VAR_7->rx_page_order;

 struct iwl_rxq *VAR_9 = &VAR_7->rxq[0];
 u32 VAR_10, VAR_11, VAR_12, VAR_13 = 0;

 FUNC_9(&VAR_9->lock);

 VAR_11 = FUNC_6(FUNC_5(VAR_4, VAR_9)) & 0x0FFF;

 for (VAR_10 = VAR_9->read, VAR_12 = 0;
      VAR_10 != VAR_11 && VAR_12 < VAR_6;
      VAR_10 = (VAR_10 + 1) & VAR_3, VAR_12++) {
  struct iwl_rx_mem_buffer *VAR_14 = VAR_9->queue[VAR_10];
  struct iwl_fw_error_dump_rb *VAR_15;

  FUNC_3(VAR_4->dev, VAR_14->page_dma, VAR_8,
          VAR_0);

  VAR_13 += sizeof(**VAR_5) + sizeof(*VAR_15) + VAR_8;

  (*VAR_5)->type = FUNC_1(VAR_1);
  (*VAR_5)->len = FUNC_1(sizeof(*VAR_15) + VAR_8);
  VAR_15 = (void *)(*VAR_5)->data;
  VAR_15->index = FUNC_1(VAR_10);
  FUNC_7(VAR_15->data, FUNC_8(VAR_14->page), VAR_8);

  VAR_14->page_dma = FUNC_2(VAR_4->dev, VAR_14->page, 0,
           VAR_8,
           VAR_0);

  *VAR_5 = FUNC_4(*VAR_5);
 }

 FUNC_10(&VAR_9->lock);

 return VAR_13;
}
