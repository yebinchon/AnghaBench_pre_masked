
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {int (* scsi_done ) (struct scsi_cmnd*) ;int result; } ;
struct pmcraid_cmd {TYPE_1__* ioa_cb; struct scsi_cmnd* scsi_cmd; } ;
struct TYPE_4__ {int * cdb; int response_handle; } ;
struct TYPE_3__ {TYPE_2__ ioarcb; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pmcraid_cmd*) ;
 int FUNC_3 (char*,int,int ,int,int ) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct scsi_cmnd*,int) ;
 int FUNC_6 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_7(struct pmcraid_cmd *VAR_0, int VAR_1, int VAR_2)
{
 struct scsi_cmnd *VAR_3 = VAR_0->scsi_cmd;
 int VAR_4 = 0;

 FUNC_5(VAR_3, VAR_1);

 FUNC_3("response(%d) CDB[0] = %x ioasc:result: %x:%x\n",
  FUNC_1(VAR_0->ioa_cb->ioarcb.response_handle) >> 2,
  VAR_0->ioa_cb->ioarcb.cdb[0],
  VAR_2, VAR_3->result);

 if (FUNC_0(VAR_2) != 0)
  VAR_4 = FUNC_2(VAR_0);

 if (VAR_4 == 0) {
  FUNC_4(VAR_3);
  VAR_3->scsi_done(VAR_3);
 }

 return VAR_4;
}
