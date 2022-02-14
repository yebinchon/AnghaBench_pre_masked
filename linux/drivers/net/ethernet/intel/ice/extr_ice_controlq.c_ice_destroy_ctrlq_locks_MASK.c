
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_ctl_q_info {int rq_lock; int sq_lock; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct ice_ctl_q_info *VAR_0)
{
 FUNC_0(&VAR_0->sq_lock);
 FUNC_0(&VAR_0->rq_lock);
}
