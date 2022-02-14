
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct megasas_instance {int max_fw_cmds; int reply_queue_h; int producer_h; int consumer_h; TYPE_2__* pdev; TYPE_1__* instancet; } ;
struct megasas_init_queue_info {void* data_xfer_len; void* queue_info_new_phys_addr_hi; void* queue_info_new_phys_addr_lo; int cmd_status; int cmd; void* consumer_index_phys_addr_lo; void* producer_index_phys_addr_lo; void* reply_queue_start_phys_addr_lo; void* reply_queue_entries; int context; } ;
struct megasas_init_frame {void* data_xfer_len; void* queue_info_new_phys_addr_hi; void* queue_info_new_phys_addr_lo; int cmd_status; int cmd; void* consumer_index_phys_addr_lo; void* producer_index_phys_addr_lo; void* reply_queue_start_phys_addr_lo; void* reply_queue_entries; int context; } ;
struct megasas_cmd {scalar_t__ frame_phys_addr; scalar_t__ frame; } ;
typedef scalar_t__ dma_addr_t ;
typedef int __le32 ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int (* disable_intr ) (struct megasas_instance*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (scalar_t__) ;
 struct megasas_cmd* FUNC_3 (struct megasas_instance*) ;
 scalar_t__ FUNC_4 (struct megasas_instance*,struct megasas_cmd*) ;
 int FUNC_5 (struct megasas_instance*,struct megasas_cmd*) ;
 int FUNC_6 (struct megasas_init_queue_info*,int ,int) ;
 int FUNC_7 (struct megasas_instance*) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static int
FUNC_9(struct megasas_instance *VAR_4)
{
 __le32 VAR_5;
 struct megasas_cmd *VAR_6;
 struct megasas_init_frame *VAR_7;
 struct megasas_init_queue_info *VAR_8;
 dma_addr_t VAR_9;
 dma_addr_t VAR_10;
 VAR_6 = FUNC_3(VAR_4);

 VAR_7 = (struct megasas_init_frame *)VAR_6->frame;
 VAR_8 = (struct megasas_init_queue_info *)
  ((unsigned long)VAR_7 + 64);

 VAR_9 = VAR_6->frame_phys_addr;
 VAR_10 = VAR_9 + 64;

 VAR_5 = VAR_7->context;
 FUNC_6(VAR_7, 0, VAR_1);
 FUNC_6(VAR_8, 0, sizeof(struct megasas_init_queue_info));
 VAR_7->context = VAR_5;

 VAR_8->reply_queue_entries = FUNC_0(VAR_4->max_fw_cmds + 1);
 VAR_8->reply_queue_start_phys_addr_lo = FUNC_0(VAR_4->reply_queue_h);

 VAR_8->producer_index_phys_addr_lo = FUNC_0(VAR_4->producer_h);
 VAR_8->consumer_index_phys_addr_lo = FUNC_0(VAR_4->consumer_h);

 VAR_7->cmd = VAR_2;
 VAR_7->cmd_status = VAR_3;
 VAR_7->queue_info_new_phys_addr_lo =
  FUNC_0(FUNC_2(VAR_10));
 VAR_7->queue_info_new_phys_addr_hi =
  FUNC_0(FUNC_8(VAR_10));

 VAR_7->data_xfer_len = FUNC_0(sizeof(struct megasas_init_queue_info));




 VAR_4->instancet->disable_intr(VAR_4);





 if (FUNC_4(VAR_4, VAR_6)) {
  FUNC_1(&VAR_4->pdev->dev, "Failed to init firmware\n");
  FUNC_5(VAR_4, VAR_6);
  goto fail_fw_init;
 }

 FUNC_5(VAR_4, VAR_6);

 return 0;

fail_fw_init:
 return -VAR_0;
}
