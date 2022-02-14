
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvumi_msg_frame {int data_transfer_length; unsigned char* cdb; int cdb_length; int req_function; int cmd_flag; scalar_t__ device_id; } ;
struct mvumi_hba {TYPE_1__* pdev; } ;
struct mvumi_event_req {int dummy; } ;
struct mvumi_cmd {scalar_t__ cmd_status; int data_buf; struct mvumi_msg_frame* frame; int sync_cmd; int * scmd; } ;
struct TYPE_2__ {int dev; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 int FUNC_2 (unsigned char*,int ,int ) ;
 struct mvumi_cmd* FUNC_3 (struct mvumi_hba*,int) ;
 int FUNC_4 (struct mvumi_hba*,struct mvumi_cmd*) ;
 int FUNC_5 (struct mvumi_hba*,struct mvumi_cmd*) ;
 int FUNC_6 (struct mvumi_hba*,unsigned char,int ) ;

__attribute__((used)) static int FUNC_7(struct mvumi_hba *VAR_6, unsigned char VAR_7)
{
 struct mvumi_cmd *VAR_8;
 struct mvumi_msg_frame *VAR_9;

 VAR_8 = FUNC_3(VAR_6, 512);
 if (!VAR_8)
  return -1;
 VAR_8->scmd = ((void*)0);
 VAR_8->cmd_status = VAR_4;
 FUNC_0(&VAR_8->sync_cmd, 0);
 VAR_9 = VAR_8->frame;
 VAR_9->device_id = 0;
 VAR_9->cmd_flag = VAR_2;
 VAR_9->req_function = VAR_1;
 VAR_9->cdb_length = VAR_3;
 VAR_9->data_transfer_length = sizeof(struct mvumi_event_req);
 FUNC_2(VAR_9->cdb, 0, VAR_3);
 VAR_9->cdb[0] = VAR_0;
 VAR_9->cdb[1] = VAR_7;
 FUNC_5(VAR_6, VAR_8);

 if (VAR_8->cmd_status != VAR_5)
  FUNC_1(&VAR_6->pdev->dev, "get event failed, status=0x%x.\n",
       VAR_8->cmd_status);
 else
  FUNC_6(VAR_6, VAR_8->frame->cdb[1], VAR_8->data_buf);

 FUNC_4(VAR_6, VAR_8);
 return 0;
}
