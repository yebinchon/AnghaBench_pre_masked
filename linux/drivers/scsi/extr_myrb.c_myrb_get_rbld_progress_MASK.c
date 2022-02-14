
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int addr; int opcode; int id; } ;
union myrb_cmd_mbox {TYPE_1__ type3; } ;
struct myrb_rbld_progress {int dummy; } ;
struct myrb_cmdblk {union myrb_cmd_mbox mbox; } ;
struct myrb_hba {TYPE_2__* pdev; struct myrb_cmdblk mcmd_blk; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short VAR_3 ;
 struct myrb_rbld_progress* FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (int *,int,struct myrb_rbld_progress*,int ) ;
 int FUNC_2 (struct myrb_rbld_progress*,struct myrb_rbld_progress*,int) ;
 unsigned short FUNC_3 (struct myrb_hba*,struct myrb_cmdblk*) ;
 int FUNC_4 (struct myrb_cmdblk*) ;

__attribute__((used)) static unsigned short FUNC_5(struct myrb_hba *VAR_4,
  struct myrb_rbld_progress *VAR_5)
{
 struct myrb_cmdblk *VAR_6 = &VAR_4->mcmd_blk;
 union myrb_cmd_mbox *VAR_7 = &VAR_6->mbox;
 struct myrb_rbld_progress *VAR_8;
 dma_addr_t VAR_9;
 unsigned short VAR_10;

 VAR_8 = FUNC_0(&VAR_4->pdev->dev,
          sizeof(struct myrb_rbld_progress),
          &VAR_9, VAR_0);
 if (!VAR_8)
  return VAR_3;

 FUNC_4(VAR_6);
 VAR_7->type3.id = VAR_2;
 VAR_7->type3.opcode = VAR_1;
 VAR_7->type3.addr = VAR_9;
 VAR_10 = FUNC_3(VAR_4, VAR_6);
 if (VAR_5)
  FUNC_2(VAR_5, VAR_8, sizeof(struct myrb_rbld_progress));
 FUNC_1(&VAR_4->pdev->dev, sizeof(struct myrb_rbld_progress),
     VAR_8, VAR_9);
 return VAR_10;
}
