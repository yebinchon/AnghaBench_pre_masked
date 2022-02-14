
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; scalar_t__ result; } ;
struct pqi_io_request {struct scsi_cmnd* scmd; int io_complete_callback; } ;
struct pqi_ctrl_info {int dummy; } ;
struct TYPE_2__ {int host; } ;


 int FUNC_0 (struct pqi_ctrl_info*,struct pqi_io_request*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct pqi_ctrl_info*) ;
 struct pqi_ctrl_info* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct pqi_io_request *VAR_1)
{
 struct scsi_cmnd *VAR_2;
 struct pqi_ctrl_info *VAR_3;

 VAR_1->io_complete_callback = VAR_0;
 VAR_2 = VAR_1->scmd;
 VAR_2->result = 0;
 VAR_3 = FUNC_2(VAR_2->device->host);

 FUNC_0(VAR_3, VAR_1, 0);
 FUNC_1(VAR_3);
}
