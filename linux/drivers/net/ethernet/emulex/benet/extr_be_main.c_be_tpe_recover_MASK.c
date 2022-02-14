
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct be_error_recovery {int recovery_state; void* resched_delay; void* ue_to_reset_time; void* ue_to_poll_time; } ;
struct be_adapter {TYPE_1__* pdev; int pf_num; struct be_error_recovery error_recovery; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;

 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (struct be_adapter*) ;
 int FUNC_3 (int *,char*,...) ;

__attribute__((used)) static int FUNC_4(struct be_adapter *VAR_6)
{
 struct be_error_recovery *VAR_7 = &VAR_6->error_recovery;
 int VAR_8 = -VAR_0;
 u32 VAR_9;

 switch (VAR_7->recovery_state) {
 case 130:
  VAR_7->recovery_state = 131;
  VAR_7->resched_delay = VAR_4;
  break;

 case 131:
  VAR_9 = FUNC_0(VAR_6);
  if ((VAR_9 & VAR_5) !=
      VAR_5) {
   FUNC_3(&VAR_6->pdev->dev,
    "Unrecoverable HW error detected: 0x%x\n", VAR_9);
   VAR_8 = -VAR_1;
   VAR_7->resched_delay = 0;
   break;
  }

  FUNC_3(&VAR_6->pdev->dev, "Recoverable HW error detected\n");






  if (VAR_6->pf_num == 0) {
   VAR_7->recovery_state = 128;
   VAR_7->resched_delay = VAR_7->ue_to_reset_time -
     VAR_4;
   break;
  }

  VAR_7->recovery_state = 129;
  VAR_7->resched_delay = VAR_7->ue_to_poll_time -
     VAR_4;
  break;

 case 128:
  if (!FUNC_1(VAR_6)) {
   FUNC_3(&VAR_6->pdev->dev,
    "Failed to meet recovery criteria\n");
   VAR_8 = -VAR_2;
   VAR_7->resched_delay = 0;
   break;
  }
  FUNC_2(VAR_6);
  VAR_7->recovery_state = 129;
  VAR_7->resched_delay = VAR_7->ue_to_poll_time -
     VAR_7->ue_to_reset_time;
  break;

 case 129:
  VAR_7->recovery_state = VAR_3;
  VAR_7->resched_delay = 0;
  VAR_8 = 0;
  break;

 default:
  VAR_8 = -VAR_1;
  VAR_7->resched_delay = 0;
  break;
 }

 return VAR_8;
}
