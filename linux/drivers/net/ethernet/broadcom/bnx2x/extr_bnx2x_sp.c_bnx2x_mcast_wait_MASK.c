
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ (* wait_comp ) (struct bnx2x*,TYPE_1__*) ;int pstate; } ;
struct bnx2x_mcast_obj {TYPE_1__ raw; int sched_state; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bnx2x*,int ,int ) ;
 scalar_t__ FUNC_1 (struct bnx2x*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct bnx2x *VAR_1,
       struct bnx2x_mcast_obj *VAR_2)
{
 if (FUNC_0(VAR_1, VAR_2->sched_state, VAR_2->raw.pstate) ||
   VAR_2->raw.wait_comp(VAR_1, &VAR_2->raw))
  return -VAR_0;

 return 0;
}
