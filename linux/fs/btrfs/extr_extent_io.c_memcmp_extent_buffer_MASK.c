
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct extent_buffer {size_t start; unsigned long len; struct page** pages; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,size_t) ;
 size_t FUNC_2 (unsigned long,scalar_t__) ;
 size_t FUNC_3 (size_t) ;
 char* FUNC_4 (struct page*) ;

int FUNC_5(const struct extent_buffer *VAR_2, const void *VAR_3,
    unsigned long VAR_4, unsigned long VAR_5)
{
 size_t VAR_6;
 size_t VAR_7;
 struct page *VAR_8;
 char *VAR_9;
 char *VAR_10 = (char *)VAR_3;
 size_t VAR_11 = FUNC_3(VAR_2->start);
 unsigned long VAR_12 = (VAR_11 + VAR_4) >> VAR_0;
 int VAR_13 = 0;

 FUNC_0(VAR_4 > VAR_2->len);
 FUNC_0(VAR_4 + VAR_5 > VAR_2->start + VAR_2->len);

 VAR_7 = FUNC_3(VAR_11 + VAR_4);

 while (VAR_5 > 0) {
  VAR_8 = VAR_2->pages[VAR_12];

  VAR_6 = FUNC_2(VAR_5, (VAR_1 - VAR_7));

  VAR_9 = FUNC_4(VAR_8);
  VAR_13 = FUNC_1(VAR_10, VAR_9 + VAR_7, VAR_6);
  if (VAR_13)
   break;

  VAR_10 += VAR_6;
  VAR_5 -= VAR_6;
  VAR_7 = 0;
  VAR_12++;
 }
 return VAR_13;
}
