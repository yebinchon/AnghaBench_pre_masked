
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


union myrs_sgl {TYPE_2__* sge; } ;
struct TYPE_7__ {int dma_ctrl_to_host; int no_autosense; } ;
struct TYPE_9__ {int dma_size; union myrs_sgl dma_addr; int ioctl_opcode; scalar_t__ ctlr_num; TYPE_1__ control; int opcode; int id; } ;
union myrs_cmd_mbox {TYPE_3__ ctlr_info; } ;
struct myrs_cmdblk {unsigned char status; union myrs_cmd_mbox mbox; } ;
struct myrs_hba {int needs_update; TYPE_6__* ctlr_info; TYPE_5__* host; TYPE_4__* pdev; int dcmd_mutex; struct myrs_cmdblk dcmd_blk; } ;
struct myrs_ctlr_info {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_12__ {unsigned short ldev_present; unsigned short ldev_critical; unsigned short ldev_offline; scalar_t__ bg_init_active; scalar_t__ ldev_init_active; scalar_t__ pdev_init_active; scalar_t__ cc_active; scalar_t__ rbld_active; scalar_t__ exp_active; } ;
struct TYPE_11__ {int shost_gendev; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_8__ {int sge_count; int sge_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,TYPE_6__*,int,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct myrs_hba*,struct myrs_cmdblk*) ;
 int FUNC_7 (struct myrs_cmdblk*) ;
 int FUNC_8 (int ,TYPE_5__*,char*,unsigned short,unsigned short,unsigned short) ;

__attribute__((used)) static unsigned char FUNC_9(struct myrs_hba *VAR_7)
{
 struct myrs_cmdblk *VAR_8 = &VAR_7->dcmd_blk;
 union myrs_cmd_mbox *VAR_9 = &VAR_8->mbox;
 dma_addr_t VAR_10;
 union myrs_sgl *VAR_11;
 unsigned char VAR_12;
 unsigned short VAR_13, VAR_14, VAR_15;

 VAR_13 = VAR_7->ctlr_info->ldev_present;
 VAR_14 = VAR_7->ctlr_info->ldev_critical;
 VAR_15 = VAR_7->ctlr_info->ldev_offline;

 VAR_10 = FUNC_1(&VAR_7->pdev->dev, VAR_7->ctlr_info,
     sizeof(struct myrs_ctlr_info),
     VAR_0);
 if (FUNC_2(&VAR_7->pdev->dev, VAR_10))
  return VAR_5;

 FUNC_4(&VAR_7->dcmd_mutex);
 FUNC_7(VAR_8);
 VAR_9->ctlr_info.id = VAR_3;
 VAR_9->ctlr_info.opcode = VAR_2;
 VAR_9->ctlr_info.control.dma_ctrl_to_host = 1;
 VAR_9->ctlr_info.control.no_autosense = 1;
 VAR_9->ctlr_info.dma_size = sizeof(struct myrs_ctlr_info);
 VAR_9->ctlr_info.ctlr_num = 0;
 VAR_9->ctlr_info.ioctl_opcode = VAR_4;
 VAR_11 = &VAR_9->ctlr_info.dma_addr;
 VAR_11->sge[0].sge_addr = VAR_10;
 VAR_11->sge[0].sge_count = VAR_9->ctlr_info.dma_size;
 FUNC_0(&VAR_7->host->shost_gendev, "Sending GetControllerInfo\n");
 FUNC_6(VAR_7, VAR_8);
 VAR_12 = VAR_8->status;
 FUNC_5(&VAR_7->dcmd_mutex);
 FUNC_3(&VAR_7->pdev->dev, VAR_10,
    sizeof(struct myrs_ctlr_info), VAR_0);
 if (VAR_12 == VAR_6) {
  if (VAR_7->ctlr_info->bg_init_active +
      VAR_7->ctlr_info->ldev_init_active +
      VAR_7->ctlr_info->pdev_init_active +
      VAR_7->ctlr_info->cc_active +
      VAR_7->ctlr_info->rbld_active +
      VAR_7->ctlr_info->exp_active != 0)
   VAR_7->needs_update = 1;
  if (VAR_7->ctlr_info->ldev_present != VAR_13 ||
      VAR_7->ctlr_info->ldev_critical != VAR_14 ||
      VAR_7->ctlr_info->ldev_offline != VAR_15)
   FUNC_8(VAR_1, VAR_7->host,
         "Logical drive count changes (%d/%d/%d)\n",
         VAR_7->ctlr_info->ldev_critical,
         VAR_7->ctlr_info->ldev_offline,
         VAR_7->ctlr_info->ldev_present);
 }

 return VAR_12;
}
