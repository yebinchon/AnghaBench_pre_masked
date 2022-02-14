
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_state {scalar_t__ platform_state; } ;
struct vchiq_2835_state {int inited; int arm_state; } ;
typedef scalar_t__ VCHIQ_STATUS_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (struct vchiq_state*,int *) ;

VCHIQ_STATUS_T
FUNC_2(struct vchiq_state *VAR_3)
{
 VCHIQ_STATUS_T VAR_4 = VAR_2;
 struct vchiq_2835_state *VAR_5;

 VAR_3->platform_state = FUNC_0(sizeof(*VAR_5), VAR_0);
 if (!VAR_3->platform_state)
  return VAR_1;

 VAR_5 = (struct vchiq_2835_state *)VAR_3->platform_state;

 VAR_5->inited = 1;
 VAR_4 = FUNC_1(VAR_3, &VAR_5->arm_state);

 if (VAR_4 != VAR_2)
  VAR_5->inited = 0;

 return VAR_4;
}
