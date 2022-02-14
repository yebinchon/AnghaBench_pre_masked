
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


union myrs_sgl {TYPE_3__* sge; } ;
struct TYPE_9__ {unsigned short ldev_num; } ;
struct TYPE_8__ {int dma_ctrl_to_host; int no_autosense; } ;
struct TYPE_11__ {int dma_size; union myrs_sgl dma_addr; int ioctl_opcode; TYPE_2__ ldev; TYPE_1__ control; int opcode; int id; } ;
union myrs_cmd_mbox {TYPE_4__ ldev_info; } ;
struct TYPE_13__ {scalar_t__ ldev_init_done; } ;
struct myrs_ldev_info {unsigned short ldev_num; unsigned long cfg_devsize; scalar_t__ dev_state; scalar_t__ cmds_failed; scalar_t__ deferred_write_errs; TYPE_6__ ldev_control; scalar_t__ bg_init_active; int patrol_lba; scalar_t__ patrol_active; int migration_lba; scalar_t__ migration_active; int fg_init_lba; scalar_t__ fg_init_active; int bg_init_lba; int soft_errs; } ;
struct myrs_cmdblk {unsigned char status; union myrs_cmd_mbox mbox; } ;
struct myrs_hba {TYPE_7__* host; TYPE_5__* pdev; int dcmd_mutex; struct myrs_cmdblk dcmd_blk; } ;
typedef int dma_addr_t ;
struct TYPE_14__ {int shost_gendev; } ;
struct TYPE_12__ {int dev; } ;
struct TYPE_10__ {int sge_count; int sge_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 int FUNC_0 (int *,char*,unsigned short) ;
 int FUNC_1 (int *,struct myrs_ldev_info*,int,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int,int ) ;
 int FUNC_4 (struct myrs_ldev_info*,struct myrs_ldev_info*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct myrs_hba*,struct myrs_cmdblk*) ;
 int FUNC_9 (struct myrs_hba*,unsigned short,char*,int ,unsigned long) ;
 int FUNC_10 (struct myrs_cmdblk*) ;
 int FUNC_11 (int ,TYPE_7__*,char*,unsigned short,char const*,...) ;

__attribute__((used)) static unsigned char FUNC_12(struct myrs_hba *VAR_7,
  unsigned short VAR_8, struct myrs_ldev_info *VAR_9)
{
 struct myrs_cmdblk *VAR_10 = &VAR_7->dcmd_blk;
 union myrs_cmd_mbox *VAR_11 = &VAR_10->mbox;
 dma_addr_t VAR_12;
 struct myrs_ldev_info VAR_13;
 union myrs_sgl *VAR_14;
 unsigned char VAR_15;

 FUNC_4(&VAR_13, VAR_9, sizeof(struct myrs_ldev_info));
 VAR_12 = FUNC_1(&VAR_7->pdev->dev, VAR_9,
     sizeof(struct myrs_ldev_info),
     VAR_0);
 if (FUNC_2(&VAR_7->pdev->dev, VAR_12))
  return VAR_5;

 FUNC_5(&VAR_7->dcmd_mutex);
 FUNC_10(VAR_10);
 VAR_11->ldev_info.id = VAR_3;
 VAR_11->ldev_info.opcode = VAR_2;
 VAR_11->ldev_info.control.dma_ctrl_to_host = 1;
 VAR_11->ldev_info.control.no_autosense = 1;
 VAR_11->ldev_info.dma_size = sizeof(struct myrs_ldev_info);
 VAR_11->ldev_info.ldev.ldev_num = VAR_8;
 VAR_11->ldev_info.ioctl_opcode = VAR_4;
 VAR_14 = &VAR_11->ldev_info.dma_addr;
 VAR_14->sge[0].sge_addr = VAR_12;
 VAR_14->sge[0].sge_count = VAR_11->ldev_info.dma_size;
 FUNC_0(&VAR_7->host->shost_gendev,
  "Sending GetLogicalDeviceInfoValid for ldev %d\n", VAR_8);
 FUNC_8(VAR_7, VAR_10);
 VAR_15 = VAR_10->status;
 FUNC_6(&VAR_7->dcmd_mutex);
 FUNC_3(&VAR_7->pdev->dev, VAR_12,
    sizeof(struct myrs_ldev_info), VAR_0);
 if (VAR_15 == VAR_6) {
  unsigned short VAR_16 = VAR_9->ldev_num;
  struct myrs_ldev_info *VAR_17 = VAR_9;
  struct myrs_ldev_info *VAR_18 = &VAR_13;
  unsigned long VAR_19 = VAR_17->cfg_devsize;

  if (VAR_17->dev_state != VAR_18->dev_state) {
   const char *VAR_20;

   VAR_20 = FUNC_7(VAR_17->dev_state);
   FUNC_11(VAR_1, VAR_7->host,
         "Logical Drive %d is now %s\n",
         VAR_16, VAR_20 ? VAR_20 : "Invalid");
  }
  if ((VAR_17->soft_errs != VAR_18->soft_errs) ||
      (VAR_17->cmds_failed != VAR_18->cmds_failed) ||
      (VAR_17->deferred_write_errs != VAR_18->deferred_write_errs))
   FUNC_11(VAR_1, VAR_7->host,
         "Logical Drive %d Errors: Soft = %d, Failed = %d, Deferred Write = %d\n",
         VAR_16, VAR_17->soft_errs,
         VAR_17->cmds_failed,
         VAR_17->deferred_write_errs);
  if (VAR_17->bg_init_active)
   FUNC_9(VAR_7, VAR_16,
          "Background Initialization",
          VAR_17->bg_init_lba, VAR_19);
  else if (VAR_17->fg_init_active)
   FUNC_9(VAR_7, VAR_16,
          "Foreground Initialization",
          VAR_17->fg_init_lba, VAR_19);
  else if (VAR_17->migration_active)
   FUNC_9(VAR_7, VAR_16,
          "Data Migration",
          VAR_17->migration_lba, VAR_19);
  else if (VAR_17->patrol_active)
   FUNC_9(VAR_7, VAR_16,
          "Patrol Operation",
          VAR_17->patrol_lba, VAR_19);
  if (VAR_18->bg_init_active && !VAR_17->bg_init_active)
   FUNC_11(VAR_1, VAR_7->host,
         "Logical Drive %d: Background Initialization %s\n",
         VAR_16,
         (VAR_17->ldev_control.ldev_init_done ?
          "Completed" : "Failed"));
 }
 return VAR_15;
}
