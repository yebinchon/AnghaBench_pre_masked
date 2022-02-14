
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsi_thread {int task; int event; int thread_done; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline int FUNC_3(struct rsi_thread *VAR_0)
{
 FUNC_0(&VAR_0->thread_done);
 FUNC_2(&VAR_0->event);

 return FUNC_1(VAR_0->task);
}
