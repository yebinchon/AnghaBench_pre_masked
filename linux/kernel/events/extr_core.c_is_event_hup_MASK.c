
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {scalar_t__ state; int child_mutex; int child_list; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct perf_event *VAR_1)
{
 bool VAR_2;

 if (VAR_1->state > VAR_0)
  return 0;

 FUNC_1(&VAR_1->child_mutex);
 VAR_2 = FUNC_0(&VAR_1->child_list);
 FUNC_2(&VAR_1->child_mutex);
 return VAR_2;
}
