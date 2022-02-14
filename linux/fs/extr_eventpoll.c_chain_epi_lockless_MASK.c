
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eventpoll {int ovflist; } ;
struct epitem {int next; struct eventpoll* ep; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,int *) ;
 int FUNC_1 (int *,struct epitem*) ;

__attribute__((used)) static inline bool FUNC_2(struct epitem *VAR_1)
{
 struct eventpoll *VAR_2 = VAR_1->ep;


 if (FUNC_0(&VAR_1->next, VAR_0, ((void*)0)) != VAR_0)
  return 0;


 VAR_1->next = FUNC_1(&VAR_2->ovflist, VAR_1);

 return 1;
}
