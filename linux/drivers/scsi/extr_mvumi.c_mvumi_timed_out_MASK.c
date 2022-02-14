
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * ptr; } ;
struct scsi_cmnd {int result; int sc_data_direction; TYPE_3__ SCp; TYPE_1__* device; } ;
struct mvumi_hba {TYPE_5__* shost; TYPE_4__* pdev; int fw_outstanding; int tag_pool; int ** tag_cmd; } ;
struct mvumi_cmd {int queue_pointer; TYPE_2__* frame; } ;
struct Scsi_Host {int dummy; } ;
typedef enum blk_eh_timer_return { ____Placeholder_blk_eh_timer_return } blk_eh_timer_return ;
struct TYPE_10__ {int host_lock; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_7__ {size_t tag; } ;
struct TYPE_6__ {struct Scsi_Host* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mvumi_hba*,struct mvumi_cmd*) ;
 scalar_t__ FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (struct scsi_cmnd*) ;
 int FUNC_7 (struct scsi_cmnd*) ;
 struct mvumi_hba* FUNC_8 (struct Scsi_Host*) ;
 int FUNC_9 (int ,unsigned long) ;
 int FUNC_10 (int ,unsigned long) ;
 int FUNC_11 (struct mvumi_hba*,int *,size_t) ;

__attribute__((used)) static enum blk_eh_timer_return FUNC_12(struct scsi_cmnd *VAR_3)
{
 struct mvumi_cmd *VAR_4 = (struct mvumi_cmd *) VAR_3->SCp.ptr;
 struct Scsi_Host *VAR_5 = VAR_3->device->host;
 struct mvumi_hba *VAR_6 = FUNC_8(VAR_5);
 unsigned long VAR_7;

 FUNC_9(VAR_6->shost->host_lock, VAR_7);

 if (VAR_6->tag_cmd[VAR_4->frame->tag]) {
  VAR_6->tag_cmd[VAR_4->frame->tag] = ((void*)0);
  FUNC_11(VAR_6, &VAR_6->tag_pool, VAR_4->frame->tag);
 }
 if (!FUNC_3(&VAR_4->queue_pointer))
  FUNC_2(&VAR_4->queue_pointer);
 else
  FUNC_0(&VAR_6->fw_outstanding);

 VAR_3->result = (VAR_2 << 24) | (VAR_1 << 16);
 VAR_3->SCp.ptr = ((void*)0);
 if (FUNC_5(VAR_3)) {
  FUNC_1(&VAR_6->pdev->dev, FUNC_7(VAR_3),
        FUNC_6(VAR_3),
        VAR_3->sc_data_direction);
 }
 FUNC_4(VAR_6, VAR_4);
 FUNC_10(VAR_6->shost->host_lock, VAR_7);

 return VAR_0;
}
