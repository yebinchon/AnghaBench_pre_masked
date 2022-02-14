
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct most_channel {int fifo_lock; int trash_fifo; } ;
struct mbo {int list; struct most_channel* context; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_3(struct mbo *VAR_0)
{
 unsigned long VAR_1;
 struct most_channel *VAR_2 = VAR_0->context;

 FUNC_1(&VAR_2->fifo_lock, VAR_1);
 FUNC_0(&VAR_0->list, &VAR_2->trash_fifo);
 FUNC_2(&VAR_2->fifo_lock, VAR_1);
}
