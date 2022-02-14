
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint ;
struct TYPE_4__ {scalar_t__ timer_pops; } ;
struct TYPE_3__ {int unit_id; } ;
struct scsi_info {int state; int dev; int dma_dev; scalar_t__ credit; scalar_t__ debit; TYPE_2__ rsp_q_timer; int flags; TYPE_1__ dds; } ;


 long VAR_0 ;


 int VAR_1 ;

 long VAR_2 ;


 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,char*,long) ;
 int FUNC_1 (int *,char*,long) ;
 long FUNC_2 (int ,int ,int,int ,int ,int ,int ) ;
 long FUNC_3 (struct scsi_info*,scalar_t__*) ;
 long FUNC_4 (struct scsi_info*) ;
 long FUNC_5 (struct scsi_info*,scalar_t__) ;
 long FUNC_6 (int ) ;

__attribute__((used)) static long FUNC_7(struct scsi_info *VAR_8)
{
 long VAR_9 = VAR_0;
 uint VAR_10;

 VAR_9 = FUNC_2(VAR_8->dds.unit_id, VAR_1, 30000,
        0, 0, 0, 0);
 if (VAR_9 == 128)
  VAR_8->flags |= VAR_4;
 else if (VAR_9 != VAR_2)
  FUNC_0(&VAR_8->dev, "Error from Enable Prepare for Suspend: %ld\n",
   VAR_9);

 VAR_8->flags &= VAR_5;
 VAR_8->rsp_q_timer.timer_pops = 0;
 VAR_8->debit = 0;
 VAR_8->credit = 0;

 VAR_9 = FUNC_6(VAR_8->dma_dev);
 if (VAR_9) {
  FUNC_1(&VAR_8->dev, "establish_new_q: failed to enable interrupts, rc %ld\n",
    VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_3(VAR_8, &VAR_10);
 if (VAR_9) {
  FUNC_0(&VAR_8->dev, "establish_new_q: check_init_msg failed, rc %ld\n",
   VAR_9);
  return VAR_9;
 }

 if (VAR_10 == VAR_7) {
  VAR_9 = FUNC_5(VAR_8, VAR_3);
  switch (VAR_9) {
  case 128:
  case 131:
  case 132:
   VAR_9 = VAR_0;
   break;

  case 129:
  case 130:
   break;

  default:
   VAR_8->state = VAR_6;
   VAR_9 = 130;
   break;
  }
 } else if (VAR_10 == VAR_3) {
  VAR_9 = FUNC_4(VAR_8);
 }

 return VAR_9;
}
