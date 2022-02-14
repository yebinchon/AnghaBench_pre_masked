
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_arm_state {int vc_suspend_state; int vc_suspend_complete; int vc_resume_complete; int vc_resume_state; } ;
typedef enum vc_suspend_status { ____Placeholder_vc_suspend_status } vc_suspend_status ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;







 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vchiq_arm_state*,int ) ;

void
FUNC_4(struct vchiq_arm_state *VAR_2,
    enum vc_suspend_status VAR_3)
{

 VAR_2->vc_suspend_state = VAR_3;


 switch (VAR_3) {
 case 133:
  FUNC_1(&VAR_2->vc_suspend_complete);
  break;
 case 130:
  FUNC_1(&VAR_2->vc_suspend_complete);
  break;
 case 134:
  FUNC_1(&VAR_2->vc_suspend_complete);
  VAR_2->vc_resume_state = VAR_1;
  FUNC_1(&VAR_2->vc_resume_complete);
  break;
 case 132:
  FUNC_2(&VAR_2->vc_suspend_complete);
  break;
 case 129:
  break;
 case 131:
  FUNC_3(VAR_2, VAR_0);
  break;
 case 128:
  FUNC_1(&VAR_2->vc_suspend_complete);
  break;
 default:
  FUNC_0();
  break;
 }
}
