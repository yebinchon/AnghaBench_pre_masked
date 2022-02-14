
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long uint ;
struct viosrp_crq {int format; scalar_t__ status; } ;
struct scsi_info {int flags; long state; long resume_state; int dev; int active_q; int waiting_rsp; int schedule_q; int debit; } ;


 long VAR_0 ;

 scalar_t__ VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 long VAR_7 ;

 int VAR_8 ;





 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,long) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct scsi_info*,int) ;
 int FUNC_4 (struct scsi_info*,int const,int) ;
 int FUNC_5 (struct scsi_info*,int) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static long FUNC_7(struct scsi_info *VAR_9,
      struct viosrp_crq *VAR_10)
{
 long VAR_11 = VAR_0;

 FUNC_0(&VAR_9->dev, "trans_event: format %d, flags 0x%x, state 0x%hx\n",
  (int)VAR_10->format, VAR_9->flags, VAR_9->state);

 switch (VAR_10->format) {
 case 139:
 case 136:
 case 137:
  FUNC_3(VAR_9, 1);
  if (VAR_10->format == 139)
   VAR_9->flags &= ~VAR_4;
  switch (VAR_9->state) {
  case 138:
  case 141:
  case 131:
   break;

  case 132:
   VAR_9->flags |= (VAR_6 | VAR_8);
   break;

  case 129:
   break;

  case 130:
   break;

  case 143:
   FUNC_4(VAR_9, 128,
        (VAR_6 |
         VAR_8));
   break;

  case 133:
   if ((VAR_9->debit > 0) ||
       !FUNC_6(&VAR_9->schedule_q) ||
       !FUNC_6(&VAR_9->waiting_rsp) ||
       !FUNC_6(&VAR_9->active_q)) {
    FUNC_0(&VAR_9->dev, "debit %d, sched %d, wait %d, active %d\n",
     VAR_9->debit,
     (int)FUNC_6(&VAR_9->schedule_q),
     (int)FUNC_6(&VAR_9->waiting_rsp),
     (int)FUNC_6(&VAR_9->active_q));
    FUNC_2(&VAR_9->dev, "connection lost with outstanding work\n");
   } else {
    FUNC_0(&VAR_9->dev, "trans_event: SRP Processing, but no outstanding work\n");
   }

   FUNC_4(VAR_9, 128,
        (VAR_6 |
         VAR_8));
   break;

  case 142:
  case 140:
  case 128:
   VAR_9->flags |= (VAR_6 | VAR_8);
   break;
  }
  break;

 case 135:
  FUNC_0(&VAR_9->dev, "Prep for Suspend, crq status = 0x%x\n",
   (int)VAR_10->status);
  switch (VAR_9->state) {
  case 141:
  case 130:
  case 143:
   FUNC_5(VAR_9, 0);
   break;
  case 133:
   VAR_9->resume_state = VAR_9->state;
   VAR_9->flags |= VAR_5;
   if (VAR_10->status == VAR_1)
    VAR_9->flags |= VAR_4;
   FUNC_4(VAR_9, 128, 0);
   break;
  case 138:
  case 131:
  case 132:
  case 129:
  case 142:
  case 140:
  case 128:
   FUNC_1(&VAR_9->dev, "Invalid state for Prepare for Suspend Trans Event: 0x%x\n",
    VAR_9->state);
   break;
  }
  break;

 case 134:
  FUNC_0(&VAR_9->dev, "Resume from Suspend, crq status = 0x%x\n",
   (int)VAR_10->status);
  if (VAR_9->flags & VAR_5) {
   VAR_9->flags |= VAR_3;
  } else {
   if ((VAR_10->status == VAR_1) ||
       (VAR_9->flags & VAR_4)) {
    FUNC_4(VAR_9,
         140,
         0);
    VAR_9->flags &= ~VAR_4;
   }
  }
  break;

 default:
  VAR_11 = VAR_2;
  FUNC_1(&VAR_9->dev, "trans_event: invalid format %d\n",
   (uint)VAR_10->format);
  FUNC_4(VAR_9, 142,
       VAR_6);
  break;
 }

 VAR_11 = VAR_9->flags & VAR_7;

 FUNC_0(&VAR_9->dev, "Leaving trans_event: flags 0x%x, state 0x%hx, rc %ld\n",
  VAR_9->flags, VAR_9->state, VAR_11);

 return VAR_11;
}
