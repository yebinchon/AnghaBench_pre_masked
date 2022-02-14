
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer {int dummy; } ;
struct perf_event {int cpu; scalar_t__ ctx; scalar_t__ clock; scalar_t__ pmu; int mmap_mutex; int mmap_count; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct perf_event*) ;
 scalar_t__ FUNC_2 (struct perf_event*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct perf_event*,struct ring_buffer*) ;
 struct ring_buffer* FUNC_6 (struct perf_event*) ;

__attribute__((used)) static int
FUNC_7(struct perf_event *VAR_1, struct perf_event *VAR_2)
{
 struct ring_buffer *VAR_3 = ((void*)0);
 int VAR_4 = -VAR_0;

 if (!VAR_2)
  goto set;


 if (VAR_1 == VAR_2)
  goto out;




 if (VAR_2->cpu != VAR_1->cpu)
  goto out;




 if (VAR_2->cpu == -1 && VAR_2->ctx != VAR_1->ctx)
  goto out;




 if (VAR_2->clock != VAR_1->clock)
  goto out;





 if (FUNC_2(VAR_2) != FUNC_2(VAR_1))
  goto out;




 if (FUNC_1(VAR_1) && FUNC_1(VAR_2) &&
     VAR_1->pmu != VAR_2->pmu)
  goto out;

set:
 FUNC_3(&VAR_1->mmap_mutex);

 if (FUNC_0(&VAR_1->mmap_count))
  goto unlock;

 if (VAR_2) {

  VAR_3 = FUNC_6(VAR_2);
  if (!VAR_3)
   goto unlock;
 }

 FUNC_5(VAR_1, VAR_3);

 VAR_4 = 0;
unlock:
 FUNC_4(&VAR_1->mmap_mutex);

out:
 return VAR_4;
}
