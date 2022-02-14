
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_state {int dummy; } ;
struct vchiq_arm_state {scalar_t__ vc_suspend_state; scalar_t__ vc_resume_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct vchiq_arm_state* FUNC_0 (struct vchiq_state*) ;
 scalar_t__ FUNC_1 (struct vchiq_state*) ;

__attribute__((used)) static inline int
FUNC_2(struct vchiq_state *VAR_2)
{
 struct vchiq_arm_state *VAR_3 = FUNC_0(VAR_2);

 return (VAR_3->vc_suspend_state > VAR_1) &&
   (VAR_3->vc_resume_state < VAR_0) &&
   FUNC_1(VAR_2);
}
