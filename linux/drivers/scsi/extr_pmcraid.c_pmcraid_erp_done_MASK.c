
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;} ;
struct pmcraid_instance {TYPE_4__* pdev; } ;
struct pmcraid_cmd {scalar_t__ sense_buffer_dma; int * sense_buffer; TYPE_3__* ioa_cb; struct pmcraid_instance* drv_inst; struct scsi_cmnd* scsi_cmd; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_6__ {int * cdb; } ;
struct TYPE_5__ {int ioasc; } ;
struct TYPE_7__ {TYPE_2__ ioarcb; TYPE_1__ ioasa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int *,scalar_t__,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pmcraid_cmd*) ;
 int FUNC_4 (int ,struct scsi_cmnd*,char*,int ,int ) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_7(struct pmcraid_cmd *VAR_4)
{
 struct scsi_cmnd *VAR_5 = VAR_4->scsi_cmd;
 struct pmcraid_instance *VAR_6 = VAR_4->drv_inst;
 u32 VAR_7 = FUNC_2(VAR_4->ioa_cb->ioasa.ioasc);

 if (FUNC_0(VAR_7) > 0) {
  VAR_5->result |= (VAR_0 << 16);
  FUNC_4(VAR_2, VAR_5,
       "command CDB[0] = %x failed with IOASC: 0x%08X\n",
       VAR_4->ioa_cb->ioarcb.cdb[0], VAR_7);
 }

 if (VAR_4->sense_buffer) {
  FUNC_1(&VAR_6->pdev->dev, VAR_4->sense_buffer_dma,
     VAR_3, VAR_1);
  VAR_4->sense_buffer = ((void*)0);
  VAR_4->sense_buffer_dma = 0;
 }

 FUNC_5(VAR_5);
 FUNC_3(VAR_4);
 VAR_5->scsi_done(VAR_5);
}
