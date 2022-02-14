
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct page {int dummy; } ;
struct extent_buffer {scalar_t__ len; size_t start; struct page** pages; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (unsigned long,unsigned long) ;
 size_t FUNC_3 (size_t) ;
 char* FUNC_4 (struct page*) ;
 int FUNC_5 (struct extent_buffer*,char*,unsigned long,size_t) ;

void FUNC_6(struct extent_buffer *VAR_2, struct extent_buffer *VAR_3,
   unsigned long VAR_4, unsigned long VAR_5,
   unsigned long VAR_6)
{
 u64 VAR_7 = VAR_2->len;
 size_t VAR_8;
 size_t VAR_9;
 struct page *VAR_10;
 char *VAR_11;
 size_t VAR_12 = FUNC_3(VAR_2->start);
 unsigned long VAR_13 = (VAR_12 + VAR_4) >> VAR_0;

 FUNC_1(VAR_3->len != VAR_7);

 VAR_9 = FUNC_3(VAR_12 + VAR_4);

 while (VAR_6 > 0) {
  VAR_10 = VAR_2->pages[VAR_13];
  FUNC_1(!FUNC_0(VAR_10));

  VAR_8 = FUNC_2(VAR_6, (unsigned long)(VAR_1 - VAR_9));

  VAR_11 = FUNC_4(VAR_10);
  FUNC_5(VAR_3, VAR_11 + VAR_9, VAR_5, VAR_8);

  VAR_5 += VAR_8;
  VAR_6 -= VAR_8;
  VAR_9 = 0;
  VAR_13++;
 }
}
