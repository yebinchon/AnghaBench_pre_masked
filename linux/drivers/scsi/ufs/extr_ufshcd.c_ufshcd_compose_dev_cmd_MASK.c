
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ufshcd_lrb {int task_tag; int intr_cmd; scalar_t__ lun; int * sense_buffer; scalar_t__ sense_bufflen; int * cmd; } ;
struct TYPE_2__ {int type; } ;
struct ufs_hba {TYPE_1__ dev_cmd; } ;
typedef enum dev_cmd_type { ____Placeholder_dev_cmd_type } dev_cmd_type ;


 int FUNC_0 (struct ufs_hba*,struct ufshcd_lrb*) ;

__attribute__((used)) static int FUNC_1(struct ufs_hba *VAR_0,
  struct ufshcd_lrb *VAR_1, enum dev_cmd_type VAR_2, int VAR_3)
{
 VAR_1->cmd = ((void*)0);
 VAR_1->sense_bufflen = 0;
 VAR_1->sense_buffer = ((void*)0);
 VAR_1->task_tag = VAR_3;
 VAR_1->lun = 0;
 VAR_1->intr_cmd = 1;
 VAR_0->dev_cmd.type = VAR_2;

 return FUNC_0(VAR_0, VAR_1);
}
