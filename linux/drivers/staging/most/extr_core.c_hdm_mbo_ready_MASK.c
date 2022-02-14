
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct most_channel {int fifo_lock; int halt_fifo; scalar_t__ enqueue_halt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct most_channel *VAR_0)
{
 bool VAR_1;

 if (VAR_0->enqueue_halt)
  return 0;

 FUNC_1(&VAR_0->fifo_lock);
 VAR_1 = FUNC_0(&VAR_0->halt_fifo);
 FUNC_2(&VAR_0->fifo_lock);

 return !VAR_1;
}
