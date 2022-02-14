
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int opcode; int addr; int target; int channel; int id; } ;
union myrb_cmd_mbox {TYPE_2__ type3D; } ;
struct scsi_device {int id; int channel; } ;
struct myrb_pdev_state {int dummy; } ;
struct myrb_cmdblk {union myrb_cmd_mbox mbox; } ;
struct myrb_hba {TYPE_1__* pdev; int dcmd_mutex; struct myrb_cmdblk dcmd_blk; } ;
typedef enum myrb_cmd_opcode { ____Placeholder_myrb_cmd_opcode } myrb_cmd_opcode ;
typedef int dma_addr_t ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 int FUNC_0 (int *,struct myrb_pdev_state*,int,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned short FUNC_5 (struct myrb_hba*,struct myrb_cmdblk*) ;
 int FUNC_6 (struct myrb_cmdblk*) ;
 int FUNC_7 (struct myrb_pdev_state*) ;

__attribute__((used)) static unsigned short FUNC_8(struct myrb_hba *VAR_5,
  enum myrb_cmd_opcode VAR_6, struct scsi_device *VAR_7,
  struct myrb_pdev_state *VAR_8)
{
 struct myrb_cmdblk *VAR_9 = &VAR_5->dcmd_blk;
 union myrb_cmd_mbox *VAR_10 = &VAR_9->mbox;
 unsigned short VAR_11;
 dma_addr_t VAR_12;

 VAR_12 = FUNC_0(&VAR_5->pdev->dev, VAR_8,
     sizeof(struct myrb_pdev_state),
     VAR_0);
 if (FUNC_1(&VAR_5->pdev->dev, VAR_12))
  return VAR_3;

 FUNC_3(&VAR_5->dcmd_mutex);
 FUNC_6(VAR_9);
 VAR_10->type3D.id = VAR_2;
 VAR_10->type3D.opcode = VAR_6;
 VAR_10->type3D.channel = VAR_7->channel;
 VAR_10->type3D.target = VAR_7->id;
 VAR_10->type3D.addr = VAR_12;
 VAR_11 = FUNC_5(VAR_5, VAR_9);
 FUNC_4(&VAR_5->dcmd_mutex);
 FUNC_2(&VAR_5->pdev->dev, VAR_12,
    sizeof(struct myrb_pdev_state), VAR_0);
 if (VAR_11 == VAR_4 &&
     VAR_10->type3D.opcode == VAR_1)
  FUNC_7(VAR_8);

 return VAR_11;
}
