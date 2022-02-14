
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct be_dma_mem {int dummy; } ;
struct be_queue_info {int created; int id; struct be_dma_mem dma_mem; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_cmd_resp_eth_rx_create {int rss_id; int id; } ;
struct be_cmd_req_eth_rx_create {int num_pages; void* rss_queue; void* max_frame_size; void* interface_id; int pages; scalar_t__ frag_size; void* cq_id; int hdr; } ;
struct be_adapter {int mcc_lock; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,struct be_dma_mem*) ;
 int FUNC_2 (struct be_adapter*) ;
 int FUNC_3 (int *,int ,int ,int,struct be_mcc_wrb*,int *) ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 void* FUNC_6 (struct be_mcc_wrb*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct be_mcc_wrb* FUNC_11 (struct be_adapter*) ;

int FUNC_12(struct be_adapter *VAR_4,
        struct be_queue_info *VAR_5, u16 VAR_6, u16 VAR_7,
        u32 VAR_8, u32 VAR_9, u8 *VAR_10)
{
 struct be_mcc_wrb *VAR_11;
 struct be_cmd_req_eth_rx_create *VAR_12;
 struct be_dma_mem *VAR_13 = &VAR_5->dma_mem;
 int VAR_14;

 FUNC_9(&VAR_4->mcc_lock);

 VAR_11 = FUNC_11(VAR_4);
 if (!VAR_11) {
  VAR_14 = -VAR_2;
  goto err;
 }
 VAR_12 = FUNC_6(VAR_11);

 FUNC_3(&VAR_12->hdr, VAR_1,
          VAR_3, sizeof(*VAR_12), VAR_11, ((void*)0));

 VAR_12->cq_id = FUNC_4(VAR_6);
 VAR_12->frag_size = FUNC_7(VAR_7) - 1;
 VAR_12->num_pages = 2;
 FUNC_1(VAR_12->pages, FUNC_0(VAR_12->pages), VAR_13);
 VAR_12->interface_id = FUNC_5(VAR_8);
 VAR_12->max_frame_size = FUNC_4(VAR_0);
 VAR_12->rss_queue = FUNC_5(VAR_9);

 VAR_14 = FUNC_2(VAR_4);
 if (!VAR_14) {
  struct be_cmd_resp_eth_rx_create *VAR_15 = FUNC_6(VAR_11);

  VAR_5->id = FUNC_8(VAR_15->id);
  VAR_5->created = 1;
  *VAR_10 = VAR_15->rss_id;
 }

err:
 FUNC_10(&VAR_4->mcc_lock);
 return VAR_14;
}
