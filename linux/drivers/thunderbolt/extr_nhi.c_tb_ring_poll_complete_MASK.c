
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_ring {TYPE_1__* nhi; int lock; scalar_t__ start_poll; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (struct tb_ring*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct tb_ring *VAR_0)
{
 unsigned long VAR_1;

 FUNC_2(&VAR_0->nhi->lock, VAR_1);
 FUNC_1(&VAR_0->lock);
 if (VAR_0->start_poll)
  FUNC_0(VAR_0, 0);
 FUNC_3(&VAR_0->lock);
 FUNC_4(&VAR_0->nhi->lock, VAR_1);
}
