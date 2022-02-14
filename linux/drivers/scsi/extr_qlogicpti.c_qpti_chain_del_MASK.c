
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlogicpti {struct qlogicpti* next; } ;


 struct qlogicpti* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct qlogicpti *VAR_2)
{
 FUNC_0(&VAR_1);
 if (VAR_0 == VAR_2) {
  VAR_0 = VAR_2->next;
 } else {
  struct qlogicpti *VAR_3 = VAR_0;
  while(VAR_3->next != VAR_2)
   VAR_3 = VAR_3->next;
  VAR_3->next = VAR_2->next;
 }
 VAR_2->next = ((void*)0);
 FUNC_1(&VAR_1);
}
