
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union MPI2_REPLY_DESCRIPTORS_UNION {int dummy; } MPI2_REPLY_DESCRIPTORS_UNION ;
typedef union MEGASAS_REQUEST_DESCRIPTOR_UNION {int dummy; } MEGASAS_REQUEST_DESCRIPTOR_UNION ;
typedef int u16 ;
struct megasas_instance {int max_fw_cmds; scalar_t__ adapter_type; int max_mpt_cmds; scalar_t__ cur_can_queue; TYPE_1__* host; scalar_t__ max_scsi_cmds; scalar_t__ max_mfi_cmds; struct fusion_context* ctrl_context; } ;
struct fusion_context {int reply_q_depth; int request_alloc_sz; int reply_alloc_sz; int io_frames_alloc_sz; } ;
struct TYPE_2__ {scalar_t__ can_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline
void FUNC_0(struct megasas_instance *VAR_3)
{
 struct fusion_context *VAR_4;
 u16 VAR_5;

 VAR_4 = VAR_3->ctrl_context;
 VAR_5 = VAR_3->max_fw_cmds;

 if (VAR_3->adapter_type >= VAR_2)
  VAR_3->max_mpt_cmds = VAR_3->max_fw_cmds * VAR_1;
 else
  VAR_3->max_mpt_cmds = VAR_3->max_fw_cmds;

 VAR_3->max_scsi_cmds = VAR_3->max_fw_cmds - VAR_3->max_mfi_cmds;
 VAR_3->cur_can_queue = VAR_3->max_scsi_cmds;
 VAR_3->host->can_queue = VAR_3->cur_can_queue;

 VAR_4->reply_q_depth = 2 * ((VAR_5 + 1 + 15) / 16) * 16;

 VAR_4->request_alloc_sz = sizeof(union MEGASAS_REQUEST_DESCRIPTOR_UNION) *
       VAR_3->max_mpt_cmds;
 VAR_4->reply_alloc_sz = sizeof(union MPI2_REPLY_DESCRIPTORS_UNION) *
     (VAR_4->reply_q_depth);
 VAR_4->io_frames_alloc_sz = VAR_0 +
  (VAR_0
   * (VAR_3->max_mpt_cmds + 1));
}
