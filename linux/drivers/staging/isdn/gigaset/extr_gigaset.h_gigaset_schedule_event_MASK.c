
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cardstate {int lock; int event_tasklet; scalar_t__ running; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct cardstate *VAR_0)
{
 unsigned long VAR_1;
 FUNC_0(&VAR_0->lock, VAR_1);
 if (VAR_0->running)
  FUNC_2(&VAR_0->event_tasklet);
 FUNC_1(&VAR_0->lock, VAR_1);
}
