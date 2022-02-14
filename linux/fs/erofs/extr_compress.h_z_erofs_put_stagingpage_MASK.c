
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int lru; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (int *,struct list_head*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;

__attribute__((used)) static inline bool FUNC_4(struct list_head *VAR_0,
        struct page *VAR_1)
{
 if (!FUNC_3(VAR_1))
  return 0;


 if (FUNC_1(VAR_1) > 1)
  FUNC_2(VAR_1);
 else
  FUNC_0(&VAR_1->lru, VAR_0);
 return 1;
}
