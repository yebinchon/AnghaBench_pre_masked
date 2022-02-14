
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dma_ctrl_to_host; int no_autosense; } ;
struct TYPE_4__ {int ioctl_opcode; int opdev; TYPE_1__ control; int id; int opcode; } ;
union myrs_cmd_mbox {TYPE_2__ dev_op; } ;
struct myrs_cmdblk {unsigned char status; union myrs_cmd_mbox mbox; } ;
struct myrs_hba {int dcmd_mutex; struct myrs_cmdblk dcmd_blk; } ;
typedef enum myrs_opdev { ____Placeholder_myrs_opdev } myrs_opdev ;
typedef enum myrs_ioctl_opcode { ____Placeholder_myrs_ioctl_opcode } myrs_ioctl_opcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct myrs_hba*,struct myrs_cmdblk*) ;
 int FUNC_3 (struct myrs_cmdblk*) ;

__attribute__((used)) static unsigned char FUNC_4(struct myrs_hba *VAR_2,
  enum myrs_ioctl_opcode VAR_3, enum myrs_opdev VAR_4)
{
 struct myrs_cmdblk *VAR_5 = &VAR_2->dcmd_blk;
 union myrs_cmd_mbox *VAR_6 = &VAR_5->mbox;
 unsigned char VAR_7;

 FUNC_0(&VAR_2->dcmd_mutex);
 FUNC_3(VAR_5);
 VAR_6->dev_op.opcode = VAR_0;
 VAR_6->dev_op.id = VAR_1;
 VAR_6->dev_op.control.dma_ctrl_to_host = 1;
 VAR_6->dev_op.control.no_autosense = 1;
 VAR_6->dev_op.ioctl_opcode = VAR_3;
 VAR_6->dev_op.opdev = VAR_4;
 FUNC_2(VAR_2, VAR_5);
 VAR_7 = VAR_5->status;
 FUNC_1(&VAR_2->dcmd_mutex);
 return VAR_7;
}
