
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int lru; } ;
struct list_head {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct page* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct list_head*) ;
 struct page* FUNC_4 (struct list_head*) ;
 int FUNC_5 (struct page*) ;

struct page *FUNC_6(struct list_head *VAR_1, gfp_t VAR_2, bool VAR_3)
{
 struct page *VAR_4;

 if (!FUNC_3(VAR_1)) {
  VAR_4 = FUNC_4(VAR_1);
  FUNC_0(FUNC_5(VAR_4) != 1);
  FUNC_2(&VAR_4->lru);
 } else {
  VAR_4 = FUNC_1(VAR_2 | (VAR_3 ? VAR_0 : 0), 0);
 }
 return VAR_4;
}
