
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dma_ctrl_to_host; int no_autosense; } ;
struct TYPE_4__ {int ioctl_opcode; TYPE_1__ control; int id; int opcode; } ;
union myrs_cmd_mbox {TYPE_2__ common; } ;
struct myrs_cmdblk {unsigned char status; union myrs_cmd_mbox mbox; } ;
struct myrs_hba {int needs_update; int monitor_work; int work_q; scalar_t__ next_evseq; int dcmd_mutex; struct myrs_cmdblk dcmd_blk; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct myrs_hba*,struct myrs_cmdblk*) ;
 int FUNC_5 (struct myrs_cmdblk*) ;
 int FUNC_6 (int ,int *,int) ;
 int FUNC_7 (int ,struct Scsi_Host*,char*,...) ;
 struct myrs_hba* FUNC_8 (struct Scsi_Host*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_6,
  struct device_attribute *VAR_7, const char *VAR_8, size_t VAR_9)
{
 struct Scsi_Host *VAR_10 = FUNC_0(VAR_6);
 struct myrs_hba *VAR_11 = FUNC_8(VAR_10);
 struct myrs_cmdblk *VAR_12;
 union myrs_cmd_mbox *VAR_13;
 unsigned char VAR_14;

 FUNC_2(&VAR_11->dcmd_mutex);
 VAR_12 = &VAR_11->dcmd_blk;
 FUNC_5(VAR_12);
 VAR_13 = &VAR_12->mbox;
 VAR_13->common.opcode = VAR_2;
 VAR_13->common.id = VAR_3;
 VAR_13->common.control.dma_ctrl_to_host = 1;
 VAR_13->common.control.no_autosense = 1;
 VAR_13->common.ioctl_opcode = VAR_4;
 FUNC_4(VAR_11, VAR_12);
 VAR_14 = VAR_12->status;
 FUNC_3(&VAR_11->dcmd_mutex);
 if (VAR_14 != VAR_5) {
  FUNC_7(VAR_1, VAR_10,
        "Discovery Not Initiated, status %02X\n",
        VAR_14);
  return -VAR_0;
 }
 FUNC_7(VAR_1, VAR_10, "Discovery Initiated\n");
 VAR_11->next_evseq = 0;
 VAR_11->needs_update = 1;
 FUNC_6(VAR_11->work_q, &VAR_11->monitor_work, 1);
 FUNC_1(&VAR_11->monitor_work);
 FUNC_7(VAR_1, VAR_10, "Discovery Completed\n");

 return VAR_9;
}
