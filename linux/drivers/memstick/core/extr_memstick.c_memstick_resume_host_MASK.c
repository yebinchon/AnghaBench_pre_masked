
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memstick_host {int lock; scalar_t__ card; } ;


 int FUNC_0 (struct memstick_host*) ;
 int FUNC_1 (struct memstick_host*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct memstick_host *VAR_0)
{
 int VAR_1 = 0;

 FUNC_2(&VAR_0->lock);
 if (VAR_0->card)
  VAR_1 = FUNC_1(VAR_0);
 FUNC_3(&VAR_0->lock);

 if (!VAR_1)
  FUNC_0(VAR_0);
}
