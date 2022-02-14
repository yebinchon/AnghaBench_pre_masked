
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; int target; int channel; int id; int opcode; } ;
union myrb_cmd_mbox {TYPE_1__ type3D; } ;
struct scsi_device {int id; int channel; } ;
struct myrb_cmdblk {union myrb_cmd_mbox mbox; } ;
struct myrb_hba {int dcmd_mutex; struct myrb_cmdblk dcmd_blk; } ;
typedef enum myrb_devstate { ____Placeholder_myrb_devstate } myrb_devstate ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned short FUNC_2 (struct myrb_hba*,struct myrb_cmdblk*) ;

__attribute__((used)) static unsigned short FUNC_3(struct myrb_hba *VAR_2,
  struct scsi_device *VAR_3, enum myrb_devstate VAR_4)
{
 struct myrb_cmdblk *VAR_5 = &VAR_2->dcmd_blk;
 union myrb_cmd_mbox *VAR_6 = &VAR_5->mbox;
 unsigned short VAR_7;

 FUNC_0(&VAR_2->dcmd_mutex);
 VAR_6->type3D.opcode = VAR_0;
 VAR_6->type3D.id = VAR_1;
 VAR_6->type3D.channel = VAR_3->channel;
 VAR_6->type3D.target = VAR_3->id;
 VAR_6->type3D.state = VAR_4 & 0x1F;
 VAR_7 = FUNC_2(VAR_2, VAR_5);
 FUNC_1(&VAR_2->dcmd_mutex);

 return VAR_7;
}
