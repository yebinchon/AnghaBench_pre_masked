
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int dummy; } ;
struct scsi_cmnd {int cmd_len; int* cmnd; } ;





 int FUNC_0 (struct scsi_cmnd*,struct us_data*) ;

void FUNC_1(struct scsi_cmnd *VAR_0, struct us_data *VAR_1)
{
 for (; VAR_0->cmd_len < 12; VAR_0->cmd_len++)
  VAR_0->cmnd[VAR_0->cmd_len] = 0;


 VAR_0->cmd_len = 12;




 switch (VAR_0->cmnd[0]) {


 case 130:
  VAR_0->cmnd[4] = 36;
  break;


 case 129:
  VAR_0->cmnd[7] = 0;
  VAR_0->cmnd[8] = 8;
  break;


 case 128:
  VAR_0->cmnd[4] = 18;
  break;
 }


 FUNC_0(VAR_0, VAR_1);
}
