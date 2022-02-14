
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int dummy; } ;
struct scsi_cmnd {int cmd_len; scalar_t__* cmnd; } ;


 int FUNC_0 (struct scsi_cmnd*,struct us_data*) ;

void FUNC_1(struct scsi_cmnd *VAR_0, struct us_data *VAR_1)
{







 for (; VAR_0->cmd_len < 12; VAR_0->cmd_len++)
  VAR_0->cmnd[VAR_0->cmd_len] = 0;


 FUNC_0(VAR_0, VAR_1);
}
