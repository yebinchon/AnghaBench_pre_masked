
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_state {scalar_t__ platform_state; } ;
struct vchiq_arm_state {int dummy; } ;
struct vchiq_2835_state {struct vchiq_arm_state arm_state; int inited; } ;


 int FUNC_0 (int) ;

struct vchiq_arm_state*
FUNC_1(struct vchiq_state *VAR_0)
{
 struct vchiq_2835_state *VAR_1;

 VAR_1 = (struct vchiq_2835_state *)VAR_0->platform_state;

 FUNC_0(!VAR_1->inited);

 return &VAR_1->arm_state;
}
