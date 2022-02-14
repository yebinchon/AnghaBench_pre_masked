
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct megasas_instance {int max_fw_cmds; int max_mpt_cmds; int max_scsi_cmds; TYPE_1__* pdev; scalar_t__ is_rdpq; struct fusion_context* ctrl_context; } ;
struct megasas_cmd_fusion {int index; int sync_cmd_idx; int r1_alt_dev_handle; scalar_t__ io_request_phys_addr; struct megasas_cmd_fusion* io_request; struct megasas_instance* instance; int * scmd; } ;
struct fusion_context {struct megasas_cmd_fusion** cmd_list; scalar_t__ io_request_frames_phys; int * io_request_frames; } ;
struct MPI2_RAID_SCSI_IO_REQUEST {int index; int sync_cmd_idx; int r1_alt_dev_handle; scalar_t__ io_request_phys_addr; struct MPI2_RAID_SCSI_IO_REQUEST* io_request; struct megasas_instance* instance; int * scmd; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (struct megasas_instance*) ;
 scalar_t__ FUNC_2 (struct megasas_instance*) ;
 scalar_t__ FUNC_3 (struct megasas_instance*) ;
 scalar_t__ FUNC_4 (struct megasas_instance*) ;
 scalar_t__ FUNC_5 (struct megasas_instance*) ;
 int FUNC_6 (struct megasas_instance*) ;
 int FUNC_7 (struct megasas_cmd_fusion*,int ,int) ;

__attribute__((used)) static int
FUNC_8(struct megasas_instance *VAR_4)
{
 int VAR_5;
 struct fusion_context *VAR_6;
 struct megasas_cmd_fusion *VAR_7;
 u32 VAR_8;
 dma_addr_t VAR_9;
 u8 *VAR_10;


 VAR_6 = VAR_4->ctrl_context;

 if (FUNC_4(VAR_4))
  goto fail_exit;

 if (VAR_4->is_rdpq) {
  if (FUNC_2(VAR_4))
   goto fail_exit;
 } else
  if (FUNC_3(VAR_4))
   goto fail_exit;

 if (FUNC_1(VAR_4))
  goto fail_exit;

 FUNC_0(&VAR_4->pdev->dev, "Configured max firmware commands: %d\n",
   VAR_4->max_fw_cmds);


 VAR_10 = VAR_6->io_request_frames + VAR_1;
 VAR_9 = VAR_6->io_request_frames_phys + VAR_1;






 for (VAR_5 = 0; VAR_5 < VAR_4->max_mpt_cmds; VAR_5++) {
  VAR_7 = VAR_6->cmd_list[VAR_5];
  VAR_8 = VAR_1 * VAR_5;
  FUNC_7(VAR_7, 0, sizeof(struct megasas_cmd_fusion));
  VAR_7->index = VAR_5 + 1;
  VAR_7->scmd = ((void*)0);
  VAR_7->sync_cmd_idx =
  (VAR_5 >= VAR_4->max_scsi_cmds && VAR_5 < VAR_4->max_fw_cmds) ?
    (VAR_5 - VAR_4->max_scsi_cmds) :
    (u32)VAR_3;
  VAR_7->instance = VAR_4;
  VAR_7->io_request =
   (struct MPI2_RAID_SCSI_IO_REQUEST *)
    (VAR_10 + VAR_8);
  FUNC_7(VAR_7->io_request, 0,
         sizeof(struct MPI2_RAID_SCSI_IO_REQUEST));
  VAR_7->io_request_phys_addr = VAR_9 + VAR_8;
  VAR_7->r1_alt_dev_handle = VAR_2;
 }

 if (FUNC_5(VAR_4))
  goto fail_exit;

 return 0;

fail_exit:
 FUNC_6(VAR_4);
 return -VAR_0;
}
