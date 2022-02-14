
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int addr; int opcode; int id; } ;
union myrb_cmd_mbox {TYPE_1__ type3; } ;
struct scsi_device {int dummy; } ;
struct myrb_rbld_progress {unsigned int ldev_num; unsigned int ldev_size; unsigned int blocks_left; } ;
struct myrb_cmdblk {union myrb_cmd_mbox mbox; } ;
struct myrb_hba {int need_cc_status; TYPE_2__* pdev; int host; struct myrb_cmdblk mcmd_blk; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned short VAR_4 ;
 struct myrb_rbld_progress* FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (int *,int,struct myrb_rbld_progress*,int ) ;
 unsigned short FUNC_2 (struct myrb_hba*,struct myrb_cmdblk*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct myrb_cmdblk*) ;
 struct scsi_device* FUNC_5 (int ,int ,unsigned int,int ) ;
 int FUNC_6 (struct scsi_device*) ;
 int FUNC_7 (int ,struct scsi_device*,char*,int) ;

__attribute__((used)) static void FUNC_8(struct myrb_hba *VAR_5)
{
 struct myrb_cmdblk *VAR_6 = &VAR_5->mcmd_blk;
 union myrb_cmd_mbox *VAR_7 = &VAR_6->mbox;
 struct myrb_rbld_progress *VAR_8;
 dma_addr_t VAR_9;
 unsigned short VAR_10;

 VAR_8 = FUNC_0(&VAR_5->pdev->dev,
          sizeof(struct myrb_rbld_progress),
          &VAR_9, VAR_0);
 if (!VAR_8) {
  VAR_5->need_cc_status = 1;
  return;
 }
 FUNC_4(VAR_6);
 VAR_7->type3.id = VAR_3;
 VAR_7->type3.opcode = VAR_2;
 VAR_7->type3.addr = VAR_9;
 VAR_10 = FUNC_2(VAR_5, VAR_6);
 if (VAR_10 == VAR_4) {
  unsigned int VAR_11 = VAR_8->ldev_num;
  unsigned int VAR_12 = VAR_8->ldev_size;
  unsigned int VAR_13 =
   VAR_12 - VAR_8->blocks_left;
  struct scsi_device *VAR_14;

  VAR_14 = FUNC_5(VAR_5->host,
       FUNC_3(VAR_5->host),
       VAR_11, 0);
  if (VAR_14) {
   FUNC_7(VAR_1, VAR_14,
        "Consistency Check in Progress: %d%% completed\n",
        (100 * (VAR_13 >> 7))
        / (VAR_12 >> 7));
   FUNC_6(VAR_14);
  }
 }
 FUNC_1(&VAR_5->pdev->dev, sizeof(struct myrb_rbld_progress),
     VAR_8, VAR_9);
}
