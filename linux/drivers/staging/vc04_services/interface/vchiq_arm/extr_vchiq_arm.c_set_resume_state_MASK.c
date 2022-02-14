
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_arm_state {int vc_resume_state; int vc_resume_complete; } ;
typedef enum vc_resume_status { ____Placeholder_vc_resume_status } vc_resume_status ;


 int FUNC_0 () ;





 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vchiq_arm_state*,int ) ;

void
FUNC_4(struct vchiq_arm_state *VAR_1,
   enum vc_resume_status VAR_2)
{

 VAR_1->vc_resume_state = VAR_2;


 switch (VAR_2) {
 case 132:
  break;
 case 131:
  FUNC_2(&VAR_1->vc_resume_complete);
  break;
 case 129:
  break;
 case 130:
  break;
 case 128:
  FUNC_1(&VAR_1->vc_resume_complete);
  FUNC_3(VAR_1, VAR_0);
  break;
 default:
  FUNC_0();
  break;
 }
}
