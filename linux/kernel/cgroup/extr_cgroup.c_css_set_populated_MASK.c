
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct css_set {int mg_tasks; int tasks; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct css_set *VAR_1)
{
 FUNC_1(&VAR_0);

 return !FUNC_0(&VAR_1->tasks) || !FUNC_0(&VAR_1->mg_tasks);
}
