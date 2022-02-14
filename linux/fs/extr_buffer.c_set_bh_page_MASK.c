
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct buffer_head {char* b_data; struct page* b_page; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 scalar_t__ FUNC_1 (struct page*) ;
 char* FUNC_2 (struct page*) ;

void FUNC_3(struct buffer_head *VAR_1,
  struct page *VAR_2, unsigned long VAR_3)
{
 VAR_1->b_page = VAR_2;
 FUNC_0(VAR_3 >= VAR_0);
 if (FUNC_1(VAR_2))



  VAR_1->b_data = (char *)(0 + VAR_3);
 else
  VAR_1->b_data = FUNC_2(VAR_2) + VAR_3;
}
