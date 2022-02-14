
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct page {int dummy; } ;
struct extent_buffer {struct page** pages; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned int const) ;
 unsigned long VAR_0 ;
 size_t VAR_1 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct extent_buffer*,unsigned long,unsigned long,unsigned long*,size_t*) ;
 int * FUNC_5 (struct page*) ;

void FUNC_6(struct extent_buffer *VAR_2, unsigned long VAR_3,
         unsigned long VAR_4, unsigned long VAR_5)
{
 u8 *VAR_6;
 struct page *VAR_7;
 unsigned long VAR_8;
 size_t VAR_9;
 const unsigned int VAR_10 = VAR_4 + VAR_5;
 int VAR_11 = VAR_0 - (VAR_4 % VAR_0);
 u8 VAR_12 = FUNC_0(VAR_4);

 FUNC_4(VAR_2, VAR_3, VAR_4, &VAR_8, &VAR_9);
 VAR_7 = VAR_2->pages[VAR_8];
 FUNC_3(!FUNC_2(VAR_7));
 VAR_6 = FUNC_5(VAR_7);

 while (VAR_5 >= VAR_11) {
  VAR_6[VAR_9] |= VAR_12;
  VAR_5 -= VAR_11;
  VAR_11 = VAR_0;
  VAR_12 = ~0;
  if (++VAR_9 >= VAR_1 && VAR_5 > 0) {
   VAR_9 = 0;
   VAR_7 = VAR_2->pages[++VAR_8];
   FUNC_3(!FUNC_2(VAR_7));
   VAR_6 = FUNC_5(VAR_7);
  }
 }
 if (VAR_5) {
  VAR_12 &= FUNC_1(VAR_10);
  VAR_6[VAR_9] |= VAR_12;
 }
}
