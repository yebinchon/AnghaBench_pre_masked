
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ufshcd_lrb {int task_tag; int ucd_rsp_ptr; } ;
struct TYPE_2__ {int last_hibern8_exit_tstamp; } ;
struct ufs_hba {int dev; int eeh_work; int pm_op_in_progress; TYPE_1__ ufs_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ufshcd_lrb*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct ufs_hba*) ;
 int FUNC_9 (struct ufs_hba*) ;
 int FUNC_10 (struct ufs_hba*,int,int) ;
 int FUNC_11 (struct ufshcd_lrb*,int) ;

__attribute__((used)) static inline int
FUNC_12(struct ufs_hba *VAR_5, struct ufshcd_lrb *VAR_6)
{
 int VAR_7 = 0;
 int VAR_8;
 int VAR_9;


 VAR_9 = FUNC_6(VAR_6);

 switch (VAR_9) {
 case 130:
  VAR_7 = FUNC_4(VAR_6->ucd_rsp_ptr);
  VAR_5->ufs_stats.last_hibern8_exit_tstamp = FUNC_2(0, 0);
  switch (VAR_7) {
  case 128:




   VAR_7 = FUNC_5(VAR_6->ucd_rsp_ptr);





   VAR_8 = VAR_7 & VAR_4;
   VAR_7 = FUNC_11(VAR_6, VAR_8);
   if (!VAR_5->pm_op_in_progress &&
       FUNC_7(VAR_6->ucd_rsp_ptr))
    FUNC_3(&VAR_5->eeh_work);
   break;
  case 129:

   VAR_7 = VAR_1 << 16;
   FUNC_0(VAR_5->dev,
    "Reject UPIU not fully implemented\n");
   break;
  default:
   FUNC_0(VAR_5->dev,
    "Unexpected request response code = %x\n",
    VAR_7);
   VAR_7 = VAR_1 << 16;
   break;
  }
  break;
 case 138:
  VAR_7 |= VAR_0 << 16;
  break;
 case 135:
  VAR_7 |= VAR_3 << 16;
  break;
 case 136:
 case 134:
 case 133:
 case 132:
 case 131:
 case 137:
 default:
  VAR_7 |= VAR_1 << 16;
  FUNC_0(VAR_5->dev,
    "OCS error from controller = %x for tag %d\n",
    VAR_9, VAR_6->task_tag);
  FUNC_8(VAR_5);
  FUNC_9(VAR_5);
  break;
 }

 if (FUNC_1(VAR_7) != VAR_2)
  FUNC_10(VAR_5, 1 << VAR_6->task_tag, 1);
 return VAR_7;
}
