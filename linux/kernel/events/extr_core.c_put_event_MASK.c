
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int refcount; } ;


 int FUNC_0 (struct perf_event*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct perf_event *VAR_0)
{
 if (!FUNC_1(&VAR_0->refcount))
  return;

 FUNC_0(VAR_0);
}
