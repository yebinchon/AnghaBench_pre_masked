
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_context {int active_ctx_list; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct perf_event_context *VAR_0)
{
 FUNC_3();

 FUNC_0(FUNC_2(&VAR_0->active_ctx_list));

 FUNC_1(&VAR_0->active_ctx_list);
}
