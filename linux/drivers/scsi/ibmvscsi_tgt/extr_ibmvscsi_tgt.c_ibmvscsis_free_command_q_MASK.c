
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {int size; scalar_t__ index; int base_addr; } ;
struct scsi_info {int flags; scalar_t__ new_state; scalar_t__ phyp_acr_state; int phyp_acr_flags; int state; int dev; TYPE_1__ cmd_q; int intr_lock; int dma_dev; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,int ,int,scalar_t__) ;
 int FUNC_1 (struct scsi_info*,int) ;
 long FUNC_2 (struct scsi_info*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static long FUNC_7(struct scsi_info *VAR_3)
{
 int VAR_4;
 u32 VAR_5;
 u16 VAR_6;
 long VAR_7 = VAR_0;

 if (!(VAR_3->flags & VAR_1)) {
  FUNC_6(VAR_3->dma_dev);

  VAR_6 = VAR_3->new_state;
  VAR_5 = VAR_3->flags;
  VAR_3->phyp_acr_state = 0;
  VAR_3->phyp_acr_flags = 0;

  FUNC_5(&VAR_3->intr_lock);
  VAR_7 = FUNC_2(VAR_3);
  FUNC_4(&VAR_3->intr_lock);

  if (VAR_6 != VAR_3->new_state)
   VAR_3->phyp_acr_state = VAR_3->new_state;

  VAR_3->phyp_acr_flags = ((~VAR_5) & VAR_3->flags);

  if (VAR_7 == VAR_0) {
   VAR_4 = VAR_3->cmd_q.size * VAR_2;
   FUNC_3(VAR_3->cmd_q.base_addr, 0, VAR_4);
   VAR_3->cmd_q.index = 0;
   VAR_3->flags |= VAR_1;

   FUNC_1(VAR_3, 0);
  }

  FUNC_0(&VAR_3->dev, "free_command_q: flags 0x%x, state 0x%hx, acr_flags 0x%x, acr_state 0x%hx\n",
   VAR_3->flags, VAR_3->state, VAR_3->phyp_acr_flags,
   VAR_3->phyp_acr_state);
 }
 return VAR_7;
}
