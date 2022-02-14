
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_7__ {int next; } ;
struct megasas_instance {size_t max_scsi_cmds; int mfi_pool_lock; TYPE_3__ cmd_pool; int mfi_frame_size; struct fusion_context* ctrl_context; } ;
struct megasas_cmd_fusion {int dummy; } ;
struct megasas_cmd {int flags; size_t index; int list; TYPE_4__* frame; scalar_t__ frame_count; int * scmd; } ;
struct fusion_context {struct megasas_cmd_fusion** cmd_list; } ;
struct TYPE_6__ {int cmd; } ;
struct TYPE_5__ {int context; } ;
struct TYPE_8__ {TYPE_2__ hdr; TYPE_1__ io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct megasas_instance*,struct megasas_cmd_fusion*) ;
 int FUNC_3 (TYPE_4__*,int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void
FUNC_6(struct megasas_instance *VAR_3, struct megasas_cmd *VAR_4)
{
 unsigned long VAR_5;
 u32 VAR_6;
 struct megasas_cmd_fusion *VAR_7;
 struct fusion_context *VAR_8 = VAR_3->ctrl_context;




 if (VAR_4->flags & VAR_0)
  return;

 FUNC_4(&VAR_3->mfi_pool_lock, VAR_5);

 if (VAR_8) {
  VAR_6 = VAR_3->max_scsi_cmds + VAR_4->index;
  VAR_7 = VAR_8->cmd_list[VAR_6];
  FUNC_2(VAR_3, VAR_7);
 }
 VAR_4->scmd = ((void*)0);
 VAR_4->frame_count = 0;
 VAR_4->flags = 0;
 FUNC_3(VAR_4->frame, 0, VAR_3->mfi_frame_size);
 VAR_4->frame->io.context = FUNC_0(VAR_4->index);
 if (!VAR_8 && VAR_2)
  VAR_4->frame->hdr.cmd = VAR_1;
 FUNC_1(&VAR_4->list, (&VAR_3->cmd_pool)->next);

 FUNC_5(&VAR_3->mfi_pool_lock, VAR_5);

}
