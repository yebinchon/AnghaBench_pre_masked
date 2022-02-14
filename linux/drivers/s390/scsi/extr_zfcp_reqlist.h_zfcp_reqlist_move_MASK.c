
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_reqlist {int lock; int * buckets; } ;
struct list_head {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,struct list_head*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_3(struct zfcp_reqlist *VAR_1,
         struct list_head *VAR_2)
{
 unsigned int VAR_3;
 unsigned long VAR_4;

 FUNC_1(&VAR_1->lock, VAR_4);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(&VAR_1->buckets[VAR_3], VAR_2);
 FUNC_2(&VAR_1->lock, VAR_4);
}
