
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int refcount; } ;


 scalar_t__ FUNC_0 (int,char*,int ,struct perf_event*) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct perf_event *VAR_0)
{
 if (FUNC_0(FUNC_2(&VAR_0->refcount, 1, 0) != 1,
    "unexpected event refcount: %ld; ptr=%p\n",
    FUNC_3(&VAR_0->refcount), VAR_0)) {

  return;
 }

 FUNC_1(VAR_0);
}
