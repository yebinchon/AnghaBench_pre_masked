
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scc_channel {int lock; } ;


 int FUNC_0 (struct scc_channel*,void (*) (struct timer_list*),unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct scc_channel *VAR_0,
          void (*VAR_1)(struct timer_list *VAR_2),
          unsigned long VAR_3)
{
 unsigned long VAR_4;

 FUNC_1(&VAR_0->lock, VAR_4);
 FUNC_0(VAR_0, VAR_1, VAR_3);
 FUNC_2(&VAR_0->lock, VAR_4);
}
