
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {struct list_head* prev; struct list_head* next; } ;


 struct list_head* FUNC_0 (struct list_head**,struct list_head*,struct list_head*) ;
 struct list_head* FUNC_1 (struct list_head**,struct list_head*) ;

__attribute__((used)) static inline bool FUNC_2(struct list_head *VAR_0,
       struct list_head *VAR_1)
{
 struct list_head *VAR_2;







 if (FUNC_0(&VAR_0->next, VAR_0, VAR_1) != VAR_0)
  return 0;
 VAR_2 = FUNC_1(&VAR_1->prev, VAR_0);






 VAR_2->next = VAR_0;
 VAR_0->prev = VAR_2;

 return 1;
}
