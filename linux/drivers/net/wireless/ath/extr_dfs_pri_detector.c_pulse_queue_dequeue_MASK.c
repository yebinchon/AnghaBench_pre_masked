
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pulse_elem {int head; } ;
struct pri_detector {scalar_t__ count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct pulse_elem*) ;
 struct pulse_elem* FUNC_2 (struct pri_detector*) ;

__attribute__((used)) static bool FUNC_3(struct pri_detector *VAR_0)
{
 struct pulse_elem *VAR_1 = FUNC_2(VAR_0);
 if (VAR_1 != ((void*)0)) {
  FUNC_0(&VAR_1->head);
  VAR_0->count--;

  FUNC_1(VAR_1);
 }
 return (VAR_0->count > 0);
}
