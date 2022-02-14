
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvumi_msg_frame {unsigned char device_id; int * cdb; int cdb_length; scalar_t__ data_transfer_length; int cmd_flag; int req_function; } ;
struct mvumi_hba {unsigned char max_target_id; int* target_map; TYPE_1__* pdev; } ;
struct mvumi_cmd {scalar_t__ cmd_status; struct mvumi_msg_frame* frame; int sync_cmd; int * scmd; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,unsigned char,...) ;
 int FUNC_2 (int *,int ,int ) ;
 struct mvumi_cmd* FUNC_3 (struct mvumi_hba*,int ) ;
 int FUNC_4 (struct mvumi_hba*,struct mvumi_cmd*) ;
 int FUNC_5 (struct mvumi_hba*,struct mvumi_cmd*) ;

__attribute__((used)) static unsigned char FUNC_6(struct mvumi_hba *VAR_8)
{
 struct mvumi_cmd *VAR_9;
 struct mvumi_msg_frame *VAR_10;
 unsigned char VAR_11, VAR_12 = 0;
 unsigned char VAR_13 = sizeof(unsigned char) * 8;

 for (VAR_11 = 0; VAR_11 < VAR_8->max_target_id; VAR_11++) {
  if (!(VAR_8->target_map[VAR_11 / VAR_13] &
    (1 << (VAR_11 % VAR_13))))
   continue;
get_cmd: VAR_9 = FUNC_3(VAR_8, 0);
  if (!VAR_9) {
   if (VAR_12++ >= 5) {
    FUNC_1(&VAR_8->pdev->dev, "failed to get memory"
     " for internal flush cache cmd for "
     "device %d", VAR_11);
    VAR_12 = 0;
    continue;
   } else
    goto get_cmd;
  }
  VAR_9->scmd = ((void*)0);
  VAR_9->cmd_status = VAR_5;
  FUNC_0(&VAR_9->sync_cmd, 0);
  VAR_10 = VAR_9->frame;
  VAR_10->req_function = VAR_2;
  VAR_10->device_id = VAR_11;
  VAR_10->cmd_flag = VAR_3;
  VAR_10->data_transfer_length = 0;
  VAR_10->cdb_length = VAR_4;
  FUNC_2(VAR_10->cdb, 0, VAR_4);
  VAR_10->cdb[0] = VAR_7;
  VAR_10->cdb[1] = VAR_0;
  VAR_10->cdb[2] = VAR_1;

  FUNC_5(VAR_8, VAR_9);
  if (VAR_9->cmd_status != VAR_6) {
   FUNC_1(&VAR_8->pdev->dev,
    "device %d flush cache failed, status=0x%x.\n",
    VAR_11, VAR_9->cmd_status);
  }

  FUNC_4(VAR_8, VAR_9);
 }
 return 0;
}
