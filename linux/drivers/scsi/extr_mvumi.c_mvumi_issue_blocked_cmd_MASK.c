
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mvumi_hba {TYPE_4__* shost; int fw_outstanding; TYPE_3__* pdev; int tag_pool; int ** tag_cmd; int int_cmd_wait_q; TYPE_1__* instancet; } ;
struct mvumi_cmd {scalar_t__ cmd_status; int queue_pointer; TYPE_2__* frame; int sync_cmd; } ;
struct TYPE_8__ {int host_lock; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {size_t tag; } ;
struct TYPE_5__ {int (* fire_cmd ) (struct mvumi_hba*,struct mvumi_cmd*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,scalar_t__) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,unsigned long) ;
 int FUNC_9 (int ,unsigned long) ;
 int FUNC_10 (struct mvumi_hba*,struct mvumi_cmd*) ;
 int FUNC_11 (struct mvumi_hba*,int *,size_t) ;
 int FUNC_12 (int ,int,int) ;

__attribute__((used)) static int FUNC_13(struct mvumi_hba *VAR_3,
      struct mvumi_cmd *VAR_4)
{
 unsigned long VAR_5;

 VAR_4->cmd_status = VAR_2;

 if (FUNC_3(&VAR_4->sync_cmd)) {
  FUNC_4(&VAR_3->pdev->dev,
   "last blocked cmd not finished, sync_cmd = %d\n",
      FUNC_3(&VAR_4->sync_cmd));
  FUNC_0(1);
  return -1;
 }
 FUNC_2(&VAR_4->sync_cmd);
 FUNC_8(VAR_3->shost->host_lock, VAR_5);
 VAR_3->instancet->fire_cmd(VAR_3, VAR_4);
 FUNC_9(VAR_3->shost->host_lock, VAR_5);

 FUNC_12(VAR_3->int_cmd_wait_q,
  (VAR_4->cmd_status != VAR_2),
  VAR_1 * VAR_0);


 if (FUNC_3(&VAR_4->sync_cmd)) {
  FUNC_8(VAR_3->shost->host_lock, VAR_5);
  FUNC_1(&VAR_4->sync_cmd);
  if (VAR_3->tag_cmd[VAR_4->frame->tag]) {
   VAR_3->tag_cmd[VAR_4->frame->tag] = ((void*)0);
   FUNC_5(&VAR_3->pdev->dev, "TIMEOUT:release tag [%d]\n",
       VAR_4->frame->tag);
   FUNC_11(VAR_3, &VAR_3->tag_pool, VAR_4->frame->tag);
  }
  if (!FUNC_7(&VAR_4->queue_pointer)) {
   FUNC_5(&VAR_3->pdev->dev,
    "TIMEOUT:A internal command doesn't send!\n");
   FUNC_6(&VAR_4->queue_pointer);
  } else
   FUNC_1(&VAR_3->fw_outstanding);

  FUNC_9(VAR_3->shost->host_lock, VAR_5);
 }
 return 0;
}
