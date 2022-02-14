
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_context {int active_ctx_list; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct list_head*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 struct list_head* FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct perf_event_context *VAR_1)
{
 struct list_head *VAR_2 = FUNC_4(&VAR_0);

 FUNC_3();

 FUNC_0(!FUNC_2(&VAR_1->active_ctx_list));

 FUNC_1(&VAR_1->active_ctx_list, VAR_2);
}
