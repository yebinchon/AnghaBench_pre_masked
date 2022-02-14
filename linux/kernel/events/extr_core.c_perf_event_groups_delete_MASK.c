
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_groups {int tree; } ;
struct perf_event {int group_node; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct perf_event*) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void
FUNC_5(struct perf_event_groups *VAR_0,
    struct perf_event *VAR_1)
{
 FUNC_2(FUNC_0(&VAR_1->group_node) ||
       FUNC_1(&VAR_0->tree));

 FUNC_4(&VAR_1->group_node, &VAR_0->tree);
 FUNC_3(VAR_1);
}
