
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ramoops_context {int max_dump_cnt; int max_ftrace_cnt; int * fprzs; int * dprzs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ramoops_context *VAR_0)
{
 int VAR_1;


 if (VAR_0->dprzs) {
  for (VAR_1 = 0; VAR_1 < VAR_0->max_dump_cnt; VAR_1++)
   FUNC_1(VAR_0->dprzs[VAR_1]);

  FUNC_0(VAR_0->dprzs);
  VAR_0->max_dump_cnt = 0;
 }


 if (VAR_0->fprzs) {
  for (VAR_1 = 0; VAR_1 < VAR_0->max_ftrace_cnt; VAR_1++)
   FUNC_1(VAR_0->fprzs[VAR_1]);
  FUNC_0(VAR_0->fprzs);
  VAR_0->max_ftrace_cnt = 0;
 }
}
