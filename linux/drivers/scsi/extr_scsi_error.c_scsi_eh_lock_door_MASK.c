
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_request {int retries; scalar_t__* cmd; int cmd_len; } ;
struct scsi_device {int request_queue; } ;
struct request {int timeout; int q; int rq_flags; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct request*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int *,struct request*,int,int ) ;
 struct request* FUNC_3 (int ,int ,int ) ;
 int VAR_5 ;
 struct scsi_request* FUNC_4 (struct request*) ;

__attribute__((used)) static void FUNC_5(struct scsi_device *VAR_6)
{
 struct request *VAR_7;
 struct scsi_request *VAR_8;

 VAR_7 = FUNC_3(VAR_6->request_queue, VAR_2, 0);
 if (FUNC_1(VAR_7))
  return;
 VAR_8 = FUNC_4(VAR_7);

 VAR_8->cmd[0] = VAR_0;
 VAR_8->cmd[1] = 0;
 VAR_8->cmd[2] = 0;
 VAR_8->cmd[3] = 0;
 VAR_8->cmd[4] = VAR_4;
 VAR_8->cmd[5] = 0;
 VAR_8->cmd_len = FUNC_0(VAR_8->cmd[0]);

 VAR_7->rq_flags |= VAR_3;
 VAR_7->timeout = 10 * VAR_1;
 VAR_8->retries = 5;

 FUNC_2(VAR_7->q, ((void*)0), VAR_7, 1, VAR_5);
}
