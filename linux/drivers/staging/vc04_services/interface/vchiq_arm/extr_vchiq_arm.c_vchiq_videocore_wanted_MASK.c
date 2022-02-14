
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_state {int dummy; } ;
struct vchiq_arm_state {scalar_t__ resume_blocked; int videocore_use_count; scalar_t__ blocked_count; } ;


 struct vchiq_arm_state* FUNC_0 (struct vchiq_state*) ;
 int FUNC_1 (struct vchiq_state*) ;

int
FUNC_2(struct vchiq_state *VAR_0)
{
 struct vchiq_arm_state *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1)

  return 1;
 else if (VAR_1->blocked_count)
  return 1;
 else if (!VAR_1->videocore_use_count)

  if (VAR_1->resume_blocked)
   return 0;
  else
   return FUNC_1(VAR_0);
 else

  return 1;
}
