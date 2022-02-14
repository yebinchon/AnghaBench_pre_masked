
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int dma; } ;
struct iwl_txq {TYPE_1__ bc_tbl; int dma_addr; } ;
struct iwl_tx_queue_cfg_cmd {int cb_size; void* byte_cnt_addr; void* tfdq_addr; int tid; int sta_id; int flags; } ;
struct iwl_trans {int dummy; } ;
struct iwl_host_cmd {int id; int flags; int data; int len; } ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct iwl_trans*,struct iwl_txq*) ;
 int FUNC_4 (struct iwl_trans*,struct iwl_txq**,int,unsigned int) ;
 int FUNC_5 (struct iwl_trans*,struct iwl_txq*,struct iwl_host_cmd*) ;
 int FUNC_6 (struct iwl_trans*,struct iwl_host_cmd*) ;

int FUNC_7(struct iwl_trans *VAR_1,
     __le16 VAR_2, u8 VAR_3, u8 VAR_4,
     int VAR_5, int VAR_6,
     unsigned int VAR_7)
{
 struct iwl_txq *VAR_8 = ((void*)0);
 struct iwl_tx_queue_cfg_cmd VAR_9 = {
  .flags = VAR_2,
  .sta_id = VAR_3,
  .tid = VAR_4,
 };
 struct iwl_host_cmd VAR_10 = {
  .id = VAR_5,
  .len = sizeof(VAR_9) ,
  .data = &VAR_9, 
  .flags = VAR_0,
 };
 int VAR_11;

 VAR_11 = FUNC_4(VAR_1, &VAR_8, VAR_6, VAR_7);
 if (VAR_11)
  return VAR_11;

 VAR_9.tfdq_addr = FUNC_2(VAR_8->dma_addr);
 VAR_9.byte_cnt_addr = FUNC_2(VAR_8->bc_tbl.dma);
 VAR_9.cb_size = FUNC_1(FUNC_0(VAR_6));

 VAR_11 = FUNC_6(VAR_1, &VAR_10);
 if (VAR_11)
  goto error;

 return FUNC_5(VAR_1, VAR_8, &VAR_10);

error:
 FUNC_3(VAR_1, VAR_8);
 return VAR_11;
}
