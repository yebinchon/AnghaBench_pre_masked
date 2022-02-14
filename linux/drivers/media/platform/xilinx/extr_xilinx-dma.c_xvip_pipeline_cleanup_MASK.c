
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xvip_pipeline {scalar_t__ use_count; int lock; } ;


 int FUNC_0 (struct xvip_pipeline*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct xvip_pipeline *VAR_0)
{
 FUNC_1(&VAR_0->lock);


 if (--VAR_0->use_count == 0)
  FUNC_0(VAR_0);

 FUNC_2(&VAR_0->lock);
}
