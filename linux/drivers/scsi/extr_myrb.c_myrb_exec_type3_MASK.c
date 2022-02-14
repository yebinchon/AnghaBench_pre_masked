
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int opcode; int addr; int id; } ;
union myrb_cmd_mbox {TYPE_1__ type3; } ;
struct myrb_cmdblk {union myrb_cmd_mbox mbox; } ;
struct myrb_hba {int dcmd_mutex; struct myrb_cmdblk dcmd_blk; } ;
typedef enum myrb_cmd_opcode { ____Placeholder_myrb_cmd_opcode } myrb_cmd_opcode ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned short FUNC_2 (struct myrb_hba*,struct myrb_cmdblk*) ;
 int FUNC_3 (struct myrb_cmdblk*) ;

__attribute__((used)) static unsigned short FUNC_4(struct myrb_hba *VAR_1,
  enum myrb_cmd_opcode VAR_2, dma_addr_t VAR_3)
{
 struct myrb_cmdblk *VAR_4 = &VAR_1->dcmd_blk;
 union myrb_cmd_mbox *VAR_5 = &VAR_4->mbox;
 unsigned short VAR_6;

 FUNC_0(&VAR_1->dcmd_mutex);
 FUNC_3(VAR_4);
 VAR_5->type3.id = VAR_0;
 VAR_5->type3.opcode = VAR_2;
 VAR_5->type3.addr = VAR_3;
 VAR_6 = FUNC_2(VAR_1, VAR_4);
 FUNC_1(&VAR_1->dcmd_mutex);
 return VAR_6;
}
