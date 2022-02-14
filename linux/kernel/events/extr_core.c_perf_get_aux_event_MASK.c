
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {struct perf_event* aux_event; int refcount; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct perf_event*,struct perf_event*) ;

__attribute__((used)) static int FUNC_2(struct perf_event *VAR_0,
         struct perf_event *VAR_1)
{






 if (!VAR_1)
  return 0;

 if (!FUNC_1(VAR_0, VAR_1))
  return 0;

 if (!FUNC_0(&VAR_1->refcount))
  return 0;







 VAR_0->aux_event = VAR_1;

 return 1;
}
