
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pstate; } ;
struct bnx2x_mcast_obj {TYPE_1__ raw; int sched_state; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct bnx2x_mcast_obj *VAR_0)
{
 return !!FUNC_0(VAR_0->sched_state, VAR_0->raw.pstate);
}
