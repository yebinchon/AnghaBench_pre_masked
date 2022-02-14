
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct lancer_cmd_resp_read_object {int additional_status; int eof; int actual_read_len; } ;
struct lancer_cmd_req_read_object {void* addr_high; void* addr_low; void* buf_len; void* descriptor_count; int object_name; void* read_offset; void* desired_read_len; int hdr; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_dma_mem {int dma; } ;
struct be_adapter {int mcc_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (int *,int ,int ,int,struct be_mcc_wrb*,int *) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (struct be_mcc_wrb*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char const*) ;
 int FUNC_8 (int) ;
 struct be_mcc_wrb* FUNC_9 (struct be_adapter*) ;

int FUNC_10(struct be_adapter *VAR_3, struct be_dma_mem *VAR_4,
      u32 VAR_5, u32 VAR_6, const char *VAR_7,
      u32 *VAR_8, u32 *VAR_9, u8 *VAR_10)
{
 struct be_mcc_wrb *VAR_11;
 struct lancer_cmd_req_read_object *VAR_12;
 struct lancer_cmd_resp_read_object *VAR_13;
 int VAR_14;

 FUNC_5(&VAR_3->mcc_lock);

 VAR_11 = FUNC_9(VAR_3);
 if (!VAR_11) {
  VAR_14 = -VAR_1;
  goto err_unlock;
 }

 VAR_12 = FUNC_3(VAR_11);

 FUNC_1(&VAR_12->hdr, VAR_0,
          VAR_2,
          sizeof(struct lancer_cmd_req_read_object), VAR_11,
          ((void*)0));

 VAR_12->desired_read_len = FUNC_2(VAR_5);
 VAR_12->read_offset = FUNC_2(VAR_6);
 FUNC_7(VAR_12->object_name, VAR_7);
 VAR_12->descriptor_count = FUNC_2(1);
 VAR_12->buf_len = FUNC_2(VAR_5);
 VAR_12->addr_low = FUNC_2((VAR_4->dma & 0xFFFFFFFF));
 VAR_12->addr_high = FUNC_2(FUNC_8(VAR_4->dma));

 VAR_14 = FUNC_0(VAR_3);

 VAR_13 = FUNC_3(VAR_11);
 if (!VAR_14) {
  *VAR_8 = FUNC_4(VAR_13->actual_read_len);
  *VAR_9 = FUNC_4(VAR_13->eof);
 } else {
  *VAR_10 = VAR_13->additional_status;
 }

err_unlock:
 FUNC_6(&VAR_3->mcc_lock);
 return VAR_14;
}
