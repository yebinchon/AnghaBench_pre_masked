
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xvip_pipeline {int stream_count; int num_dmas; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct xvip_pipeline*,int) ;

__attribute__((used)) static int FUNC_3(struct xvip_pipeline *VAR_0, bool VAR_1)
{
 int VAR_2 = 0;

 FUNC_0(&VAR_0->lock);

 if (VAR_1) {
  if (VAR_0->stream_count == VAR_0->num_dmas - 1) {
   VAR_2 = FUNC_2(VAR_0, 1);
   if (VAR_2 < 0)
    goto done;
  }
  VAR_0->stream_count++;
 } else {
  if (--VAR_0->stream_count == 0)
   FUNC_2(VAR_0, 0);
 }

done:
 FUNC_1(&VAR_0->lock);
 return VAR_2;
}
