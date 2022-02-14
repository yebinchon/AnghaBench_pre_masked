
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {scalar_t__ group_index; int group_node; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct perf_event *VAR_0)
{
 FUNC_0(&VAR_0->group_node);
 VAR_0->group_index = 0;
}
