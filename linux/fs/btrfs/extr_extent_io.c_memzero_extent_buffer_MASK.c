
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct extent_buffer {size_t start; unsigned long len; struct page** pages; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,size_t) ;
 size_t FUNC_3 (unsigned long,scalar_t__) ;
 size_t FUNC_4 (size_t) ;
 char* FUNC_5 (struct page*) ;

void FUNC_6(struct extent_buffer *VAR_2, unsigned long VAR_3,
  unsigned long VAR_4)
{
 size_t VAR_5;
 size_t VAR_6;
 struct page *VAR_7;
 char *VAR_8;
 size_t VAR_9 = FUNC_4(VAR_2->start);
 unsigned long VAR_10 = (VAR_9 + VAR_3) >> VAR_0;

 FUNC_1(VAR_3 > VAR_2->len);
 FUNC_1(VAR_3 + VAR_4 > VAR_2->start + VAR_2->len);

 VAR_6 = FUNC_4(VAR_9 + VAR_3);

 while (VAR_4 > 0) {
  VAR_7 = VAR_2->pages[VAR_10];
  FUNC_1(!FUNC_0(VAR_7));

  VAR_5 = FUNC_3(VAR_4, VAR_1 - VAR_6);
  VAR_8 = FUNC_5(VAR_7);
  FUNC_2(VAR_8 + VAR_6, 0, VAR_5);

  VAR_4 -= VAR_5;
  VAR_6 = 0;
  VAR_10++;
 }
}
