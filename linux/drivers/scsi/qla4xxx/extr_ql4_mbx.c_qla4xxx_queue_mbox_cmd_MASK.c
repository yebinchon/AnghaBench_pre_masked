
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct scsi_qla_host {TYPE_1__* reg; } ;
struct TYPE_2__ {int ctrl_status; int * mailbox; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct scsi_qla_host *VAR_1, uint32_t *VAR_2,
       int VAR_3)
{
 int VAR_4;


 for (VAR_4 = 1; VAR_4 < VAR_3; VAR_4++)
  FUNC_2(VAR_2[VAR_4], &VAR_1->reg->mailbox[VAR_4]);


 FUNC_2(VAR_2[0], &VAR_1->reg->mailbox[0]);
 FUNC_0(&VAR_1->reg->mailbox[0]);
 FUNC_2(FUNC_1(VAR_0), &VAR_1->reg->ctrl_status);
 FUNC_0(&VAR_1->reg->ctrl_status);
}
