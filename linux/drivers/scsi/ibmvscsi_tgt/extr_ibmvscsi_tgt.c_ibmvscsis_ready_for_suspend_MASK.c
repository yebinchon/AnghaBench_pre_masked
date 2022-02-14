
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct viosrp_crq {scalar_t__ valid; scalar_t__ format; } ;
struct TYPE_4__ {int unit_id; } ;
struct TYPE_3__ {int index; struct viosrp_crq* base_addr; } ;
struct scsi_info {int flags; scalar_t__ state; int dev; TYPE_2__ dds; TYPE_1__ cmd_q; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,char*,int,scalar_t__,int) ;
 int FUNC_1 (int *,char*,...) ;
 long FUNC_2 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct scsi_info*,scalar_t__,int ) ;
 int FUNC_4 (struct scsi_info*) ;

__attribute__((used)) static long FUNC_5(struct scsi_info *VAR_8, bool VAR_9)
{
 long VAR_10 = 0;
 struct viosrp_crq *VAR_11;


 VAR_11 = VAR_8->cmd_q.base_addr + VAR_8->cmd_q.index;

 FUNC_0(&VAR_8->dev, "ready_suspend: flags 0x%x, state 0x%hx crq_valid:%x\n",
  VAR_8->flags, VAR_8->state, (int)VAR_11->valid);

 if (!(VAR_8->flags & VAR_3) && !(VAR_11->valid)) {
  VAR_10 = FUNC_2(VAR_8->dds.unit_id, VAR_2, 0, 0, 0,
         0, 0);
  if (VAR_10) {
   FUNC_1(&VAR_8->dev, "Ready for Suspend Vioctl failed: %ld\n",
    VAR_10);
   VAR_10 = 0;
  }
 } else if (((VAR_8->flags & VAR_4) &&
      (VAR_8->flags & VAR_3)) ||
     ((VAR_11->valid) && ((VAR_11->valid != VAR_7) ||
         (VAR_11->format != VAR_6)))) {
  if (VAR_9) {
   VAR_8->state = VAR_1;
   FUNC_4(VAR_8);
   VAR_10 = -1;
  } else if (VAR_8->state == VAR_0) {
   FUNC_3(VAR_8,
        VAR_1, 0);
  }

  VAR_8->flags &= ~VAR_4;

  if ((VAR_11->valid) && ((VAR_11->valid != VAR_7) ||
         (VAR_11->format != VAR_6)))
   FUNC_1(&VAR_8->dev, "Invalid element in CRQ after Prepare for Suspend");
 }

 VAR_8->flags &= ~(VAR_5 | VAR_3);

 return VAR_10;
}
