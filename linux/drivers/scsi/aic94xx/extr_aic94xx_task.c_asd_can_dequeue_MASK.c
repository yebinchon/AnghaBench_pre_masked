
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int can_queue; int pend_q_lock; } ;
struct asd_ha_struct {TYPE_1__ seq; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct asd_ha_struct *VAR_0, int VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(&VAR_0->seq.pend_q_lock, VAR_2);
 VAR_0->seq.can_queue += VAR_1;
 FUNC_1(&VAR_0->seq.pend_q_lock, VAR_2);
}
