
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct megasas_instance {int map_id; int mask_interrupts; TYPE_2__* pdev; struct fusion_context* ctrl_context; } ;
struct TYPE_6__ {void* b; } ;
struct megasas_dcmd_frame {int cmd_status; int sge_count; void* opcode; void* data_xfer_len; scalar_t__ pad_0; scalar_t__ timeout; int flags; int cmd; TYPE_3__ mbox; } ;
struct megasas_cmd {TYPE_1__* frame; } ;
struct fusion_context {int max_map_sz; int * ld_map_phys; scalar_t__* ld_map; int current_map_sz; } ;
typedef int dma_addr_t ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {struct megasas_dcmd_frame dcmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,char*) ;
 int FUNC_2 (struct megasas_instance*) ;
 struct megasas_cmd* FUNC_3 (struct megasas_instance*) ;
 int FUNC_4 (struct megasas_instance*,struct megasas_cmd*,int ) ;
 int FUNC_5 (struct megasas_instance*,struct megasas_cmd*) ;
 int FUNC_6 (struct megasas_instance*,struct megasas_cmd*) ;
 int FUNC_7 (struct megasas_instance*,struct megasas_dcmd_frame*,int ,int ) ;
 int FUNC_8 (void*,int ,int ) ;

__attribute__((used)) static int
FUNC_9(struct megasas_instance *VAR_9)
{
 int VAR_10 = 0;
 struct megasas_cmd *VAR_11;
 struct megasas_dcmd_frame *VAR_12;
 void *VAR_13;
 dma_addr_t VAR_14 = 0;
 u32 VAR_15;
 struct fusion_context *VAR_16;

 VAR_11 = FUNC_3(VAR_9);

 if (!VAR_11) {
  FUNC_1(VAR_3, &VAR_9->pdev->dev, "Failed to get cmd for map info\n");
  return -VAR_1;
 }

 VAR_16 = VAR_9->ctrl_context;

 if (!VAR_16) {
  FUNC_6(VAR_9, VAR_11);
  return -VAR_2;
 }

 VAR_12 = &VAR_11->frame->dcmd;

 VAR_15 = VAR_16->current_map_sz;

 VAR_13 = (void *) VAR_16->ld_map[(VAR_9->map_id & 1)];
 VAR_14 = VAR_16->ld_map_phys[(VAR_9->map_id & 1)];

 if (!VAR_13) {
  FUNC_1(VAR_3, &VAR_9->pdev->dev, "Failed to alloc mem for ld_map_info\n");
  FUNC_6(VAR_9, VAR_11);
  return -VAR_1;
 }

 FUNC_8(VAR_13, 0, VAR_16->max_map_sz);
 FUNC_8(VAR_12->mbox.b, 0, VAR_7);
 VAR_12->cmd = VAR_4;
 VAR_12->cmd_status = 0xFF;
 VAR_12->sge_count = 1;
 VAR_12->flags = VAR_5;
 VAR_12->timeout = 0;
 VAR_12->pad_0 = 0;
 VAR_12->data_xfer_len = FUNC_0(VAR_15);
 VAR_12->opcode = FUNC_0(VAR_8);

 FUNC_7(VAR_9, VAR_12, VAR_14, VAR_15);

 if (!VAR_9->mask_interrupts)
  VAR_10 = FUNC_4(VAR_9, VAR_11,
   VAR_6);
 else
  VAR_10 = FUNC_5(VAR_9, VAR_11);

 if (VAR_10 == VAR_0)
  FUNC_2(VAR_9);

 FUNC_6(VAR_9, VAR_11);

 return VAR_10;
}
