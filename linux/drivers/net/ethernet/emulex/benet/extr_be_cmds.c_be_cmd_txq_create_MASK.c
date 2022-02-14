
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct be_dma_mem {int size; int va; } ;
struct be_queue_info {int created; int id; int len; struct be_dma_mem dma_mem; } ;
struct be_tx_obj {int db_offset; struct be_queue_info cq; struct be_queue_info q; } ;
struct be_mcc_wrb {int member_0; } ;
struct be_cmd_resp_eth_tx_create {int db_offset; int cid; } ;
struct TYPE_2__ {int version; } ;
struct be_cmd_req_eth_tx_create {TYPE_1__ hdr; int pages; int queue_size; void* cq_id; int type; int ulp_num; int num_pages; void* if_id; } ;
struct be_adapter {int function_caps; int if_handle; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct be_adapter*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct be_adapter*,struct be_mcc_wrb*) ;
 int FUNC_4 (int ,int ,struct be_dma_mem*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int,struct be_mcc_wrb*,int *) ;
 void* FUNC_7 (int ) ;
 void* FUNC_8 (struct be_mcc_wrb*) ;
 scalar_t__ FUNC_9 (struct be_adapter*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

int FUNC_12(struct be_adapter *VAR_6, struct be_tx_obj *VAR_7)
{
 struct be_mcc_wrb VAR_8 = {0};
 struct be_cmd_req_eth_tx_create *VAR_9;
 struct be_queue_info *VAR_10 = &VAR_7->q;
 struct be_queue_info *VAR_11 = &VAR_7->cq;
 struct be_dma_mem *VAR_12 = &VAR_10->dma_mem;
 int VAR_13, VAR_14 = 0;

 VAR_9 = FUNC_8(&VAR_8);
 FUNC_6(&VAR_9->hdr, VAR_3,
          VAR_5, sizeof(*VAR_9), &VAR_8, ((void*)0));

 if (FUNC_9(VAR_6)) {
  VAR_9->hdr.version = 1;
 } else if (FUNC_1(VAR_6)) {
  if (VAR_6->function_caps & VAR_1)
   VAR_9->hdr.version = 2;
 } else {
  VAR_9->hdr.version = 2;
 }

 if (VAR_9->hdr.version > 0)
  VAR_9->if_id = FUNC_7(VAR_6->if_handle);
 VAR_9->num_pages = FUNC_2(VAR_12->va, VAR_12->size);
 VAR_9->ulp_num = VAR_2;
 VAR_9->type = VAR_0;
 VAR_9->cq_id = FUNC_7(VAR_11->id);
 VAR_9->queue_size = FUNC_5(VAR_10->len);
 FUNC_4(VAR_9->pages, FUNC_0(VAR_9->pages), VAR_12);
 VAR_14 = VAR_9->hdr.version;

 VAR_13 = FUNC_3(VAR_6, &VAR_8);
 if (!VAR_13) {
  struct be_cmd_resp_eth_tx_create *VAR_15 = FUNC_8(&VAR_8);

  VAR_10->id = FUNC_10(VAR_15->cid);
  if (VAR_14 == 2)
   VAR_7->db_offset = FUNC_11(VAR_15->db_offset);
  else
   VAR_7->db_offset = VAR_4;
  VAR_10->created = 1;
 }

 return VAR_13;
}
