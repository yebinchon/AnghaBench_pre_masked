
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int suspend_state_t ;
struct regulator_state {int dummy; } ;
struct regulator_dev {TYPE_1__* constraints; } ;
struct TYPE_2__ {struct regulator_state state_disk; struct regulator_state state_mem; struct regulator_state state_standby; } ;






__attribute__((used)) static inline struct regulator_state *
FUNC_0(struct regulator_dev *VAR_0, suspend_state_t VAR_1)
{
 if (VAR_0->constraints == ((void*)0))
  return ((void*)0);

 switch (VAR_1) {
 case 128:
  return &VAR_0->constraints->state_standby;
 case 129:
  return &VAR_0->constraints->state_mem;
 case 130:
  return &VAR_0->constraints->state_disk;
 default:
  return ((void*)0);
 }
}
