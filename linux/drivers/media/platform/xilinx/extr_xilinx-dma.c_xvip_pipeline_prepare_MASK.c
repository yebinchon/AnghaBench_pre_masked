
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xvip_pipeline {scalar_t__ use_count; int lock; } ;
struct xvip_dma {int dummy; } ;


 int FUNC_0 (struct xvip_pipeline*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct xvip_pipeline*,struct xvip_dma*) ;

__attribute__((used)) static int FUNC_4(struct xvip_pipeline *VAR_0,
     struct xvip_dma *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_0->lock);


 if (VAR_0->use_count == 0) {
  VAR_2 = FUNC_3(VAR_0, VAR_1);
  if (VAR_2 < 0) {
   FUNC_0(VAR_0);
   goto done;
  }
 }

 VAR_0->use_count++;
 VAR_2 = 0;

done:
 FUNC_2(&VAR_0->lock);
 return VAR_2;
}
