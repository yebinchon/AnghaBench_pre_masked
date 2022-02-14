
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {scalar_t__ data_direction; scalar_t__ scsi_status; } ;
struct xcopy_pt_cmd {int xpt_passthrough_sem; struct se_cmd se_cmd; } ;
typedef scalar_t__ sense_reason_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (struct se_cmd*) ;
 scalar_t__ FUNC_2 (struct se_cmd*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct xcopy_pt_cmd *VAR_2)
{
 struct se_cmd *VAR_3 = &VAR_2->se_cmd;
 sense_reason_t VAR_4;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4)
  return -VAR_1;

 if (VAR_3->data_direction == VAR_0)
  FUNC_1(VAR_3);

 FUNC_3(&VAR_2->xpt_passthrough_sem);

 FUNC_0("target_xcopy_issue_pt_cmd(): SCSI status: 0x%02x\n",
   VAR_3->scsi_status);

 return (VAR_3->scsi_status) ? -VAR_1 : 0;
}
