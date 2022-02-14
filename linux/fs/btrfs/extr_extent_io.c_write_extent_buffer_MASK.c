
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
 int FUNC_2 (char*,char*,size_t) ;
 size_t FUNC_3 (unsigned long,scalar_t__) ;
 size_t FUNC_4 (size_t) ;
 char* FUNC_5 (struct page*) ;

void FUNC_6(struct extent_buffer *VAR_2, const void *VAR_3,
    unsigned long VAR_4, unsigned long VAR_5)
{
 size_t VAR_6;
 size_t VAR_7;
 struct page *VAR_8;
 char *VAR_9;
 char *VAR_10 = (char *)VAR_3;
 size_t VAR_11 = FUNC_4(VAR_2->start);
 unsigned long VAR_12 = (VAR_11 + VAR_4) >> VAR_0;

 FUNC_1(VAR_4 > VAR_2->len);
 FUNC_1(VAR_4 + VAR_5 > VAR_2->start + VAR_2->len);

 VAR_7 = FUNC_4(VAR_11 + VAR_4);

 while (VAR_5 > 0) {
  VAR_8 = VAR_2->pages[VAR_12];
  FUNC_1(!FUNC_0(VAR_8));

  VAR_6 = FUNC_3(VAR_5, VAR_1 - VAR_7);
  VAR_9 = FUNC_5(VAR_8);
  FUNC_2(VAR_9 + VAR_7, VAR_10, VAR_6);

  VAR_10 += VAR_6;
  VAR_5 -= VAR_6;
  VAR_7 = 0;
  VAR_12++;
 }
}
